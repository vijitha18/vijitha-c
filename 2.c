#include<stdio.h>
#include<stdlib.h>
union prize
{
int cash;
char book[10];
int ticket[5];
};
typedef union prize PRIZE;
enum prizetype {First_prize = 1,Second_prize = 2,Third_prize = 3};
typedef enum prizetype PTYPE;
void main()
{
PRIZE my_prize;
PTYPE ptype;
int i,choice;
printf("Enter what prize you got\n");
printf("1: Cash Prize \n2: Book \n 3:10 Movie ticket Number\n");
scanf("%d",&ptype);
if(ptype==first_prize)
{
printf("Enter the Cash amount\n");
scanf("%d",&my_prize.cash);
}
else if(ptype==Second_prize)
{
printf("Enter the book name\n");
scanf("%s",________);
}else if(ptype == Third_prize)
{
printf("Enter 5 movie ticket number\n");
for(i=0;i<5;i++)
scanf("%d",_______);
}
if(ptype == _______)
{
printf("You won Cash: %d\n",_______);
}
else if(ptype == ________)
{
printf("You won book :%s\n",_______);
}
else if(ptype == ________)
{
printf("You won following Movie tickets\n");
for(i=0;i<5;i++)
printf("Ticket number =%d\n",_________);
}
}
