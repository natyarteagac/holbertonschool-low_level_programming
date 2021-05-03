## 0x17. C - Doubly linked lists

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# GeneraL
- What is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

## Requirements

# General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf and exit
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called lists.h
- Dont forget to push your header file
- All your header files should be include guarded

## More Info
Please use this data structure for this project:

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 * Description: doubly linked list node structure
 * for Holberton project
*/
 
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

## Tasks 
0. Print list
1. List length
2. Add node
3. Add node at the end
4. Free list
5. Get node at index
6. Sum list
7. Insert at index
8. Delete at index

