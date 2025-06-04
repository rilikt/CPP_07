# 🧩 C++ Module 07 – Templates

This module introduces **C++ function and class templates**. It focuses on writing generic, type-independent code using template syntax, allowing for flexible and reusable components.

---

## 📁 Exercises Overview

### 🔄 ex00 – Start with a Few Functions

- Implement 3 function templates:
  - `swap(T &a, T &b)`
  - `min(T const &a, T const &b)`
  - `max(T const &a, T const &b)`
- Must work with any type that supports comparison operators.

Example usage:

```cpp
int a = 2, b = 3;
::swap(a, b);           // a = 3, b = 2
::min(a, b);            // returns 2
::max(a, b);            // returns 3
```

---

### 🔁 ex01 – Iter

- Implement a function template:
  ```cpp
  template <typename T>
  void iter(T* array, size_t length, void (*func)(T&));
  ```
- Applies a given function to each element of an array.
- Must support both const and non-const arrays depending on context.

---

### 🧮 ex02 – Array

- Implement a class template `Array<T>` with:
  - Default constructor → empty array
  - Constructor with size `n` → default-initialized array
  - Copy constructor and assignment operator
  - Subscript operator `[]` with bounds checking
  - `size()` method returning element count
- Throws `std::exception` on out-of-bounds access.

---

## 🛠️ Build Instructions

```bash
make
```

Each exercise is in its own folder: `ex00/`, `ex01/`, `ex02/`

---
