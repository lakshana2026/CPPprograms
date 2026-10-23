#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <algorithm>

using namespace std;

// Observer Interface
class Observer {
public:
virtual void notify(const string& message) = 0;
virtual ~Observer() {}
};

// Email Notification
class EmailNotification : public Observer {
private:
string email;

public:
EmailNotification(string e) : email(e) {}

void notify(const string& message) override {
    cout << "Email sent to " << email
         << ": " << message << endl;
}


};

// SMS Notification
class SMSNotification : public Observer {
private:
string phoneNumber;

public:
SMSNotification(string number) : phoneNumber(number) {}


void notify(const string& message) override {
    cout << "SMS sent to " << phoneNumber
         << ": " << message << endl;
}

};

// Factory Pattern
class NotificationFactory {
public:
static shared_ptr<Observer> createNotification(
const string& type, const string& receiver) {

    if (type == "EMAIL")
        return make_shared<EmailNotification>(receiver);

    if (type == "SMS")
        return make_shared<SMSNotification>(receiver);

    return nullptr;
}


};

// Singleton Event Manager
class EventManager {
private:
vector<shared_ptr<Observer>> observers;
int eventCount = 0;


EventManager() {}

public:
EventManager(const EventManager&) = delete;
EventManager& operator=(const EventManager&) = delete;


static EventManager& getInstance() {
    static EventManager instance;
    return instance;
}

// Subscribe Observer
void subscribe(shared_ptr<Observer> observer) {
    if (observer != nullptr) {
        observers.push_back(observer);
        cout << "Subscriber added successfully." << endl;
    }
}

// Unsubscribe Observer
void unsubscribe(shared_ptr<Observer> observer) {
    auto it = find(observers.begin(), observers.end(), observer);

    if (it != observers.end()) {
        observers.erase(it);
        cout << "Subscriber removed successfully." << endl;
    } else {
        cout << "Subscriber not found." << endl;
    }
}

// Display Subscriber Count
void displaySubscribers() {
    cout << "Active Subscribers: "
         << observers.size() << endl;
}

// Trigger Event
void triggerEvent(const string& message) {
    eventCount++;

    cout << "\nEvent #" << eventCount
         << " Triggered: " << message << endl;

    cout << "Sending Notifications..." << endl;

    for (const auto& observer : observers) {
        observer->notify(message);
    }
}

// Display Total Events
void displayEventCount() {
    cout << "\nTotal Events Triggered: "
         << eventCount << endl;
}


};

int main() {
EventManager& manager = EventManager::getInstance();


// Create Subscribers
shared_ptr<Observer> emailUser =
    NotificationFactory::createNotification(
        "EMAIL", "student@example.com");

shared_ptr<Observer> smsUser =
    NotificationFactory::createNotification(
        "SMS", "9123456780");

// Subscribe
cout << "--- Subscribing Users ---" << endl;
manager.subscribe(emailUser);
manager.subscribe(smsUser);

manager.displaySubscribers();

// First Event
manager.triggerEvent(
    "College cultural fest starts tomorrow!");

// Unsubscribe SMS User
cout << "\n--- Unsubscribing SMS User ---" << endl;
manager.unsubscribe(smsUser);

manager.displaySubscribers();

// Second Event
manager.triggerEvent(
    "Project submission deadline is Friday!");

// Display Statistics
manager.displayEventCount();

return 0;


}
