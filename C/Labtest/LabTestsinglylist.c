#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void changeValueAtPosition(struct node *head, int position, int newValue)
{
    int currentPosition = 0;
    struct node *current = head;
    while (current != NULL && currentPosition < position - 1)
    {
        current = current->link;
        currentPosition++;
    }
    if (current != NULL)
    {
        current->data = newValue;
    }
}
void deleteNodeAtPosition(struct node **head_add, int position)
{

    if (position == 1)
    {
        struct node *temp = *head_add;
        *head_add = (*head_add)->link;
        free(temp);
        return;
    }
    struct node *prev = NULL;
    struct node *current = *head_add;
    int count = 0;
    while (count < position - 1)
    {
        prev = current;
        current = current->link;
        count++;
    }
    prev->link = current->link;
    free(current);
}
void printLinkedListRecursively(struct node *head)
{
    if (head == NULL)
    {
        return;
    }
    printf("%d ", head->data);
    if (head->link != NULL)
    {
        printLinkedListRecursively(head->link);
    }
}

int main()
{
    struct node *head;
    struct node *new;
    struct node *old;
    int n, i;

    scanf("%d", &n);
    new = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &new->data);
    head = new;
    old = new;
    for (i = 2; i <= 2 * n; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        new->data = 0;
        new->link = NULL;
        old->link = new;
        old = new;
    }
    // printLinkedListRecursively(head);
    int ii, jj;
    if (head->data > 0)
    {
        ii = 3;
        jj = 2;
        for (int tt = 0; tt < n; tt++)
        {

            int x;
            scanf("%d", &x);
            if (x > 0)
            {
                changeValueAtPosition(head, ii, x);
                ii += 2;
            }
            else
            {
                changeValueAtPosition(head, jj, x);
                jj += 2;
            }
        }
    }
    else if (head->data < 0)
    {
        ii = 2;
        jj = 3;
        for (int tt = 0; tt < n; tt++)
        {

            int x;
            scanf("%d", &x);
            if (x > 0)
            {
                changeValueAtPosition(head, ii, x);
                ii += 2;
            }
            else
            {
                changeValueAtPosition(head, jj, x);
                jj += 2;
            }
        }
    }
    int xx = 1;
    struct node *ptr = head;
    for (int i = 1; i <= 2*n; i++)
    {
        if (ptr->data == 0)
        {
            deleteNodeAtPosition(&head, i);
        }
        ptr = ptr->link;
    }
    printLinkedListRecursively(head);

    return 0;
}
