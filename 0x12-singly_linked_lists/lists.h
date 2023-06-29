#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>


/**
 * struct Node - Node structure for a singly linked list
 * @data: Data of the node (can be any data type)
 * @next: Pointer to the next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node* createNode(int data);

void insertAtBeginning(Node** head, int data);

void insertAtEnd(Node** head, int data);

void insertAfter(Node* prevNode, int data);

void deleteNode(Node** head, int data);

void printList(Node* head);

int putchar(int character);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void printMessage(void);
#endif
