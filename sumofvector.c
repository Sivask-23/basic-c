#include<stdio.h>
#include<string.h>
typedef struct vector{
    int x;
    int y;
} v;
void sumofvectors(struct vector v1 , struct vector v2, struct vector sum);
int main(){
    v v1={5,10};
    v v2={6,12};
    v sum={0};
    sumofvectors(v1,v2,sum);

    return 0;
}
void sumofvectors(struct vector v1 , struct vector v2, struct vector sum){

    sum.x=(v1.x+v2.x);
    sum.y=(v1.y+v2.y);
    printf("sum of x is %d and y is %d",sum.x,sum.y);

}