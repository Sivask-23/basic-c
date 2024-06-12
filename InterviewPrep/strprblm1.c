#include<stdio.h>
#include<string.h>



struct student
{
    char name[100];
    int rollno;
    float cgpa;
};


int main(){

    struct student s1[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name: \n");
        char newname[100]="";
        scanf("%s",&newname);
        strcpy(s1[i].name,newname);
        printf("Enter roll no: \n");
        scanf("%d",&s1[i].rollno);
        printf("Enter cgpa: \n");
        scanf("%f",&s1[i].cgpa);
    }

    printf("Details of student\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name of student %d is %s\n",i+1,s1[i].name);
        printf("Roll no: %d\n",s1[i].rollno);
        printf("Cgpa : %.1f\n",s1[i].cgpa);
        printf("\n");
    }
    return 0;
}