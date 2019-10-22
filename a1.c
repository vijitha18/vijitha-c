#include<stdio.h>
void read(int plhari[],int size)
{
int i;
printf("enter %d items into the array\n",size);
for(i=0;i<size;i++)
{
scanf("%d",&plhari[i]);
}
}
void display(int plhari[],int size)
{
int i;
printf("the content of the array is\n");
for(i=0;i<size;i++)
{
printf("%d element is %d\n",i,plhari[i]);
}
}
int copy(int plhari[],int newarr[],int x,int y)
{
int i,size,c=0,j=0;
printf("enter the new items on discount\n");
for(i=0;i<size;i++)
{
if(plhari[i]>=x && plhari[i]<=y)
{
newarr[j]=plhari[i];
c++;
j++;
}
}
return c;
}


void main()
{
int plhari[10],newarr[10],newsize,x,y;
read(plhari,10);
display(plhari,10);
printf("enter the range of values");
scanf("%d%d",&x,&y);
newsize=copy(plhari,newarr,x,y);
display(newarr,newsize);
}
