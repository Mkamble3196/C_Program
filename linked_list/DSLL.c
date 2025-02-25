/* 
Single Double Linked List
*/


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


struct node{
    int data;
    struct node* next;
    struct node* prev;
};

