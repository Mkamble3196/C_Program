#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node* create_node(int data)
{
    struct node *new_node = malloc(sizeof(struct node));

    if(!new_node)
    {
        printf("Memory allocation Failed");
        exit(1);
    }
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    
    return new_node;
}

void insert_end(struct node **head, int data)
{
    struct node *new_node = create_node(data);
    struct node *temp;

    if(*head == NULL)
    {
        *head = new_node;
        return;
    }

    temp = *head;
    while(temp->next)
        temp = temp->next;
    
    temp->next = new_node;
    new_node->prev = temp;
}

struct node* merge_lists(struct node *head1, struct node *head2)
{
    struct node *temp = NULL;

    if(!head1) 
        return head2;
    if(!head2)
        return head1;
    temp = head1;
    
    while(temp->next)
        temp = temp->next;

    temp->next = head2;
    head2->prev = temp;
    
    return head1;
}

void sort_list(struct node *head)
{
    struct node *i = NULL;
    struct node *j = NULL;
    int temp = 0;

    for(i = head; i ; i = i->next)
    {
        for(j = i->next; j; j = j->next)
        {
            if(i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;

            }
        }
    }
}


void print_list(struct node *head)
{
    printf("List:");
    while(head)
    {
        printf("%d->",head->data);
        head = head->next;
    }
    printf("\n");
}

void free_lists(struct node *head)
{
    struct node *temp = NULL;

    while(head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void)
{
    struct node *list1 = NULL;
    struct node *list2 = NULL;
    struct node *merged = NULL;

    insert_end(&list1, 40);
    insert_end(&list1, 50);

    insert_end(&list2, 10);
    insert_end(&list2, 20);

    merged = merge_lists(list1, list2);

    sort_list(merged);
    printf("merged & sorted List:\n");
    print_list(merged);

    free_lists(merged);

    return (0);

}