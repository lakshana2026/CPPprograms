#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <atomic>
#include <chrono>

using namespace std;

queue<int> buffer;
mutex mtx;
condition_variable cv;

const int MAX_ITEMS = 10;
const int BUFFER_SIZE = 5;

atomic<int> producedCount(0);
atomic<int> consumedCount(0);
atomic<bool> finished(false);

// Producer function
void producer() {
for (int i = 1; i <= MAX_ITEMS; i++) {
this_thread::sleep_for(chrono::milliseconds(100));


    {
        unique_lock<mutex> lock(mtx);

        cv.wait(lock, [] {
            return buffer.size() < BUFFER_SIZE;
        });

        buffer.push(i);
        producedCount++;

        cout << "Produced: " << i << endl;
    }

    cv.notify_all();
}

finished = true;
cv.notify_all();


}

// Consumer function
void consumer(int consumerId) {
while (true) {
unique_lock<mutex> lock(mtx);


    cv.wait(lock, [] {
        return !buffer.empty() || finished;
    });

    if (buffer.empty() && finished)
        break;

    int item = buffer.front();
    buffer.pop();
    consumedCount++;

    cout << "Consumer " << consumerId
         << " consumed: " << item << endl;

    lock.unlock();

    cv.notify_all();

    this_thread::sleep_for(chrono::milliseconds(150));
}


}

int main() {
cout << "Producer-Consumer System Started\n" << endl;

thread producerThread(producer);
thread consumerThread1(consumer, 1);
thread consumerThread2(consumer, 2);

producerThread.join();
consumerThread1.join();
consumerThread2.join();

cout << "\n--- Final Statistics ---" << endl;
cout << "Total Items Produced: " << producedCount << endl;
cout << "Total Items Consumed: " << consumedCount << endl;
cout << "Items Remaining in Buffer: " << buffer.size() << endl;

cout << "\nProducer-Consumer System Completed" << endl;

return 0;

}
