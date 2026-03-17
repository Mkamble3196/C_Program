#include <stdio.h>
#include <stdlib.h>

/* Doubly Linked List Node */
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

/* Create a new node */
struct node* create_node(int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (!new_node) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

/* Insert node at end */
void insert_end(struct node **head, int data)
{
    struct node *new_node = create_node(data);
    struct node *temp;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;
    new_node->prev = temp;
}

/* Merge two doubly linked lists */
struct node* merge_lists(struct node *head1, struct node *head2)
{
    struct node *temp;

    if (!head1) return head2;
    if (!head2) return head1;

    temp = head1;
    while (temp->next)
        temp = temp->next;

    temp->next = head2;
    head2->prev = temp;

    return head1;
}

/* Sort doubly linked list */
void sort_list(struct node *head)
{
    struct node *i, *j;
    int temp;

    for (i = head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

/* Display list */
void display(struct node *head)
{
    printf("List: ");
    while (head) {
        printf("[%p|%d|%p] ",head->prev, head->data, head->next);
        head = head->next;
    }
    printf("\n");
}

/* Free list memory */
void free_list(struct node *head)
{
    struct node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    struct node *list1 = NULL;
    struct node *list2 = NULL;
    struct node *merged = NULL;

    /* Create List 1 */
    insert_end(&list1, 40);
    insert_end(&list1, 10);

    /* Create List 2 */
    insert_end(&list2, 30);
    insert_end(&list2, 20);

    printf("List 1:\n");
    display(list1);

    printf("List 2:\n");
    display(list2);

    /* Merge lists */
    merged = merge_lists(list1, list2);

    /* Sort merged list */
    sort_list(merged);

    printf("Merged & Sorted List:\n");
    display(merged);

    free_list(merged);

    return 0;
}
