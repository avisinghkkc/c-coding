#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    c = pow(a, b);
    printf("The value of a^b is: %d", c); 
    return 0;
}
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value for second matrices\n");
           for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            sub=a[i][j]-b[i][j];
            c[i][j]=sub;
        }
    }
    printf("the subtractionof matrices is equal to\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}