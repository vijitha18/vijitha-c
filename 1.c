#include<stdio.h>
#include<stdlib.h>
struct list
{
int item;
struct list *address;
};
typedef struct list * LOCATION;
LOCATION createnode()
{
LOCATION newnode;
newnode=(LOCATION)malloc(sizeof(struct list));
return(newnode);
}
LOCATION insertfront(LOCATION first,int cost)
{
LOCATION temp;
temp=createnode();
temp->item=cost;
temp->address=first;
first=temp;
return(first);
}
LOCATION insertlast(LOCATION first,int cost)
{
LOCATION temp,cur;
temp=createnode();
temp->item=cost;
temp->address=NULL;
if(first==NULL)
{
first=temp;
return(first);
}
cur=first;
while(cur->address!=NULL)
{
cur=cur->address;
}
cur->address=temp;
return(first);
}
void display(LOCATION first)
{
int position=1;
LOCATION cur;
cur=first;
while(cur->address!=NULL)
{
printf("cost of %d item is%d",position,cur->item);
position++;
cur=cur->address;
}
}
LOCATION deleteitem(LOCATION first,int cost)
{
LOCATION cur,prv;
if(first==NULL)
{ printf("No item to delete\n");
return(first);
}
if(first->item==cost)
{
printf("The deleted item is %d\n",first->item);
cur=first;
first=first->address;
free(cur);
return(first);
}
prv=NULL;
cur=first;
while(cur!=NULL&&cur->item!=cost)
{
cur=cur->address;
}
if(cur==NULL) 
printf("Item Not found\n");
else 
{
printf("Deleted item is %d\n",cur->item);
prv->address=cur->address;
free(cur);
}
return(first);
}
LOCATION insertposition(LOCATION first,int cost,int position)
{
LOCATION temp,prv,cur;
prv=NULL;
int count=1;
temp=createnode();
temp->item=cost;
temp->address=NULL;
if(position=1)
{
temp->address=first;
first=temp;
return(first);
}
while(cur!=NULL&&count!=position)
{
prv=cur;
cur=cur->address;
count++;
}
if(cur==NULL)
printf("invalid position");
else
{
prv->address=temp;
temp->address=cur;
}
return(first);
}
LOCATION deletefront(LOCATION first)
{
LOCATION cur;
if(first==NULL)
{
printf("nothing");
return(first);
}
cur=first;
first=first->address;
printf("deleted item is %d",cur->item);
free(cur);
return(first);
}
LOCATION deletelast(LOCATION first)
{
LOCATION prv,cur;
if(first==NULL)
{
printf("nothing");
return(first);
}
prv=NULL;
cur=first;
while(cur->address!=NULL)
{
prv=cur;
cur=cur->address;
}
prv->address=NULL;
printf("deleted item is %d",cur->item);
free(cur);
return(first);
}
void main()
{
int cost,choice,position;
LOCATION first=NULL;
for(;;)
{
printf("Enter the Choice\n");
printf("1: Insert Front\t 2: Insert Last 3: delete item\n");
printf("4:insert position 5: Delete front 6: Delete last \t7:Display \n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter the item\n");
        scanf("%d",&cost);
        first=insertfront(first,cost);
        display(first);
        break;
case 2: printf("Enter the item\n");
        scanf("%d",&cost);
        first=insertlast(first,cost);
        display(first);
        break;
case 3: display(first);
        break;
case 4: printf("\nenter the cost:");
        scanf("%d",&cost);
        first=deleteitem(first,cost);
        break;
case 5: printf("\nenter the cost:");
        scanf("%d",&cost);
        printf("enter the position:");
        scanf("%d",&position);
        first=insertposition(first,cost,position); 
        display(first);
        break;
case 6: first=deletefront(first);
        display(first);
        break;
case 7: first=deletelast(first);
        display(first);       
        break;
default: exit(0);
}
}
}
