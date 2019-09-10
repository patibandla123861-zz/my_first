#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};



void
insert (struct Node **head, int new_data)
{

struct Node *new_node = (struct Node *) malloc (sizeof (struct Node));

struct Node *last = *head;


new_node->data = new_data;


new_node->next = NULL;


if (*head == NULL)
{
*head = new_node;
return;
}


while (last->next != NULL)
last = last->next;


last->next = new_node;
return;
}

void
printlist (struct Node *node)
{
while (node != NULL)
{
printf (" %d ", node->data);
node = node->next;
}
}

void
main ()
{
struct node *head = NULL;
int n;
printf ("enter the numbers:");
for (int i = 0; i < 5; i++)
{
scanf ("%d", &n);
insert (&head, n);
}

printlist (head);

}
