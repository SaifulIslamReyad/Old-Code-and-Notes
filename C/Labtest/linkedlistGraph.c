// linked list implementation of graph

// 1 2 5
// 1 4 6
// 2 3 2
// 2 6 3
// 3 5 4
// 4 7 7
// 5 6 6
// 6 7 5
// 0 0 0
// 1 7

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int nodeid;
    int cost;
    struct node *link;
};

struct node nodes[100];
int nodecount = 0;
int source = 0, destination = 0;
int cost = 0;

// add a node in the list.
void addnode(int nodeid)
{
    int i = 0;
    for (i = 0; i < nodecount; i++)
    {
        if (nodes[i].nodeid == nodeid)
        {
            return; // Node already exists, so no need to add it again
        }
    }

    nodes[nodecount].nodeid = nodeid; // Add the new node to the graph
    nodes[nodecount].link = NULL;     // Initialize the link pointer to NULL
    nodecount++;                      // Increment the total node count
}

// nodeid is a node in the node list. linkid is a node which is linked with nodeid.
void addlink(int nodeid, int linkid, int linkcost)
{
    int i = 0;
    for (i = 0; i < nodecount; i++)
    {
        if (nodes[i].nodeid == nodeid)
        {
            break; // Find the index of the node with nodeid
        }
    }

    struct node *l;
    l = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the new linked node
    l->nodeid = linkid;                             // Set the id of the linked node
    l->cost = linkcost;                             // Set the cost of the link
    l->link = NULL;                                 // Initialize the link pointer to NULL

    if (nodes[i].link == NULL)
    {
        nodes[i].link = l; // If there are no existing links, set the link pointer of the node to the new linked node
    }
    else
    {
        struct node *p = nodes[i].link; // Traverse the existing linked list to find the last node
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = l; // Add the new linked node at the end of the linked list
    }
}

// whether nodeid is included in the path.
int isinpath(int *path, int count, int nodeid)
{
    int i = 0;
    for (i = 0; i < count; i++)
    {
        if (path[i] == nodeid)
        {
            return 1; // Nodeid is found in the path
        }
    }
    return 0; // Nodeid is not found in the path
}

// recursively go to all the possible way from the last node of the path.
void search(int path[], int count)
{
    int cnode = path[count - 1];

    if (cnode == destination)
    {
        printf("\n");
        int j = 0;
        for (j = 0; j < count; j++)
        {
            printf(" %d ", path[j]);
        }
        printf(" Total cost is %d", cost);
        cost = 0;
        return;
    }

    int i = 0;
    for (i = 0; i < nodecount; i++)
    {
        if (nodes[i].nodeid == cnode)
        {
            break; // finding index
        }
    }

    struct node *p = nodes[i].link;
    
    while (p != NULL)
    {
        int possibleid = p->nodeid;

        if (isinpath(path, count, possibleid) == 0)
        {
            path[count] = possibleid;
            cost += p->cost;
            count++;
            search(&path[0], count);
            count--;
        }

        p = p->link;
    }
}

void main(void)
{
    freopen("input.txt", "r", stdin);
    int a, b, c;
    while (1)
    {
        scanf("%d%d%d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }

        addnode(a);
        addnode(b);
        addlink(a, b, c);
        addlink(b, a, c);
    }

    scanf("%d%d", &source, &destination);
    int path[100];
    path[0] = source;

    search(&path[0], 1);
}
