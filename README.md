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

# Program 2: Matrix Operations Using Operator Overloading

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





