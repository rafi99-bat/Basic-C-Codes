/**
A company  decides to give bonus to all its employees on new year.
A 5% bonus on salary is given to male workers and 10% bonus on salary is given to female workers.
write a C program to enter the salary and gender of the employees.
If the salary of the employee is less than 10000, then the employee gets an extra 2% bonus on salary.
Calculate the bonus that has to be given to the employee and display the salary that the employee will get?
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    float salary,bonus;
    char gender;
    printf("Enter M for Male and F for Female\n");
    scanf("%c",&gender);
    printf("Enter Salary\n");
    scanf("%f",&salary);
    if(gender=='M' || gender=='m')
    {
        if(salary>10000)
            bonus=(float)(salary*0.05);//0.05--5%
        else
            bonus=(float)(salary*0.07);
    }
    if(gender=='F' || gender=='f')
    {
        if(salary>10000)
            bonus=(float)(salary*0.1);//0.1--10%
        else
            bonus=(float)(salary*0.12);
    }
    salary+=bonus;
    printf("Bonus=%.2f\nSalary=%.2f\n",bonus,salary);
    return 0;
}
