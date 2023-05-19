#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the value of a");
    scanf("%f",&a);
    printf("enter the value of b");
    scanf("%f",&b);
    printf("enter the value of c");
    scanf("%f",&c);
    if(a>b && a>c){
        printf("a is greater");
    }
    else if(b>a && b>c){
    printf("b  is greater");
    }
    else{
        printf("c is greater");
    }
}