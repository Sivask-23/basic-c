#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    struct student s2;
    strcpy(s1.name,"Sivakumar S");
    s1.cgpa=8.0;
    s1.roll=32;
    printf("His name is %s\n",s1.name);
    printf("Roll no : %d\n",s1.roll);
    printf("Having cgpa of : %f\n",s1.cgpa);
    printf("\n");
    strcpy(s2.name,"Sooraj MS");
    s2.cgpa=9.0;
    s2.roll=33;
    printf("His name is %s\n",s2.name);
    printf("Roll no : %d\n",s2.roll);
    printf("Having cgpa of : %f\n",s2.cgpa);
    printf("\n");

    return 0;
}