#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
void printlist(struct node* n) 
{ 
    while (n != NULL) { 
        printf(" %d ", n->data); 
        n = n->link; 
    } 
}

void main()
{
struct node *head=NULL;
struct node *first=NULL;
struct node *second=NULL;

head=(struct node*)malloc(sizeof (struct node));
first=(struct node*)malloc(sizeof (struct node));
second=(struct node*)malloc(sizeof (struct node));

head->data=2;
head->link=first;

first->data=3;
first->link=second;

second->data=4;
second->link=NULL;

printlist(head);
}



