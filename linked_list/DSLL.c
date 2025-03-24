#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define SUCCESS             1
#define TRUE                1
#define FALSE               0
#define LIST_INVALID_DATA   2
#define LIST_EMPTY          3

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

