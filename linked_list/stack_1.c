#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define SUCCESS     1
#define TRUE        1
#define FALSE       0

#define LIST_INVALID_DATA       2
#define LIST_EMPTY              3
#define STACK_EMPTY             LIST_EMPTY

typedef struct node node_t;
typedef node_t list_t;
typedef list_t stack_t;
typedef int data_t;
typedef int status_t;
typedef int len_t;

struct node
{
    data_t data;
    struct node* prev;
    struct node* next;
};

/* Stack - Insterface Functions*/
stack_t* create_stack(void);
status_t push(stack_t* p_stack, data_t new_data);
status_t pop(stack_t* p_stack, data_t* p_poped_data);
status_t top(stack_t* p_stack, data_t* p_top_data);
status_t is_stack_empty(stack_t* p_stack);
status_t destroy_stack(stack_t** pp_stack);

/*List - Intterface Functions*/

list_t* create_list(void);
status_t insert_start(list_t* p_list, data_t new_data);
status_t insert_end(list_t* p_list, data_t new_data);
status_t insert_after(list_t* p_list, data_t new_data);
status_t insert_before(list_t* p_list, data_t new_data);

status_t get_start(list_t* p_list, data_t* p_start_data);
status_t get_end(list_t* p_list, data_t* p_end_data);

status_t pop_start(list_t* p_list, data_t* p_start_data);
status_t pop_end(list_t* p_list, data_t* p_end_data);

status_t remove_start(list_t* p_list);
status_t remove_end(list_t p_list);
status_t remove_data(list_t* p_list, data_t r_data);

status_t find_data(list_t* p_list, data_t f_data);
status_t is_list_empty(list_t* p_list);
status_t get_length(list_t* p_list);
len_t get_lenth(list_t* p_list);
void show_list(list_t* p_list, char* msg);

status_t destroy_list(list_t** pp_list);

/* List Helper Functions */
node_t* search_node(list_t* p_list, data_t search_data);
void generic_insert(node_t* p_beg, node_t* p_mid, node_t* p_end);
void generic_delete(node_t* p_delete_node);

node_t* get_node(data_t new_data);
void* xmalloc(size_t number_of_bytes);

int main(void)
{
    stack_t* p_stack = NULL;
    data_t data;
    status_t status;

    p_stack = create_stack();

    status = is_stack_empty(p_stack);
    if(status == TRUE)
        puts("The Stack is Empty at The Start");

    status = top(p_stack, &data);
    if(status == STACK_EMPTY)
        puts("Cannot Top From Empty Stack");
}

void* xmalloc(size_t number_of_bytes)
 {
    void* ptr = NULL;
    ptr = malloc(number_of_bytes);
    if(ptr == NULL)
    {
        puts("Allocation Error: Error in Allocating Memory");
        exit (EXIT_FAILURE);
    }

    return(ptr)
}

node_t* get_node(data_t new_data)
{
    node_t* p_new_node = NULL;

    p_new_node = (node_t*)xmalloc(sizeof(node_t));
    p_new_node->data = new_data;
    p_new_node->prev = NULL;
    p_new_node->nnext = NULL;

    return(p_new_node);
}

list_t* create_list(void)
{
    list_t* p_list = NULL;

    p_list = get_node(0);
    p_list->prev = p_list;
    p_list->next = p_list;
    return(p_list);
}

stack_t* create_stack(void)
{
    return create_list();
}
status_t is_stack_empty(stack_t* p_stack)
{
    return is_list_empty(p_stack);

}




status_t is_list_empty(list_t* p_list)
{
    return (p_list->prev == p_list && p_list->next == p_list);
}

