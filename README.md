# Library Management System

The **Library Management System** is a C++ application designed to simplify library operations by managing books, tracking borrow and return activities, and maintaining records of library members. With a user-friendly command-line interface, this system is ideal for small to medium-sized libraries that need a straightforward and offline solution for managing their collections and patrons.

## Table of Contents
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Tools](#tools)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Features

- **Book Management**: Add, view, edit, and remove book records, including title, author, ISBN, and availability.
- **Member Management**: Register and manage member details and track their borrowing history.
- **Borrowing and Returning**: Record book borrowing and returning activities, automatically updating availability status.
- **Search Functionality**: Quickly search for books by title, author, or ISBN and members by ID or name.
- **Report Generation**: Generate comprehensive reports on books, members, and borrowing history to assist with library management.

## Technologies Used

- **Backend**:
  - C++: Core language used for implementing library management functionality.
  - File Handling (C++): Manages persistent data storage for books and members using local files.

- **Data Management**:
  - Standard Template Library (STL): Utilizes `vector` and `map` to manage in-memory data structures.
  - Object-Oriented Programming (OOP): Structures code into classes to encapsulate book, member, and borrowing operations.

- **User Interface**:
  - Command-Line Interface (CLI): Simple text-based interface for interacting with the system.

## Tools

- **IDE / Code Editor**:
  - Visual Studio, CLion, Code::Blocks: Recommended for writing and debugging C++ code.

- **Compiler**:
  - g++ (GNU Compiler), Microsoft Visual C++ (MSVC), Clang: Compatible C++ compilers for building the project.

- **Version Control**:
  - Git, GitHub: For version control and collaboration.

- **Testing Tools**:
  - GDB (GNU Debugger), Valgrind: For debugging and memory analysis.
  - Google Test (gTest): Optional, for unit testing.

## Getting Started

### Prerequisites

- C++ compiler (g++, MSVC, or Clang)
- Command-line terminal
- Git (optional, for cloning the repository)

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/maq77/Library_Management_Sys.git
   cd Library_Management_Sys
