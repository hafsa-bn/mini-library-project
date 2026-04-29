# 📚 Library Management System 

## 📌 Description
This project is a simple Library Management System developed in C as part of an academic assignment.  
It is divided into two modules:

- **Module 1: Members Management**
- **Module 2: Books Management**

The program uses advanced C concepts such as:
- Structures
- Nested structures
- Enumerations (enum)
- Arrays of structures
- Basic data analysis (counting, filtering)

---

## ⚙️ Features

### 👤 Members Module
- Store member information (name, surname, card number)
- Handle address using a nested structure
- Store birth date
- Display all members
- Calculate and display the number of adult members

### 📚 Books Module
- Store book information (title, author, year)
- Use enum to represent book status:
  - AVAILABLE
  - BORROWED
  - RESERVED
- Display all books
- Filter and display only available books
- Count borrowed books

---

## 🧠 Concepts Used
- Structures in C
- Nested structures
- Enumerations
- Arrays
- Conditionals and loops
- Basic data processing

---

## ▶️ How to Compile and Run

### Compile Members Program:
```bash
gcc members.c -o members
./members
gcc books.c -o books
./books
