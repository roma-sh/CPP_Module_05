# C++ Module 05 - Repetition and Exceptions

## Project Purpose

This project explores object-oriented programming principles in C++, particularly focusing on exception handling, inheritance, and the concept of the Orthodox Canonical Form. The main objective is to simulate a bureaucratic system, complete with roles, forms, and responsibilities, while adhering to strict programming conventions and practices. Through this simulation, we aim to gain practical experience in handling errors, defining class hierarchies, and managing relationships between classes in a C++-oriented way.

Each exercise builds on the previous one by introducing new classes or adding functionality, ultimately resulting in a complex system with interactions between multiple objects that mimic real-world bureaucratic processes.

## Exercises Overview

### Exercise 00: Bureaucrat Class

- **Objective**: The purpose of this exercise is to create the foundational class of our bureaucratic system: the `Bureaucrat`. A bureaucrat in this simulation has a **name** and a **grade**.

- **Why We Created This Class**: In the bureaucratic hierarchy, each bureaucrat has a rank, represented here as a grade ranging from 1 (highest) to 150 (lowest). By setting this class up as the smallest "cog" in the bureaucratic machine, we establish the base for other classes to interact with and manipulate. A bureaucrat’s grade is central to determining what tasks they are allowed to perform in later exercises.

### Exercise 01: Form Class

- **Objective**: Introduce a `Form` class to represent tasks that bureaucrats can complete, adding functionality that allows bureaucrats to sign forms if their grade is sufficient.

- **Why We Created This Class**: Bureaucrats need something to do—forms serve as structured tasks with varying levels of importance. This class provides an interface for a form that bureaucrats can sign if their rank (grade) qualifies them. This introduces hierarchical permission management, which is common in administrative and procedural systems.

### Exercise 02: Specific Form Implementations (Abstract and Derived Classes)

- **Objective**: Expand the functionality of forms by creating specific types of forms that perform actions when executed. We also create an abstract base class `AForm` to ensure a clear, consistent interface for all form types.

- **Why We Created These Classes**: Different types of forms require different levels of authority to be signed or executed. By adding derived classes, we simulate specialized tasks in a bureaucracy. Each form has a unique purpose and action, making this part of the project feel more dynamic and practical.


- **Additional Methods**:
  - `executeForm(AForm const &form)` in `Bureaucrat`: Attempts to execute a given form, printing the result of success or error.

### Exercise 03: Intern Class

- **Objective**: Introduce an `Intern` class, which can create forms dynamically based on form names provided. The intern has the ability to generate new forms but has no other special attributes or permissions.

- **Why We Created This Class**: This class simulates the role of an intern who performs mundane but crucial administrative tasks—in this case, generating forms on demand. The `Intern` class demonstrates how to manage dynamically created objects and introduces another layer of abstraction.

## Compilation and Testing

Each exercise has its own directory (`ex00/`, `ex01/`, `ex02/`, and `ex03/`). Navigate to the appropriate directory and compile the code using `make`. Test the implementation by running the compiled program and experimenting with various inputs, paying close attention to exception handling.

Example:
```bash
cd ex00
make
./your_executable
