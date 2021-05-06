#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    double distance;
    printf("Enter x1\n");
    scanf("%d",&x1);
    printf("Enter y1\n");
    scanf("%d",&y1);
    printf("Enter x2\n");
    scanf("%d",&x2);
    printf("Enter y2\n");
    scanf("%d",&y2);
    distance=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
    printf("Distance=%lf\n",distance);
    return 0;
}
