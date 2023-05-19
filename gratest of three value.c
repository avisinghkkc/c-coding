
#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    (a>b)&&(a>c)?printf("a is gretest"):(b>a)&&(b>c)?printf("b is gretest"):printf("c is gretest");
    
    return 0;
}
