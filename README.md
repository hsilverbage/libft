# Libft - My First Custom C Library

## 📌 Introduction
Welcome to my Libft project at 42 School. This foundational project marked the beginning of my coding journey, immersing me in the intricacies of the C programming language and low-level data manipulation. The primary goal of Libft was to recreate a series of standard C library functions, along with additional utility functions that will serve me throughout my programming career at 42. This project was my first step in building my own reusable library, a critical tool for future programming challenges.

## 📁 Project Structure
The project is divided into several parts:
- **Part 1**: Reimplementation of standard C library functions (string manipulation, memory management, conversion, etc.).
- **Part 2**: Additional utility functions that extend the functionality of standard C.
- **Bonus**: Linked list management functions.

## 🔧 Installation
1. **Clone the repository**  
   ```sh
   git clone <repo_url>
   cd libft
   ```
2. **Compile the library**  
   ```sh
   make
   ```
3. **Use the library in your project**  
   ```sh
   gcc -Wall -Wextra -Werror -L. -lft your_code.c
   ```

## 📜 Usage
Include the header file in your source code:
```c
#include "libft.h"
```
Then, use the functions normally.

## 📌 Implemented Functions
| Function        | Description |
|----------------|------------|
| `ft_strlen`    | Returns the length of a string. |
| `ft_strcpy`    | Copies a string. |
| `ft_memcpy`    | Copies a block of memory. |
| `ft_atoi`      | Converts a string to an integer. |
| `ft_strdup`    | Duplicates a string. |
| `ft_strjoin`   | Concatenates two strings. |
| `ft_split`     | Splits a string into an array using a delimiter. |
| `ft_lstnew`    | Creates a new linked list node. |
| `ft_lstsize`   | Returns the size of a linked list. |
| ...            | ... |

## 🏆 Bonus
- Additional linked list functions such as `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, and more.

## 🎯 Objectives
- Understand the inner workings of standard C library functions.
- Strengthen proficiency in C programming, particularly in memory management and data structures.
- Build a reusable library for future projects.

## 📄 License
This project was completed as part of the curriculum at 42 School.
