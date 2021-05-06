#include <stdio.h>
int GCD(int num1,int num2){
        if (num2 == 0)
                return num1;
        if (num1 == 0)
                return num2;

        if(num2>num1)
                return GCD(num1, num2 % num1);
        else
                return GCD(num1 % num2, num2);
}

int findGCD(int arr[], int n){
        int result = arr[0];
        for (int i = 1; i < n; i++)
        {
                result = GCD(arr[i], result);
                if(result == 1)
                        return 1;
        }
        return result;
}

int findLCM(int arr[], int n){
        int result=1;
        for(int i=0; i<n; i++)
                result=result*arr[i]/GCD(result,arr[i]);
        return result;
}

int main(){
        int n, i;
        printf("Enter total numbers : ");
        scanf("%d", &n);
        int num[n];
        printf("Enter %d numbers :\n", n);
        for (i=0; i<n; i++) {
                scanf("%d", &num[i]);
        }
        printf("GCD : %d\n", findGCD(num, n));
        printf("LCM : %d\n", findLCM(num, n));
}
