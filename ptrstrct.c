#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    struct student *ptr=&s1;
    strcpy(s1.name,"Sivakumar S");
    s1.cgpa=8.0;
    s1.roll=32;
    printf("His name is %s\n",ptr->name); // instead of (*ptr).name; we use ptr->name;
    printf("Roll no : %d\n",ptr->roll);
    printf("Having cgpa of : %f\n",ptr->cgpa);
    printf("\n");

    return 0;
}