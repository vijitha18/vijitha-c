#include<stdio.h>
#include<stdlib.h>
struct list
{
 int item;
 struct list *address;
};
typedef struct list *LOCATION;
LOCATION createnode()
{
 LOCATION newnode;
 newnode=(LOCATION)malloc(sizeof(struct list));
 return(newnode);
}
LOCATION insert(LOCATION first,int cost)
{
 LOCATION temp;
 temp=createnode();
 temp->item=cost;
 temp->address=first;
 first=temp;
 return(first);
}
LOCATION updateitem(LOCATION first,int n)
{
 LOCATION cur,prv;
 if(first==NULL)
 {
  printf("No item to update\n");
  return(first);
 }
 else
 {
 prv=NULL;
 cur=first;
 while(cur!=NULL)
 {
  if(cur->item%2==0)
  {
    prv=cur;
    cur=cur->address;
   }
   else
   {
    cur->item=cur->item%n;
    prv=cur;
    cur=cur->address;
   }
  }
   return(first);
  }
 }
void display(LOCATION first)
{
 LOCATION cur;
 int pos=1;
 if(first==NULL)
    printf("Nothing to display\n");
 else
 {
  cur=first;
  while(cur!=NULL)
  {
   printf("The cost of %d item purchased till now is %d\n",pos,cur->item);
   cur=cur->address;
   pos++;
  }
 }
}         
void main()
{
 int cost,choice,n;
 LOCATION first=NULL;
 for(;;)
 {
  printf("Enter the choice\n");
  printf("1:Insert Front \t 2:Update \t 3:Display\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:printf("Enter the cost of item purchase\n");
          scanf("%d",&cost);
          first=insert(first,cost);
          display(first);
          break;
  case 2:printf("Enter the value of n\n");
          scanf("%d",&n);
          first=updateitem(first,n);
          display(first);
          break;
  case 3:display(first);
            break;  
  default:exit(0);
  }
 }
} 
