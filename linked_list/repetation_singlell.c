#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define SUCCESS                 0
#define FLASE                   1
#define LIST_EMPTY              2
#define LIST_INVALID_DATA       3

typedef struct node_t
{
    int data;
    struct node_t* next;
};

typedef struct node_t   list_t;

void* xmalloc(size_t number_of_bytes)
{
    void* ptr = NULL;

    ptr = malloc(number_of_bytes);

    if(ptr == NULL){
        puts("Memory allocation Failed\n");
        exit(EXIT_FAILURE);
    }

    return(ptr);

}

/*
get node mdhe apn data as 0 pass kerto create_list mdhun hya function mdhe
xmallox through we allocate the memory. it's give us struct node_t pointer
we put it here as a NULL;

*/

list_t* get_node(int data)
{
    list_t* p_new_node = NULL;
    p_new_node = (struct node_t*)xmalloc(sizeof(struct node_t));
    p_new_node->data = data;
    p_new_node->next = NULL;

    return(p_new_node);
}
/*
create node hya function mdhe apn node ha create karto tya mdhe get node function mdhumn
xmalloc funntion mdhe jato ani tithun dynamic memory allocate krun retrun ghetala jato 

input parameter = void 
out put parameter = struct node pointer 
*/
list_t* create_list(void)
{
     list_t* p_head_node = NULL;
    p_head_node = get_node(0);
    return(p_head_node);
}

void insert_start(list_t* p_head_node, int new_data)
{
    list_t* p_insert_node = NULL;
    p_insert_node = get_node(new_data);
    p_insert_node->next= p_head_node->next;
    p_head_node->next = p_insert_node;
}


/*
insert last mdhe 

input parameter = head_node of struct node and input data;

out put parameter = void

while loop rotate until the last node and at the last it will come out of loop 

and then in the p_insert_node last we put that new created address of struct node and 
get node itself put null at next 

*/

void insert_end(list_t* p_head_node, int new_data)
{
    list_t* p_insert_node = NULL;
    
    p_insert_node = p_head_node;
    
    while(p_insert_node->next != NULL)
        p_insert_node = p_insert_node->next;
    
    p_head_node->next = get_node(new_data);
}

int inser_after(list_t* p_head_node, int e_data, int new_data)
{
    list_t* e_node = NULL;
    list_t* new_node = NULL;

    e_node = search_node(p_head_node, e_data);
    if(e_node == NULL)
        return (LIST_INVALID_DATA);

    new_node = get_node(new_data);
    new_node->next = new_node;

    return (SUCCESS);
}

void get_node_its_pred(
        list_t* p_head_node,
        int search_data,
        list_t** pp_node,
        list_t** pp_pred_node,
)
{
    list_t* run = NULL;
    list_t* run_pred = NULL;

    while(run != NULL)
    {
        if(run->data == search_data)
        {
            *pp_node = run;
            *pp_pred_node = run_pred;
        }

        run_pred = run ;
        run = run->next;
    }

    *pp_node = NULL;
}
/*
 Hya mdhe aplyla 1 la precedence node find krun tya mdhe hya node cha address
 store krun new node mdhe tya precede madhla address strore karva lagto

*/
int inser_before(list_t* p_head_node, int e_data, int new_data)
{
    list_t* e_node = NULL;
    list_t*  e_node_pred = NULL;
    list_t* new_node = NULL;;

    get_node_and_its_pred(p_head_node, e_data, &e_node, &e_node_pred);

    if(e_node == NULL)
        return(LIST_INVALID_DATA);
    new_node = get_node(new_data);
    new_node->next = e_node;
    e_node_pred->next = new_node;

    return(SUCCESS);
}

int get_start(list_t* p_head_node, int* p_start+_data)
{
    if(p_head_node->next == NULL)
        return (LIST_EMPTY);

    *p_start_data = p_head_node->next->data;

    return(SUCCESS);
}

int get_end(list_t* p_head_node, int* p_end_data)
{
    list_t* run = NULL;

    if(p_head_node->next == NULL)
    {
        return (LIST_EMPTY);
    }

    run = p_head_node;
    while(run->next != NULL)
        run = run->next;

    *p_end_data = run->data;
}

int pop_start(list_t* p_head_node, int* p_start_data)
{
    list_t* tmp_ptr = NULL;

    if(p_head_node->next == NULL)
        return (LIST_EMPTY);

    tmp_ptr = p_head_node->next;
    *p_start_data = tmp_ptr->data;
    p_head_node->next = tmp_prt->next;

    free(tmp_ptr);

    return(SUCCESS);

}

int pop_end(list_t* p_head_node, int* p_end_data)
{
    list_t* last_node = NULL;
    list_t* last_node_pred = NULL;

    if(p_head_node->next == NULL)
        return (LIST_EMPTY)

    last_node_pred = p_head_node;
    last_node = p_head_node->next;

    while(last_node->next != NULL)
    {
        last_node_pred = last_node;
        last_node = last_node->next;
    }

    *p_end_data = last_node->data;

    free(last_node);
    last_node = NULL;

    last_node_pred->next = NULL;
    return (SUCCESS);
}

int remove_start(list_t* p_head_node)
{
    list_t* tmp_prt = NULL;

    if(p_head_node->next == NULL)
        return(LIST_EMPTY)
    tmp_prt = p_head_node->next;
    p_head_node->next = tmp_ptr->next;

    free(tmp_ptr)
    tmp_ptr= NULL;

    return (SUCCESS);
}









void show_list(list_t* p_head_node, char* msg)
{
    list_t* run = NULL;
    if(msg != NULL)
    {
        puts(msg);
    }

    printf("[start->]");
    run = p_head_node->next;
    while(run != NULL){

        printf("[%d]->",run->data);

    }
    printf("[END]\n");
}

                                                                                                                        













