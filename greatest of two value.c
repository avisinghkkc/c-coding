
#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Enter two nummbers: ");
    scanf("%f",&a);
    scanf("%f",&b);
    c=(a>b)?a:b;
    printf("max between %f and %f is %f",a,b,c);
    return 0;
}
