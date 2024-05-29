#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};
int main(){
    struct student cse[5];
    struct student ese[5];
    strcpy(cse[0].name,"Sivakumar S");
    cse[0].cgpa=8.0;
    cse[0].roll=32;
    printf("His name is %s\n",cse[0].name);
    printf("Roll no : %d\n",cse[0].roll);
    printf("Having cgpa of : %f\n",cse[0].cgpa);
    printf("\n");
    strcpy(cse[1].name,"Sooraj MS");
    cse[1].cgpa=9.0;
    cse[1].roll=33;
    printf("His name is %s\n",cse[1].name);
    printf("Roll no : %d\n",cse[1].roll);
    printf("Having cgpa of : %f\n",cse[1].cgpa);
    printf("\n");

    return 0;
}