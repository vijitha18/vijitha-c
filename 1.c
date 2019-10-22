#include<stdio.h>
void read(int plhari[],int size)
{
printf("enter the values for %d items\n",size);
for(int i=0;i<size;i++)
scanf("%d",&plhari[i]);
}
void display(int plhari[],int size)
{
printf("entered values are\n");
for(int i=0;i<size;i++)
printf("item[%d]=%d",i,plhari[i]);
}
void update1(int plhari[],int size)
{
int i;
for(int i=0;i<size;i++)
plhari[i]=plhari[i]*2;
}
void addall(int plhari[],int size)
{
int i,total=0;
for(int i=0;i<size;i++)
total=total+plhari[i];
return total;
}
void updatepos(int plhari[],int size)
{
if (pos<=size)
{
plhari[pos]=val;
return plhari[pos];
prinf("after updating");
}
else
{
printf("invalid input\n");
}
void search(int plhari[],int ele)
{
int i;
for(int i=0;i<size;i++)
{
if (plhari[i]==ele)
printf("%d is present in %d position",ele,i);
}
}
void count(int plhari[],int size,int value)
{
int i,c=0;
for(int i=0;i<size,i++)
{
if(plhari[i]<value)
c=c+1;
}
return c;
}
void pos(int plhari[],int size,int pos1,int pos2)
{
int temp;
if(pos1<=size)
{
if(pos2<=size)
{
temp=plhari[pos1];
plhari[pos1]=plhari[pos2];
plhari[pos2]=temp;
printf("after swapping\n");
}
}
else
printf("invalid input\n");
}
void copy(int plhari[],int plrebel[],int size)
{
int i;
for(i=0;i<size;i++)
plrebel[i]=plhari[i];
}
void extract(int plhari[],int size,int p1,int p2)
{
if(p1<=size)
{
if(p2<=size)
{
printf("%d is the number present in %d position\n",plhari[p1],p1);
printf("%d is the number present in %d position\n",plhari[p2],p2);
}
}
else
{
printf("invalid input\n");
}
void main()
{
int i,plhari[10],number,sum,ele,val,n,pos1,pos2,plrebel[10],p1,p2,position,value,update;
printf("enter how many numbers to read\n");
scanf("%d",&number);
read(plhari,number);
display(plhari,number);
update1(plhari,number);
printf("\n the price after getting doubled\n");
display(plhari,number);
printf("\n adding all the elements\n");

