/* Double Linked List Implementation*/
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
int remove_start(struct node* p_list);
int insert_before(struct node* p_list, int e_data, int new_data); 
int remove_start(struct node* p_list); 


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

void insert_end(struct node* p_list, int new_data)
{
    struct node* run = NULL;

    run = p_list;

    while(run->next != NULL)
        run = run->next;

    run->next = create_node();

    run->next->data = new_data;
    run->next->prev = run;
    run->next->next = NULL;
}

int insert_after(struct node* p_list, int e_data, int new_data)
{
    struct node* e_node = NULL;
    struct node* p_new_node = NULL;

    e_node = p_list->next;

    while(e_node != NULL)
    {
        if(e_node->data == e_data)
            break;
        e_node = e_node->next;
    }

    if(e_node == NULL)
        return(LIST_INVALID_DATA);

    p_new_node = create_node();

    p_new_node->data = new_data;
    p_new_node->next = e_node->next;
    p_new_node->prev = e_node;

    if(e_node->next != NULL)
        e_node->next->prev = p_new_node;
    e_node->next = p_new_node;

    return(SUCCESS);
}

int insert_before(struct node* p_list, int e_data, int new_data)
{
    struct node* e_node = NULL;
    struct node* p_new_node = NULL;

    e_node = p_list->next;
    while(e_node != NULL)
    {
        if(e_node->data == e_data)
            break;
        e_node = e_node->next;
    }

    if(e_node == NULL)
        return(LIST_INVALID_DATA);

    p_new_node = create_node();

    p_new_node->data = new_data;
    p_new_node->next = e_node;
    p_new_node->prev = e_node->prev;
    e_node->prev->next = p_new_node;
    e_node->prev = p_new_node;
    
    return(SUCCESS);

}

int remove_start(struct node* p_list)
{
    struct node* first_node = NULL;

    if(p_list->next == NULL && p_list->prev == NULL)
        return(LIST_EMPTY);

        first_node = p_list->next;
        first_node->prev->next = first_node->next;

        if(first_node->next != NULL)
            first_node->next->prev = first_node->prev;

    free(first_node);
    first_node = NULL;

    return(SUCCESS);
}

int insert_before(struct node* p_list, int e_data, int new_data)
{
    struct node* e_node = NULL;
    struct node* p_new_node = NULL;
    e_node = p_list->next;
    
    while(e_node != NULL)
    {
        if(e_node->data == e_data)
            break; 
        e_node = e_node->next; 
    }

    if(e_node == NULL)
        return (LIST_INVALID_DATA); 

    p_new_node = (struct node*)malloc(sizeof(struct node)); 
    if(p_new_node == NULL)
    {
        puts("AllocationError:malloc() failed"); 
        exit(EXIT_FAILURE); 
    }

    p_new_node->data = new_data;
    p_new_node->next = e_node; 
    p_new_node->prev = e_node->prev; 
    e_node->prev->next = p_new_node; 
    e_node->prev = p_new_node; 

    return (SUCCESS); 


}

int remove_start(struct node* p_list)
{
    struct node* first_node = NULL;
    if(p_list->next == NULL && p_list->prev == NULL)
        return(LIST_EMPTY);
    first_node = p_list->next;
    first_node->prev->next = first_node->next;

    if(first_node->next != NULL)
        first_node->next->prev = first_node->prev;

    free(first_node);
    first_node = NULL;

    return(SUCCESS);

}