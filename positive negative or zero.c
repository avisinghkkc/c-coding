#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the value of a");
    scanf("%f",&a);
   
    if(a>0){
        printf("a is positive");
    }
    else if(a<0){
    printf("a  is negative");
    }
    else{
        printf("a is zero");
    }
}