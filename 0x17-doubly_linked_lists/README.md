# 0x17. C - Doubly linked lists

This repository contains the solutions to the tasks in the 0x17 project on doubly linked lists. Each task involves implementing a specific function to perform operations on a doubly linked list.

## List of Functions

1. `size_t print_dlistint(const dlistint_t *h)`
    - Description: Prints all the elements of a doubly linked list.
    - Parameters:
        - `h`: A pointer to the head of the list.
    - Return value: The number of nodes in the list.

2. `size_t dlistint_len(const dlistint_t *h)`
    - Description: Returns the number of elements in a doubly linked list.
    - Parameters:
        - `h`: A pointer to the head of the list.
    - Return value: The number of elements in the list.

3. `dlistint_t *add_dnodeint(dlistint_t **head, const int n)`
    - Description: Adds a new node at the beginning of a doubly linked list.
    - Parameters:
        - `head`: A double pointer to the head of the list.
        - `n`: The data value for the new node.
    - Return value: The address of the new element, or NULL if it failed.

4. `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)`
    - Description: Adds a new node at the end of a doubly linked list.
    - Parameters:
        - `head`: A double pointer to the head of the list.
        - `n`: The data value for the new node.
    - Return value: The address of the new element, or NULL if it failed.

5. `void free_dlistint(dlistint_t *head)`
    - Description: Frees a doubly linked list.
    - Parameters:
        - `head`: A pointer to the head of the list.
    - Return value: None.

6. `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)`
    - Description: Returns the nth node of a doubly linked list.
    - Parameters:
        - `head`: A pointer to the head of the list.
        - `index`: The index of the node, starting from 0.
    - Return value: The nth node of the list, or NULL if it does not exist.

## Requirements

- Allowed editors: vi, vim, emacs
- All files are interpreted/compiled on Ubuntu 20.04 LTS using Python 3.8.5
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Code should use the Betty style and be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- Each function should have no more than 5 functions per file
- Only the following C standard library functions are allowed: `malloc`, `free`, `printf`, and `exit`
- The prototypes of all functions should be included in a header file called `lists.h`
- All header files should be include guarded

## Resources

- [What is a Doubly Linked List](https://www.geeksforgeeks.org/doubly-linked-list/)
- Learning Objectives:
    - Understand what a doubly linked list is
    - Learn how to use doubly linked lists
    - Practice searching for information without relying too much on external help

## Quiz Questions

- Quiz questions are available and can be accessed in the repository.

## Disclaimer

- The solutions provided in this repository are for learning and reference purposes.
