#include<stdio.h>
struct point
{
int x;
int y;
};
void main()
{
struct point p1;
printf("enter the value x-axis and y-axis to point p1");
scanf("%d%d",&p1.x,&p1.y);
printf("the x-axis of point is %d\n",p1.x);
printf("the y-axis of point is %d\n",p1.y);
}
