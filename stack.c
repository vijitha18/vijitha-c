#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define racksize 10
typedef int shirtnum;
typedef char shirtcolor[10];
struct stacklocation
{
 shirtnum sn;
 shirtcolor sc;
 struct stacklocation *link;
};
 typedef struct stacklocation *LOCATION;
LOCATION top;
int stacksize=0;
LOCATION push(shirtnum num,shirtcolor color,LOCATION top)
{
LOCATION temp;
if (stacksize==racksize)
{
 printf("wardrobe is full");
 return(top);
}
 else
{
 temp=(LOCATION)malloc(sizeof(struct stacklocation));
temp->sn=num;
strcpy(temp->sc,color);
temp->link=top;
top=temp;
stacksize++;
return(top);
}
}
LOCATION pop (LOCATION top)
{
LOCATION cur;
if(stacksize==0)
{
printf("no shirts to take");
return(top);
}
else
{
 cur=top;
printf("the %s shirt is taken",cur->sc);
top=top->link;
stacksize--;
free(cur);
return(top);
}
}
void display(LOCATION top)
{
 LOCATION cur;
if(stacksize==0)
{
printf("wardrobe is empty");
}
else
{
cur=top;
while(cur!=NULL)
{
 printf("%d.%s",cur->sn,cur->sc);
cur=cur->link;
}
}
}
void arrange(LOCATION top)
{
 shirtnum num;
 shirtcolor color;
 int choice;
for(;;)
{
printf("enter the choice:");
printf("\n1.priya keep the shirt\n2.hari take the shirt\n3.display\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the shirt number:");
scanf("%d",&num);
printf("enter the shirt color:");
scanf("%s",color);
top=push(num,color,top);
display(top);
break ;
case 2:top=pop(top);
       display(top);
       break;
case 3:display(top);
break;

default:exit(0);
}
}
}
void main()
{
top=NULL;
arrange(top);
}

