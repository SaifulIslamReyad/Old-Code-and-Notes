#include <stdio.h>
#include <stdlib.h>
// head=*head_add
struct node
{
    int data;
    struct node *link;
};
void printReverseByRecursion(struct node *head)
{
    if (head == NULL)
        return;
    printReverseByRecursion(head->link);
    printf("%d ", head->data);
}

void addAtEnd(struct node *head, int dat)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = dat;
    temp->link = NULL;
    // If the list is empty
    // if (head == NULL)
    // {
    //     head = temp;
    //     return;
    // }
    // Traverse to the last node
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

// struct node *add_at_end2(struct node *ptr, int dat)
// {
//     //// ptr is last node
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp->data = dat;
//     temp->link = NULL;
//     ptr->link = temp;
//     return temp;
//     //// we will call the function like---
//     //// ptr= add_at_end(ptr,4);
// }

void newHead(struct node **head_add, int dat)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = dat;
    temp->link = *head_add;
    *head_add = temp;   
    // to call newHead(&head,data)
}

// void add_at_pos(struct node *head, int dat, int pos)
// {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp->data = dat;
//     temp->link = NULL;

//     struct node *ptr = head;
//     pos -= 2;
//     while (pos)
//     {
//         ptr = ptr->link;
//         pos--;
//     }
//     temp->link = ptr->link;
//     ptr->link = temp;
// }
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
void insertNodeAtPosition(struct node **head_add, int dat, int position)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = dat;
    temp->link = NULL;

    if (position == 1)
    {
        temp->link = *head_add;
        *head_add = temp;
        return;
    }

    struct node *ptr = *head_add;
    for (int i = 1; i < position - 1; i++)
    {
        ptr = ptr->link;
    }
    ///[node1][node2][node3][node4][ptr][temp][node7][node8]
    temp->link = ptr->link;
    ptr->link = temp;
}

void delHead(struct node **head_add)
{
    struct node *temp = *head_add;
    *head_add = (*head_add)->link;
    free(temp);
}

void deleteLastNode(struct node **head_add)
{
    // if (*head_add == NULL)
    // {
    //     printf("Linked list is empty");
    //     return;
    // }
    // else if ((*head_add)->link == NULL)
    // {
    //     free(*head_add);
    //     *head_add = NULL;
    //     return;
    // }
    struct node *ptr = *head_add;
    while (ptr->link->link != NULL)
    {
        ptr = ptr->link;
    }
    free(ptr->link);
    ptr->link = NULL;
}

void deleteNodeAtPosition(struct node **head_add, int position)
{
    // if (*head_add == NULL)
    // {
    //     printf("Linked list is empty");
    //     return;
    // }
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
void frequency(struct node *head)
{
    int arr[100], c = 0;
    struct node *ptr = head;

    // Storing node data into an array
    while (ptr != NULL)
    {
        arr[c++] = ptr->data;
        ptr = ptr->link;
    }

    // Sorting the array (bubble sort)
    for (int i = 0; i < c - 1; i++)
    {
        for (int j = 0; j < c - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Counting and printing frequencies
    for (int i = 0; i < c; i++)
    {
        int count = 1; // Initialize count for each element
        // If the current element is same as the next one, increment the count
        while (i < c - 1 && arr[i] == arr[i + 1])
        {
            count++;
            i++;
        }
        printf("%d is present %d times\n", arr[i], count);
    }
}

void frequenc2(struct node *head)
{
    sort(&head);
    struct node *ptr = head;
    int count = 1;
    while (ptr != NULL)
    {

        if (ptr->data == ptr->link->data)
        {
            count++;
        }
        else
        {
            printf("%d", count);
            count = 1;
        }
    }
}

void addFromArray(int arr[], int size)
{
    struct node *new;
    struct node *head;
    struct node *old;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = arr[0];
    old = new;
    head = new;
    for (int i = 1; i < 10; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        new->data = arr[i];
        new->link = NULL;
        old->link = new;
        old = new;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    //     how do we call ?
    //     int size = sizeof(arr) / sizeof(arr[0]);
    //     addFromArray(arr, size);
    //
}
void addInArray(struct node *head)
{
    int i = 0, arr[100];
    struct node *ptr = head;
    while (ptr != NULL)
    {
        arr[i++] = ptr->data;
        ptr = ptr->link;
    }
    for (int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
    // addInArray(head);
}
void printNodes(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
void sort(struct node **head_add)
{
    // non decreasing
    struct node *ptr = *head_add;
    struct node *atr;
    int temp;

    while (ptr != NULL)
    {
        atr = ptr->link;
        while (atr != NULL)
        {
            if (ptr->data > atr->data)
            {
                // Swap data values
                temp = ptr->data;
                ptr->data = atr->data;
                atr->data = temp;
            }
            atr = atr->link;
        }
        ptr = ptr->link;
    }
}
void rearrange(struct node **head_add)
{
    /////////প্রথমে নেগেটিভ  ,মাঝে জোড়, শেষে বিজোড়
    struct node *ptr = *head_add;
    struct node *hptr = *head_add;
    int temp;
    while (ptr != NULL)
    {
        if (ptr->data < 0)
        {
            temp = ptr->data;
            ptr->data = hptr->data;
            hptr->data = temp;
            hptr = hptr->link;
        }
        ptr = ptr->link;
    }
    ptr = hptr;
    while (ptr != NULL)
    {
        if (ptr->data % 2 == 0)
        {
            temp = ptr->data;
            ptr->data = hptr->data;
            hptr->data = temp;
            hptr = hptr->link;
        }
        ptr = ptr->link;
    }
}

void rearrange2(struct node **head_add)
{

    /////////প্রথমে বিজোড় ,মাঝে নেগেটিভ, শেষে জোড়
    struct node *ptr = *head_add;
    struct node *hptr = *head_add;
    int temp;
    while (ptr != NULL)
    {
        if (ptr->data >= 0 && ptr->data % 2 == 1)
        {
            temp = ptr->data;
            ptr->data = hptr->data;
            hptr->data = temp;
            hptr = hptr->link;
        }
        ptr = ptr->link;
    }
    ptr = hptr;
    while (ptr != NULL)
    {
        if (ptr->data < 0)
        {
            temp = ptr->data;
            ptr->data = hptr->data;
            hptr->data = temp;
            hptr = hptr->link;
        }
        ptr = ptr->link;
    }
}
void rearrange3(struct node **head_add)
{

    /////////প্রথমে বিজোড় ,এরপর নেগেটিভ বিজোড়,এরপর নেগেটিভ জোড়, শেষে জোড়
    struct node *ptr = *head_add;
    struct node *hptr = *head_add;
    int temp;
    while (ptr != NULL)
    {
        if (ptr->data >= 0 && ptr->data % 2 == 1)
        {
            temp = ptr->data;
            ptr->data = hptr->data;
            hptr->data = temp;
            hptr = hptr->link;
        }
        ptr = ptr->link;
    }
    ptr = hptr;

    while (ptr != NULL)
    {
        if (ptr->data < 0 && ptr->data % 2 == 0)
        {
            temp = ptr->data;
            ptr->data = hptr->data;
            hptr->data = temp;
            hptr = hptr->link;
        }
        ptr = ptr->link;
    }
    ptr = hptr;
    while (ptr != NULL)
    {
        if (ptr->data < 0 && ptr->data % 2 == -1)
        {
            temp = ptr->data;
            ptr->data = hptr->data;
            hptr->data = temp;
            hptr = hptr->link;
        }
        ptr = ptr->link;
    }
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

void deleteLinkedList(struct node **head_add)
{
    struct node *current = *head_add;
    struct node *next;

    while (current != NULL)
    {
        next = current->link;
        free(current);
        current = next;
    }

    *head_add = NULL; // Resetting the head to NULL
}
struct node *reverselist(struct node *head)
{
    struct node *prev = NULL;
    struct node *next = NULL;
    while (head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
    // head= reverselist(head);
}

int main()
{

    struct node *head;
    struct node *new;
    struct node *old;
    int n, i;

    // scaning
    // how many nodes = n?
    scanf("%d", &n);
    new = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &new->data);
    head = new;
    old = new;
    for (i = 2; i <= n; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new->data);
        new->link = NULL;
        old->link = new;
        old = new;
    }
    printNodes(head);

    return 0;
}