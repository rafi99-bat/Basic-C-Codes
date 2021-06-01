#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* months[] = {"Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec","Jan","Feb"};
char* days[]= { "sunday","monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
int Day(int k,int m,int year);
int main()
{
        int k,m,year,i,flag=0,totdates,date,finalday,toContinueAdding,count=0,addViewAgenda;
        char str[3],day[100],event[200],dateInString[2],yearInString[5],storeEvent[400];
        printf("Enter\n1-Add Event in Agenda\n2-View Stored Agendas\n3-Exit\n");
        scanf("%d",&addViewAgenda);
        do{
                if(addViewAgenda==1)
                {
                        printf("enter Date\n");
                        scanf("%d",&date);
                        printf("Enter first 3 letters of month of the year ex:-for January enter Jan\n");
                        scanf("%s",str);
                        for(i=0; i<12; i++)
                        {
                                if(!strcmp(str,months[i]))
                                {
                                        m=i+1;
                                        flag=1;
                                        break;
                                }
                        }
                        if(flag==0)
                        {
                                printf("Invalid Month\n");
                                exit(0);
                        }
                        if(m==1 || m==3 || m==5 || m==6 || m==8 || m==10 || m==11)
                                totdates=31;
                        if(m==2 || m==4 || m==7 || m==9)
                                totdates=30;
                        if(m==12)
                        {
                                if(year%400==0||year%4==0)
                                        totdates=29;
                                else
                                        totdates=28;
                        }
                        if(date>totdates) {
                                printf("You entered date which is not there in month\n");
                                break;
                        }
                        printf("Enter year\n");
                        scanf("%d",&year);
                        finalday=Day(date,m,year);
                        printf("You have Entered %d-%s-%d ,%s\n",date,months[m-1],year,days[finalday]);
                        printf("Do you want to continue to add Agenda on this Particular Day?\nIf Yes Press 1 else any other number\n");
                        scanf("%d",&toContinueAdding);
                        if(toContinueAdding==1)
                        {
                                count++;
                                FILE *file;
                                char c;
                                file=fopen("Agenda.txt","a");
                                if(file==NULL)
                                {
                                        printf("File Not Found\n");
                                        exit(0);
                                }
                                else
                                {
                                        sprintf(dateInString,"%d",date);
                                        sprintf(yearInString,"%d",year);
                                        strcpy(storeEvent,"Event Date: ");
                                        strcat(storeEvent,days[finalday]);
                                        strcat(storeEvent,", ");
                                        strcat(storeEvent,dateInString);
                                        strcat(storeEvent,"-");
                                        strcat(storeEvent,months[m-1]);
                                        strcat(storeEvent,"-");
                                        strcat(storeEvent,yearInString);
                                        strcat(storeEvent,"\n");
                                        strcat(storeEvent,"Event: ");
                                        printf("Enter An Event to Add\n");
                                        fflush(stdin);
                                        gets(event);
                                        strcat(storeEvent,event);
                                        strcat(storeEvent,"\n");
                                        fputs(storeEvent,file);
                                        fputs("\n",file);

                                }
                                fclose(file);

                        }
                }
                else
                {
                        FILE *file1;
                        char c;
                        file1=fopen("Agenda.txt","r");
                        while(1)
                        {
                                if(file1==NULL)
                                {
                                        printf("File Not Found\n");
                                        exit(0);
                                }
                                else
                                {
                                        c=fgetc(file1);
                                        if(c==EOF)
                                                break;
                                        printf("%c",c);
                                }
                        }
                        fclose(file1);
                }
                printf("Enter\n1-Add Event in Agenda\n2-View Stored Agendas\n3-Exit\n");
                scanf("%d",&addViewAgenda);
        }while(addViewAgenda==1 || addViewAgenda==2);
        printf("Thank You\n");
        return 0;
}

int Day(int k,int m,int year)
{
        int D,C,i,f,finalday,flag=0;
        char day[100];
        if(k<=0||k>31)
        {
                printf("Invalid Date\n");
                exit(0);
        }
        if(m==11||m==12)
                year=year-1;
        D=year%100;
        C=year/100;
        f = (k+(((13*m)-1)/5)+D+(D/4)+(C/4))-(2*C);

        if(f>=0)
                finalday=f%7;
        else
                finalday=((f%7)+7)%7;
        return finalday;
}
