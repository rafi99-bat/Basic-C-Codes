#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int GetValidContactOrNot(char contact[]);
int main()
{
        int choice,i,flag,j=1;
        char contact[10],name[20],storeContact[100];

        do{
                if(choice==1)
                {
                        printf("Enter Name\n");
                        fflush(stdin);
                        gets(name);
                        printf("Enter Mobile Number\n");
                        fflush(stdin);
                        gets(contact);
                        flag=GetValidContactOrNot(contact);
                        if(flag==1)
                        {
                                FILE *contactFile;
                                contactFile=fopen("contactlist.txt","a");
                                char c;
                                if(contactFile==NULL)
                                {
                                        printf("Contact File Not Found\n");
                                        exit(0);
                                }
                                else
                                {
                                        strcpy(storeContact,"Name    : ");
                                        strcat(storeContact,name);
                                        strcat(storeContact,"\n");
                                        strcat(storeContact,"Contact : ");
                                        strcat(storeContact,contact);
                                        strcat(storeContact,"\n");
                                        fputs(storeContact,contactFile);
                                        fputs("----------------------------------------------------\n",contactFile);
                                        printf("Contact has been added Successfully\n");
                                }
                                fclose(contactFile);
                        }
                        else
                        {
                                printf("Invalid Contact Number.It should contain only numbers and should have 10 digits\n");
                        }
                }
                if(choice==2)
                {
                        FILE *contactFile;
                        contactFile=fopen("contactlist.txt","r");
                        char c;
                        while(1)
                        {
                                if(contactFile==NULL)
                                {
                                        printf("Contact File Not Found\n");
                                }
                                else
                                {
                                        c=fgetc(contactFile);
                                        if(c==EOF)
                                                break;
                                        printf("%c",c);
                                }
                        }
                        fclose(contactFile);
                }
                printf("Press\n1 - Add Contact\n2 - View Contact List\nany other number to exit\n");
                scanf("%d",&choice);

        }while(choice==1 || choice==2);
        return 0;
}

int GetValidContactOrNot(char contact[])
{
        int i,flag;
        if(strlen(contact)==10)
        {
                flag=1;
                for(i=0; i<strlen(contact); i++)
                {
                        if(!isdigit(contact[i]))
                                flag=0;
                }
        }
        else
        {
                return(0);
        }
        return flag;
}
