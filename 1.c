#include<stdio.h>
#include<stdlib.h>
union Prize
{
int cash;
char book[10];
int ticket[5];
};
void main()
{
union Prize my_prize;
int i,ptype;
printf("Enter what prize you got\n");
printf("1: Cash Prize \n2: Book \n 3:five Movie ticket Number\n");
scanf("%d",&ptype);
if(ptype==1)
{
printf("Enter the Cash amount\n");
scanf("%d",&my_prize.cash);
}
else if(ptype==2)
{
printf("Enter the book name\n");
scanf("%s",my_prize.book);
}
else if(ptype==3)
{
printf("Enter 5 movie ticket number\n");
for(i=0;i<5;i++)
scanf("%d",&my_prize.ticket[i]);
}
if(ptype==1)
{
printf("You won Cash: %d\n",my_prize.cash);
}
else if(ptype==2)
{
printf("You won book :%s\n",my_prize.book);
}
else if(ptype==3)
{
printf("You won following Movie tickets\n");
for(i=0;i<5;i++)
printf("Ticket number =%d\n",my_prize.ticket[i]);
}
}
