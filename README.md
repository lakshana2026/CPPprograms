#  UniSystem — Student Management Using C++

##  Aim

To develop a C++ program that demonstrates the use of a parameterized constructor, copy constructor, and destructor through a student management example.

##  Description
UniSystem is a beginner-level C++ project that demonstrates the fundamental concepts of Object-Oriented Programming (OOP). The program creates a student object containing a roll number and name, then uses a copy constructor to create another object with the same details.

It also demonstrates how member functions display student information and how destructors are called when objects are destroyed.

##  About the Project

UniSystem introduces object initialization and copying through a simple `Student` class. It helps beginners understand how constructors and destructors work in C++.

##  Project Objectives

* Understand classes and objects in C++.
* Implement a parameterized constructor.
* Demonstrate the working of a copy constructor.
* Learn about private and public access specifiers.
* Understand object creation and destruction.

##  Technologies Used

* **Programming Language:** C++
* **Header Files:** `iostream`, `string`
* **Compiler:** GCC (g++)
* **Platform:** Online C++ Compiler

##  Concepts Covered

* Classes and Objects
* Encapsulation
* Access Specifiers
* Parameterized Constructor
* Copy Constructor
* Member Functions
* Destructor
* Object Initialization and Copying
* Standard Output using `cout`

##  Tools Used

* **OnlineGDB:** To write, compile, and execute the program.
* **GitHub:** To store and share the source code.
* **Markdown:** To format project documentation.

## ▶️ How to Run the Project

### Using an Online Compiler

1. Open [OnlineGDB C++ Compiler](https://www.onlinegdb.com/online_c++_compiler).
2. Select C++ as the programming language.
3. Open `unisystem.cpp` in your GitHub repository.
4. Copy the source code and paste it into the online editor.
5. Click **Run**.
6. View the output in the console.

### Using a Local C++ Compiler

1. Install a C++ compiler such as GCC.

2. Save the program as `unisystem.cpp`.

3. Open a terminal in the file's directory.

4. Compile the program:

   ```bash
   g++ unisystem.cpp -o unisystem
   ```

5. Run it on Windows:

   ```bash
   .\unisystem.exe
   ```

## Sample Output


Student object created!

Original Student Details:
Roll Number: 205
Name: Priya
Student object copied!

Copied Student Details:
Roll Number: 205
Name: Priya
Student object destroyed!
Student object destroyed!


## Project Structure

```text
UniSystem/
├── unisystem.cpp
└── README.md
```

* **unisystem.cpp:** Contains the C++ source code.
* **README.md:** Contains project documentation and sample output.

##  Working Principle

1. The parameterized constructor initializes the original student object.
2. The `display()` function prints the student's details.
3. The copy constructor creates another object by copying the original object's data.
4. The copied object's details are displayed.
5. The destructor is called for both objects when the program finishes.

## Expected Outcome

The program successfully demonstrates how a copy constructor initializes a new object using an existing object of the same class.

## Conclusion

UniSystem provides a practical introduction to constructors, copy constructors, and destructors in C++. It helps beginners understand object copying and object lifecycle management.

---
---
---

# Program 2: Area of Shapes Using Pointers and References

## Aim

To develop a C++ program to calculate the areas of different geometric shapes using abstract classes, inheritance, pointers, references, and runtime polymorphism.

## Description

This program calculates the areas of a circle, rectangle, and triangle using an abstract base class named `Shape`. The class contains a pure virtual function `area()`, which is implemented separately in the derived classes `Circle`, `Rectangle`, and `Triangle`.

The program demonstrates how base-class pointers and references can access derived-class objects and invoke their respective area functions through runtime polymorphism.

## Technologies Used

* Programming Language: C++
* Header File: `iostream`
* Compiler: GCC (g++)
* Platform: OnlineGDB

## Concepts Covered

* Classes and Objects
* Abstract Classes
* Pure Virtual Functions
* Inheritance
* Function Overriding
* Pointers
* References
* Runtime Polymorphism
* Virtual Destructors

## Tools Used

* OnlineGDB: To write, compile, and execute the program.
* GitHub: To store and share the source code.
* Markdown: To document the project.

## How to Run

1. Open the `unisystem.cpp` file in the repository.
2. Copy the source code.
3. Open the OnlineGDB C++ Compiler.
4. Paste the code into the editor.
5. Click Run to execute the program.
6. View the calculated areas in the output console.

## Expected Output

```text
Area of Circle: 50.24
Area of Rectangle: 63
Area of Trian
```


# Program 3: Matrix Operations Using Operator Overloading

## Aim

To develop a C++ program that demonstrates operator overloading for performing matrix addition, subtraction, multiplication, element access, and matrix comparison.

## Description

This program implements a `Matrix` class to perform operations on two 2×2 matrices using operator overloading. It overloads the `+`, `-`, `*`, `==`, `[]`, and `<<` operators to simplify matrix calculations and output.

The program also uses assertions to verify the correctness of the matrix operations.

## Technologies Used

* Programming Language: C++
* Header Files: `iostream`, `cassert`
* Compiler: GCC (g++)
* Platform: OnlineGDB

## Concepts Covered

* Classes and Objects
* Encapsulation
* Operator Overloading
* Friend Functions
* Matrix Addition and Subtraction
* Matrix Multiplication
* Equality Comparison
* Array Indexing Operator
* Assertions and Unit Testing

## Tools Used

* OnlineGDB: To write, compile, and execute the program.
* GitHub: To store and share the source code.
* Markdown: To document the project.

## How to Run

1. Open the `matrix.cpp` file in the repository.
2. Copy the source code.
3. Open the OnlineGDB C++ Compiler.
   
## Program 4: Stack and Queue Performance Comparison

### Aim

To implement stack and queue data structures using C++ templates and compare their performance with the built-in Standard Template Library (STL) stack and queue.

### Description

This program implements custom stack and queue data structures using arrays and compares their execution times with the corresponding STL containers. It performs insertion and deletion operations on both custom and built-in data structures.

The program uses C++ templates to support generic data types and the `chrono` library to measure execution time in microseconds. It also includes functions to check whether a container is empty and determine its current size.

### Technologies Used

* Programming Language: C++
* Libraries: `<iostream>`, `<stack>`, `<queue>`, `<chrono>`
* Platform: OnlineGDB / C++ Compiler

### Concepts Covered

* Stack and Queue Data Structures
* C++ Templates
* Array-Based Implementation
* Standard Template Library (STL)
* Insertion and Deletion Operations
* Execution Time Measurement
* Performance Comparison
* Size and Empty-State Checking

### Features

* Implements a custom stack using an array.
* Implements a custom queue using an array.
* Compares custom implementations with STL containers.
* Measures execution time for insertion and deletion operations.
* Displays container size and empty status.
* Uses templates for reusable, generic code.

### How to Run

1. Open the program in a C++ compiler such as OnlineGDB.
2. Copy and paste the source code.
3. Select C++ as the programming language.
4. Compile and run the program.
5. Observe the container sizes, empty status, and execution times.

### Expected Output
The program displays the remaining students' names, marks, and grades in descending order of marks.
It also displays the total marks, average marks, number of students scoring 75 or above, and the topper's details.

Conclusion

This program demonstrates the practical application of C++ STL algorithms and lambda expressions for efficient data processing. It provides experience in sorting, filtering, transforming, and analyzing student records using modern C++ programming techniques.

# Student Grade Analyzer Using STL Algorithms and Lambda Expressions

## 1. Aim

To develop a Student Grade Analyzer using C++ STL algorithms and lambda expressions to process student records, assign grades, sort marks, and calculate academic performance statistics.

## 2. Description

The Student Grade Analyzer is a C++ program that stores and processes student information, including names, marks, and grades. It uses Standard Template Library (STL) algorithms and lambda expressions to perform various operations efficiently.

The program assigns grades based on marks, removes students scoring below 50, sorts the remaining students in descending order of marks, calculates total and average marks, counts students scoring 75 or above, and identifies the topper.

## 3. Technologies Used

* Programming Language: C++
* Compiler: GCC / OnlineGDB C++ Compiler
* Libraries: iostream, vector, algorithm, numeric, string
* Platform: OnlineGDB and GitHub

## 4. Concepts Covered

* Standard Template Library (STL)
* Lambda Expressions
* Vectors
* Sorting and Filtering
* Iterators
* Data Processing
* Grade Assignment
* Statistical Calculations

## 5. STL Algorithms Used

| Algorithm       | Purpose                                           |
| --------------- | ------------------------------------------------- |
| `transform()`   | Assigns grades based on student marks.            |
| `remove_if()`   | Identifies students scoring below 50 for removal. |
| `sort()`        | Sorts students in descending order of marks.      |
| `accumulate()`  | Calculates the total marks.                       |
| `count_if()`    | Counts students scoring 75 or above.              |
| `max_element()` | Identifies the highest-scoring student.           |
| `for_each()`    | Displays student details.                         |

## 6. Features

* Stores student records using a vector.
* Automatically assigns grades based on marks.
* Removes students scoring below 50.
* Sorts student records by marks in descending order.
* Calculates total and average marks.
* Counts students scoring 75 or above.
* Identifies the topper.
* Uses lambda expressions with STL algorithms.

## 7. Steps to Run

### Using OnlineGDB

1. Open the OnlineGDB C++ Compiler.
2. Select C++ as the programming language.
3. Copy and paste the program into the editor.
4. Click the **Run** button.
5. View the student records and performance statistics in the output window.

### Using GitHub

1. Create a repository on GitHub.
2. Upload the C++ source file, for example, `student_grade_analyzer.cpp`.
3. Create or open the `README.md` file.
4. Add this project documentation to the README.
5. Commit the changes to save the project.

Note: GitHub stores and displays your source code but does not execute a standard C++ program directly in the repository. Use an online compiler or a locally installed C++ compiler to run it.

## 8. Sample Output

```text
Student Grade Analyzer
----------------------
Name    Mark    Grade
Meena   96      A
Divya   88      B
Nithya  81      B
Surya   73      C

Total Marks: 338
Average Mark: 84.5
Students scoring 75 or above: 3
Topper: Meena (96)
Students below 50 have been removed.
```

##

## 10. Conclusion

The Student Grade Analyzer demonstrates the effective use of C++ STL algorithms and lambda expressions to automate student data processing. It provides practical experience with vectors, sorting, filtering, grade assignment, and statistical calculations while promoting efficient and readable programming.
# Smart Pointers and RAII in C++

## 1. Aim

To demonstrate Resource Acquisition Is Initialization (RAII) and memory management in C++ using a custom smart pointer, `unique_ptr`, and `shared_ptr`.

## 2. Description

This program demonstrates different approaches to resource management in C++. It implements a custom smart pointer using RAII and compares it with the standard smart pointers provided by the C++ Standard Library.

The program uses a `Resource` class to demonstrate resource acquisition, usage, and automatic release. It illustrates how destructors manage resource cleanup, how `unique_ptr` provides exclusive ownership, and how `shared_ptr` enables multiple pointers to share ownership of a resource.

## 3. Technologies Used

* Programming Language: C++
* Compiler: GCC
* Libraries: `<iostream>`, `<memory>`
* C++ Standard: C++14 or later
* Platform: OnlineGDB / Terminal / C++ Compiler

## 4. Concepts Covered

* Resource Acquisition Is Initialization (RAII)
* Smart Pointers
* Custom Smart Pointer Implementation
* `unique_ptr`
* `shared_ptr`
* Dynamic Memory Management
* Constructors and Destructors
* Operator Overloading
* Exclusive and Shared Ownership
* Reference Counting

## 5. Features

* Implements a custom smart pointer using RAII.
* Demonstrates automatic resource acquisition and release.
* Uses `unique_ptr` for exclusive resource ownership.
* Uses `shared_ptr` to share a resource between multiple pointers.
* Displays the shared pointer reference count.
* Prevents copying of the custom smart pointer to avoid double deletion.

## 6. Working Principle

### Manual RAII Smart Pointer

A custom class manages a dynamically allocated resource and releases it through its destructor when the object goes out of scope.

### Unique Pointer

The `unique_ptr` manages a resource with exclusive ownership. The resource is automatically released when the smart pointer goes out of scope.

### Shared Pointer

The `shared_ptr` allows multiple pointers to share ownership of the same resource. The resource is released when the last owning pointer is destroyed.

## 7. Steps to Run

### Using OnlineGDB

1. Open the OnlineGDB C++ Compiler.
2. Select C++ as the programming language.
3. Copy and paste the source code into the editor.
4. Click the Run button.
5. Observe the output showing resource acquisition, usage, and release.

### Using a Terminal

**Step 1:** Save the source code as `smart_pointer.cpp`.

**Step 2:** Open a terminal in the folder containing the file.

**Step 3:** Compile the program using GCC:

```bash
g++ -std=c++14 -g smart_pointer.cpp -o smart_pointer
```

**Step 4:** Run the program.

On Windows:

```bash
smart_pointer.exe
```

On Linux:

```bash
./smart_pointer
```

## 8. Expected Output

```text
----- Manual RAII Smart Pointer -----
Resource acquired
Resource is being used
Resource released
Manual smart pointer destroyed

----- unique_ptr -----
Resource acquired
Resource is being used
Resource released

----- shared_ptr -----
Resource acquired
Resource is being used
Shared Pointer Count: 2
Resource released

Program completed successfully.
```

## 9. Applications

* Automatic memory management
* Resource handling in C++ applications
* Preventing memory leaks
* Managing dynamically allocated objects
* Understanding ownership and object lifetimes

## 10. Conclusion

This program demonstrates RAII and three approaches to resource management in C++: a custom smart pointer, `unique_ptr`, and `shared_ptr`. It explains how constructors and destructors manage resource lifetimes and how smart pointers help reduce memory-management errors through automatic cleanup.

Program 7-# Bank Account Exception Handling in C++

## Aim

To develop a simple bank account management system using C++ that demonstrates custom exception handling for invalid transaction amounts and insufficient funds during deposit and withdrawal operations.

## Description

This project implements a basic banking system using object-oriented programming in C++. It allows users to deposit and withdraw money while maintaining the account balance.

Custom exception classes are created to handle errors such as withdrawing more money than the available balance or entering a zero or negative transaction amount. The program uses `try`, `throw`, and `catch` statements to handle exceptions and ensure that unsuccessful transactions do not modify the account balance.

## Technologies Used

* **Programming Language:** C++
* **Compiler:** GCC (g++)
* **IDE/Editor:** Visual Studio Code
* **Standard Library:** `<iostream>`, `<string>`, and `<stdexcept>`

## Features

* Create a bank account with an account holder's name and initial balance.
* Deposit money into the account.
* Withdraw money from the account.
* Validate deposit and withdrawal amounts.
* Detect insufficient funds during withdrawals.
* Handle errors using custom exceptions.
* Display initial and final account details.
* Prevent unsuccessful transactions from modifying the account balance.

## Concepts Used

* **Object-Oriented Programming (OOP):** Organizes the program using classes and objects.
* **Classes and Objects:** Implements the `BankAccount` class to manage account details and transactions.
* **Encapsulation:** Keeps account details private and provides public methods to access and modify the balance.
* **Inheritance:** Derives custom exception classes from the base `BankException` class.
* **Exception Handling:** Uses `try`, `throw`, and `catch` to handle runtime errors.
* **Custom Exceptions:** Implements `InsufficientFundsException` and `InvalidAmountException`.
* **Function Overriding:** Overrides the `what()` function to return custom error messages.
* **Validation:** Checks transaction amounts before modifying the account balance.

## Sample Output

```text
Initial Account Details:
Account Holder: Rahul
Balance: Rs. 6000

Depositing Rs. 1500...
Withdrawing Rs. 2500...
Withdrawing Rs. 10000...
Error: Insufficient balance for withdrawal.

Final Account Details:
Account Holder: Rahul
Balance: Rs. 5000
```

## Conclusion

This project demonstrates the effective use of exception handling and object-oriented programming in C++. Custom exceptions help identify invalid transactions and insufficient funds. By validating transactions before updating the balance, the program maintains account consistency and demonstrates reliable error-handling practices in a basic banking application.

Program 8- String Copy and Move Semantics in C++
## Aim

To implement a custom String class in C++ and demonstrate copy semantics, move semantics, perfect forwarding, and performance benchmarking using dynamic memory allocation.

## Description

This project implements a custom `String` class that manages character data using dynamically allocated memory.

It demonstrates how copy and move operations work in C++. The copy constructor creates an independent copy of the string, while the move constructor transfers ownership of the allocated memory without copying the entire string.

The program also implements copy and move assignment operators, demonstrates perfect forwarding using a function template, and measures the execution time of repeated copy and move operations.

## Technologies Used

* **Programming Language:** C++
* **Compiler:** GCC (g++)
* **IDE/Editor:** Visual Studio Code
* **Libraries:** `<iostream>`, `<cstring>`, `<chrono>`, and `<utility>`

## Features

* Custom String class with dynamic memory allocation.
* Copy constructor for creating independent string copies.
* Move constructor for transferring resource ownership.
* Copy assignment operator for copying existing string objects.
* Move assignment operator for transferring resources between existing objects.
* Perfect forwarding using templates and `std::forward`.
* Automatic memory cleanup using a destructor.
* Performance benchmarking of copy and move operations.
* Output demonstrations for copy assignment, move assignment, and perfect forwarding.

## Concepts Used

### 1. Dynamic Memory Allocation

Uses `new[]` to allocate memory for string data and `delete[]` to release it.

### 2. Copy Constructor

Creates a new string object with its own memory allocation and copies the original string's contents.

### 3. Move Constructor

Transfers the pointer from an existing string object to a new object, avoiding a separate allocation for the moved string.

### 4. Copy Assignment Operator

Copies the contents of one existing string object into another existing object.

### 5. Move Assignment Operator

Transfers ownership of the allocated memory from one existing object to another.

### 6. Destructor

Automatically releases the dynamically allocated memory when a string object is destroyed.

### 7. Perfect Forwarding

Uses a function template with `T&&` and `std::forward<T>()` to preserve the value category of the argument.

### 8. Performance Benchmarking

Uses the `<chrono>` library to measure the time taken by repeated copy and move operations.

### 9. Resource Management

Demonstrates how a class can manage dynamically allocated memory and transfer ownership safely.

## Sample Output

```text
Copy Assignment Result: This is a custom string demonstrating copy and move semantics in C++.
Move Assignment Result: Move Assignment Example
Perfect Forwarding Result: Perfect Forwarding Example

Copy Operation Time: 8 milliseconds
Move Operation Time: 5 milliseconds
```

**Note:** The execution times shown are examples. Actual timings depend on the system, compiler optimizations, and runtime environment.

## How to Compile and Run

### Step 1: Compile

```bash
g++ string_semantics.cpp -o string_semantics
```

### Step 2: Run

**Windows:**

```bash
.\string_semantics.exe
```

**Linux/macOS:**

```bash
./string_semantics
```

## Conclusion

This project demonstrates the implementation of copy and move semantics in C++ using a custom String class. It explains how constructors, assignment operators, and destructors manage dynamically allocated memory.

The program also demonstrates perfect forwarding and compares the execution times of copy and move operations. These concepts help improve understanding of resource management, object ownership, and efficient programming in modern C++.

Program 9# Enhanced Event Notification System in C++

## Aim

To develop an event notification system in C++ using the Observer, Factory, and Singleton design patterns, with additional features for subscriber management, event tracking, and automatic memory management.

## Description

This project implements a notification system that delivers event messages to email and SMS subscribers.

The Observer Pattern allows multiple subscribers to receive notifications when an event occurs. The Factory Pattern creates notification objects based on the requested type, while the Singleton Pattern ensures that only one EventManager instance exists.

The system also supports unsubscribing users, tracking the total number of triggered events, and displaying the number of active subscribers. Smart pointers are used to manage object lifetimes automatically.

## Technologies Used

* **Programming Language:** C++
* **Compiler:** GCC (g++)
* **IDE/Editor:** Visual Studio Code
* **Libraries:** `<iostream>`, `<vector>`, `<memory>`, `<string>`, and `<algorithm>`

## Features

* **Email Notifications:** Sends event messages to email subscribers through console output.
* **SMS Notifications:** Sends event messages to SMS subscribers through console output.
* **Subscribe:** Adds observers to the notification system.
* **Unsubscribe:** Removes observers from future notifications.
* **Event Counter:** Tracks the total number of events triggered.
* **Subscriber Count:** Displays the number of active subscribers.
* **Factory-Based Object Creation:** Creates email and SMS notification objects.
* **Singleton Event Manager:** Maintains a single EventManager instance.
* **Smart Pointer Management:** Uses `shared_ptr` for automatic resource management.
* **Dynamic Notification Delivery:** Sends messages only to currently subscribed observers.

## Concepts Used

### 1. Observer Pattern

Defines a common interface for observers and notifies all subscribed observers when an event occurs.

### 2. Factory Pattern

Creates notification objects based on the specified type, such as EMAIL or SMS.

### 3. Singleton Pattern

Ensures that only one instance of the EventManager exists throughout the program.

### 4. Inheritance

The EmailNotification and SMSNotification classes inherit from the Observer interface.

### 5. Polymorphism

The `notify()` function is overridden to provide different notification behaviors for email and SMS.

### 6. Smart Pointers

The `shared_ptr` smart pointer manages the lifetime of notification objects automatically.

### 7. STL Vector

The `vector` container stores and manages the list of subscribed observers.

### 8. STL Algorithm

The `find()` function from `<algorithm>` locates a subscriber before removing it.

### 9. Encapsulation

Private data members and public member functions help organize the program and control access to internal data.

### 10. Event Tracking

An integer counter records the number of events triggered by the EventManager.

## Sample Output

```text
--- Subscribing Users ---
Subscriber added successfully.
Subscriber added successfully.
Active Subscribers: 2

Event #1 Triggered: College cultural fest starts tomorrow!
Sending Notifications...
Email sent to student@example.com: College cultural fest starts tomorrow!
SMS sent to 9123456780: College cultural fest starts tomorrow!

--- Unsubscribing SMS User ---
Subscriber removed successfully.
Active Subscribers: 1

Event #2 Triggered: Project submission deadline is Friday!
Sending Notifications...
Email sent to student@example.com: Project submission deadline is Friday!

Total Events Triggered: 2
```

## How to Compile and Run

### Step 1: Compile the Program

```bash
g++ notification_system.cpp -o notification_system
```

### Step 2: Run the Program

**Windows:**

```bash
.\notification_system.exe
```

**Linux/macOS:**

```bash
./notification_system
```

## Conclusion

This project demonstrates how design patterns can be combined to create a modular and maintainable notification system in C++. The Observer Pattern enables event-based notifications, the Factory Pattern simplifies object creation, and the Singleton Pattern provides a single event manager.

The additional subscription management and event tracking features make the system more flexible. Smart pointers simplify memory management, while the use of STL containers and algorithms supports efficient subscriber management.

**Note:** Email and SMS notifications are simulated through console output. The program does not send actual emails or SMS messages.













