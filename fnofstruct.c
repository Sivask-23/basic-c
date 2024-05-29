#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};
void printInfo(struct student s1);
int main(){
    struct student s1;
    struct student s2;
    strcpy(s1.name,"Sivakumar S");
    s1.cgpa=8.0;
    s1.roll=32;
    printInfo(s1);

    return 0;
}
void printInfo(struct student s1){
    printf("His name is %s\n",s1.name);
    printf("Roll no : %d\n",s1.roll);
    printf("Having cgpa of : %f\n",s1.cgpa);
    printf("\n");
}