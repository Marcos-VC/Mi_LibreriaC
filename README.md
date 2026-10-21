# Assignment 1: C Utility Library (`head`, `tail`, `longlines`)

[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.cppreference.com/w/c)
[![OS: Linux](https://img.shields.io/badge/OS-Linux-FCC624?logo=linux&logoColor=black)](https://www.kernel.org/)
[![Academic Year: 2026--27](https://img.shields.io/badge/Academic%20Year-2026--27-brightgreen)](#)

This repository contains the solution for **Assignment 1** of the **Operating Systems** course (Bachelor's Degree in Software Engineering / Double Degree in Computer Science and Software Engineering).

The main objective is to implement a C static library (`liblibreria.a`) that processes standard input (`stdin`), providing functionalities similar to UNIX system utilities (`head`, `tail`), along with filtering for the longest lines (`longlines`).

---

## 📁 Repository Structure

| File | Description |
| :--- | :--- |
| `libreria.h` | Header file provided with the function declarations for the library. |
| `libreria.c` | Implementation of the `head`, `tail`, and `longlines` functions. |
| `test.c` | Main test program to verify functionality and process command-line arguments. |
| `compila.sh` | Bash script to automate library compilation and executable linking. |

> **Note:** Written documentation and reports associated with the academic submission are not included in this public repository to comply with Campus Virtual policies.

---

## 🛠️ Library Features

The `liblibreria.a` library exports three main functions for processing the standard input stream:

1. **`int head(int N)`**
   * Prints the first `N` lines received from `stdin` to standard output (`stdout`).
   * Behaves similarly to the system utility `head -n N`.

2. **`int tail(int N)`**
   * Prints the last `N` lines received from `stdin` to standard output (`stdout`).
   * Behaves similarly to the system utility `tail -n N`.

3. **`int longlines(int N)`**
   * Prints the `N` longest lines received from `stdin`, sorted from longest to shortest.
   * If the total number of input lines is less than `N`, all lines are displayed in sorted order.

---

## 🚀 Compilation and Execution

### 1. Compilation via Script
To generate the static library `liblibreria.a` and compile the `test` program, grant execution permissions to the script and run it:

~~~bash
chmod +x compila.sh
./compila.sh
~~~

### 2. Test Program Syntax
The `test` executable accepts the following arguments from the terminal:

~~~bash
./test -<function> [number_of_lines]
~~~

* **`-<function>`** *(Required)*: Specifies the function to test (`-h` / `-head`, `-t` / `-tail`, `-l` / `-longlines`). Must start with a hyphen.
* **`[number_of_lines]`** *(Optional)*: Positive integer (N > 0). If omitted, defaults to **10 lines**.

---

## 💻 Usage Examples

You can redirect files or use pipes in the terminal to pass data to standard input:

~~~bash
# Display the first 5 lines of a file
./test -head 5 < file.txt

# Display the last 10 lines (default value) of a command output
ls -la | ./test -tail

# Display the 3 longest lines received from standard input
cat text.txt | ./test -longlines 3
~~~

---

## ⚙️ Coding Guidelines & Style Standards

* **Dynamic Memory Management:** Allocation with `malloc`/`calloc`/`realloc` for variable-size arrays and guaranteed cleanup with `free`.
* **Strict ANSI/C99 Compliance:** Avoids C++ constructs and ensures clean compilation without warnings.
* **Error Handling:** Proper management of invalid arguments, memory allocation failures, and I/O stream errors.
* **Standard C Library:** Strict usage of `<string.h>` functions for string manipulation.

---

## ✒️ Authors

* **Marcos Vidal Castillo** - *Double Degree in Computer Science and Software Engineering Student* - [GitHub](https://github.com/Marcos-VC)
* **Paula de la Fuente Ruiz** - *Double Degree in Computer Science and Software Engineering Student* - [Github](https://github.com/Paula-2704)