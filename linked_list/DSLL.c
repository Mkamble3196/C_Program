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
    int node* prev;
    int node* next;
};

struct node* create_list(void);
void insert_start(struct node* p_list, int new_data);
void insert_end(struct node* p_list, int new_data);
int  insert_after(struct node* p_list, int e_data, int new_data);

struct node* create_list(void)
{
    struct node* p_list = NULL;

    p_list = (struct node*)malloc(sizeof(struct node));

    if(p_list == NULL)
    {
        puts("Allocation Error:malloc() Failed");
        exit(EXIT_FAILURE);
    }

    p_list->data = 0;
    p_list->next = NULL;
    p_list->prev = NULL;

    return (p_list);
}

void insert_start(struct node* p_list, int new_data)
{
    struct node* p_new_node = NULL;

    p_new_node = create_list(void);

    p_new_node->data = new_data;
    p_new_node->prev = p_list;
    p_new_node->next = p_list->next;

    if(p_list != NULL)
        p_list->next->prev = p_new_node;
    
    p_list->next = p_new_mode; 

}
