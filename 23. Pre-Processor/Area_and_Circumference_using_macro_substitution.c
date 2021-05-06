#include <stdio.h>
#define PI 3.14159
int main()
{
        float radius, areaCircle, circumferenceCircle;

        printf("Enter radius\n");
        scanf("%f",&radius);
        areaCircle=PI*radius*radius;
        circumferenceCircle=2*PI*radius;
        printf("Area of Circle : %f\nCircumference of Circle : %f\n",areaCircle,circumferenceCircle);
        return 0;
}
