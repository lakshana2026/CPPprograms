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










