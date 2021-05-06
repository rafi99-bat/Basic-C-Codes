#include <stdio.h>
#include <string.h>
struct Subject {
        char subjectName[20][20];
        int subjectMarks[10];
};
struct Student {
        char name[20];
        int total;
        struct Subject sub;
};

int main()
{
        int i, size, subjectSize, j;
        char tempSubName[20];
        printf("Enter number of students\n");
        scanf("%d", &size);
        printf("Enter number of Subjects\n");
        scanf("%d", &subjectSize);

        struct Student s[size];

        for(j=0; j<subjectSize; j++)
        {
                printf("Enter Subject %d name\n",j+1);
                fflush(stdin);
                gets(tempSubName);
                for(i=0; i<size; i++)
                        strcpy(s[i].sub.subjectName[j],tempSubName);
        }
        for(i=0; i<size; i++)
        {
                printf("Enter Student %d Name(max 20 characters)\n",i+1);
                fflush(stdin);
                gets(s[i].name);
                s[i].total=0;
                for(j=0; j<subjectSize; j++) {
                        printf("Enter %s Marks\n", s[i].sub.subjectName[j]);
                        scanf("%d", &s[i].sub.subjectMarks[j]);
                        s[i].total += s[i].sub.subjectMarks[j];
                }
                printf("\n");
        }

        printf("Final Marks for All Students\n");
        for(i=0; i<size; i++)
                printf("Total Marks of %s=%d\n",s[i].name,s[i].total);
        return 0;
}
