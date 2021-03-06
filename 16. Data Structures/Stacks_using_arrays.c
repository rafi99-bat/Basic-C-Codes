#include <stdio.h>
#include <stdlib.h>
#define size 10
void Push();
void Pop();
void Display();
int CheckStackFull();
int CheckStackEmpty();
struct StackArray {
        int array[size],top;
} ptr;

int main()
{
        int choice,contin;
        ptr.top=-1;
        do{
                printf("Enter\n1 - Push\n2 - Pop\n3 - Display\n4 - Exit\n");
                scanf("%d",&choice);
                switch(choice)
                {
                case 1: Push(); break;
                case 2: Pop(); break;
                case 3: Display(); break;
                case 4: exit(0); break;
                default: printf("Enter Valid Choice\n"); break;
                }
                printf("Enter 1 to continue otherwise any other number\n");
                scanf("%d",&contin);
        }while(contin==1);
        return 0;
}

void Push()
{
        int flag=CheckStackFull();
        if(flag==1)
        {
                int value;
                printf("Enter value to push into stack\n");
                scanf("%d",&value);
                ptr.top+=1;
                ptr.array[ptr.top]=value;
        }
        else
                printf("Stack is Full\n");
}
void Pop()
{
        int flag=CheckStackEmpty();
        if(flag==1)
        {
                printf("Popped Element is %d\n",ptr.array[ptr.top]);
                ptr.top-=1;
        }
        else
                printf("Stack is Empty\n");
}
void Display()
{
        int i,flag=CheckStackEmpty();
        if(flag==1)
        {
                printf("Elements present in stack\n");
                for(i=ptr.top; i>-1; i--)
                        printf("%d\n",ptr.array[i]);

                printf("\n");

        }
        else
                printf("Stack is Empty\n");
}

int CheckStackFull()
{
        if(ptr.top==size-1)
                return 0;
        else
                return 1;
}
int CheckStackEmpty()
{
        if(ptr.top==-1)
                return 0;
        else
                return 1;
}
