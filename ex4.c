#include<stdio.h>
struct point
{
int x;
int y;
};
void main()
{
struct point p1,p2,p3,p4;
printf(" Enter the values x-axis and y-axis to points\n");
scanf("%d%d%d%d",&p1.x,&p2.x,&p3.x,&p4.x);
scanf("%d%d%d%d",&p1.y,&p2.y,&p3.y,&p4.y);
printf("The x-axis of the points are %d%d%d%d",p1.x,p2.x,p3.x,p4.x);
printf("The y-axis of the points are %d%d%d%d",p1.y,p2.y,p3.y,p4.y);
}
