#include<stdio.h>
int main()
{
    float basicPay,dearnessAllowance,houseRentAllowance,grossSalary,providentFund;
    printf("Enter Basic Pay \n");
    scanf("%f",&basicPay);

    houseRentAllowance=0.2*basicPay;
    dearnessAllowance=0.4*basicPay;
    providentFund=0.12*basicPay;
    grossSalary=basicPay+dearnessAllowance+houseRentAllowance+providentFund;

    printf("Basic Pay=%.2f\n",basicPay);
    printf("Dearness Allowance=%.2f\n",dearnessAllowance);
    printf("House Rent Allowance=%.2f\n",houseRentAllowance);
    printf("ProvidentFund=%.2f\n",providentFund);
    printf("Gross Salary=%.2f\n",grossSalary);
    return 0;
}
