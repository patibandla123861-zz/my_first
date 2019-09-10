#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next;
};

struct node* head;

void insert(int x)
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=head;
head=temp;
}

void print()
{
struct node* temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\n");
}

void main()
{
head=NULL;
int i,n,x;
printf("enter how many numbers youn want:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the numbers");
scanf("%d",&x);
insert(x);
print();
}
}
