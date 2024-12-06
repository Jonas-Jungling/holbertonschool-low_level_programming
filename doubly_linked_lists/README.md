# Doubly Linked Lists

This project is part of the Holberton School curriculum. It focuses on the implementation and manipulation of doubly linked lists in C.

## Table of Contents
- [Doubly Linked Lists](#doubly-linked-lists)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Files](#files)
  - [Usage](#usage)
  - [Author](#author)

## Description
A doubly linked list is a type of linked list in which each node contains a data part and two pointers. These pointers point to the next node and the previous node in the sequence, allowing traversal in both directions.

## Files
- `0-print_dlistint.c`: Function that prints all the elements of a `dlistint_t` list.
- `1-dlistint_len.c`: Function that returns the number of elements in a `dlistint_t` list.
- `2-add_dnodeint.c`: Function that adds a new node at the beginning of a `dlistint_t` list.
- `3-add_dnodeint_end.c`: Function that adds a new node at the end of a `dlistint_t` list.
- `4-free_dlistint.c`: Function that frees a `dlistint_t` list.
- `5-get_dnodeint.c`: Function that returns the nth node of a `dlistint_t` linked list.
- `6-sum_dlistint.c`: Function that returns the sum of all the data (n) of a `dlistint_t` linked list.
- `7-insert_dnodeint.c`: Function that inserts a new node at a given position.
- `8-delete_dnodeint.c`: Function that deletes the node at index `index` of a `dlistint_t` linked list.

## Usage
To compile the code, use the following command:
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o dlist
```
Run the executable:
```sh
./dlist
```

## Author
This project was created by Jonas.
