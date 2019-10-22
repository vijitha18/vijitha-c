#include<stdio.h>
void read (int plhari[], int size)
{
   int i;
   printf("enter %d items into the array \n", size);
   for(i=0;i<size;i++)
   scanf("%d", &plhari[i]);
}
void display (int plhari[], int size)
{
   int i;
   printf("the contents of the array is \n");
   for(i=0;i<size;i++)
    printf("%d element is %d \n", i, plhari[i]);
}
void update1 (int plhari[], int size)
{
   int i;
   for(i=0;i<size;i++)
   plhari[i]= plhari[i]*2;
}
int addall (int plhari[], int size)
{
   int i, total=0;
   for (i=0;i<size;i++)
   total=total+plhari[i];
   return(total);
}
int updatepos (int plhari[], int size, int position, int value)
{
if (position <=size)
  {
    plhari [position]=value;
    return (plhari[position]);
    printf ("after updating \n");
  }
else
   printf ("invalid input \n");
}
void search (int plhari[], int size, int ele)
{
   int i,p=-1;
   for (i=0;i<size;i++)
   {
     if(plhari[i]==ele)
     p=i;
     }
     if(p!=-1)
     printf("%d is present in %d position \n",ele,i);
     else
     printf("element is not found");
}
int count(int plhari[],int size,int val)
{
   int i,c=0;
   for(i=0;i<size;i++)
   {
     if (plhari[i]<val)
     c++;
   }
   return c;
}
void pos (int plhari[],int size,int pos1,int pos2)
{
   int temp;
  // if (pos1<=size)
   //{
    // if (pos2<=size)
     //{
       temp=plhari[pos1];
       plhari[pos1]=plhari[pos2];
       plhari[pos2]=temp;
     //}
   //}
   //else
   //printf("invalid input \n");
}
void copy (int plhari[], int plrebel[], int size)
{
  int i;
  for (i=0;i<size;i++)
  plrebel[i]=plhari[i];
}
void extract (int plhari[], int size,int p1,int p2)
{
   if (p1<=size)
   {
     if (p2<=size)
     {
        printf("%d is the number present in%d position \n", plhari[p1], p1);
        printf("%d is the number present in%d position\n", plhari[p2], p2);
     }
   }
   else
   printf("invalid input \n");
}
void main()
{
int i, plhari[10], number, sum, val, ele, n, pos1, pos2, plrebel[10], p1, p2, position, value, update;
printf("enter how many numbers to read \n");
scanf("%d", &number);
read(plhari,number);
display(plhari,number);
update1(plhari,number);
printf("\n the price after getting doubled \n \n");
display(plhari,number);
printf("\n adding all the elements \n");
sum=addall(plhari,number);
printf("%d",plhari[0]);
for (i=1; i<number; i++)
printf("+%d\n", plhari[i]);
printf("=%d \n", sum);
printf("\n enter the position & its respective value to be updated \n");
scanf("%d%d", &position, &value);
update = updatepos(plhari,number,position,value);
printf("%d is updated in %d position \n",update,position);
display (plhari, number);
printf("\n enter the element to be searched:");
scanf("%d", &ele);
search(plhari,number,ele);
printf("\n enter the value to be compared:");
scanf("%d", &val);
n=count(plhari,number,val);
printf("%d elements found which is less than the given value \n",n);
printf("\n enter 2 postions in array to be swapped \n");
scanf("%d%d", &pos1,&pos2);
pos(plhari,number,pos1,pos2);
display(plhari,number);
printf("copying an array to an another array \n");
printf("PLHARI \n");
display(plhari,number);
copy (plhari,number,plrebel);
printf("\n PLREBEL \n");
display (plrebel,number);
printf("\n enter the 2 positions in the array from which the number is to be extracted \n");
scanf("%d%d",&p1,&p2);
extract(plhari,number,p1,p2);
}

