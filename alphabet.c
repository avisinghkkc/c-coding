
#include <stdio.h>

int main()
{
  char a;
  scanf("%c",&a);
  (a>='A' && a<='Z') || (a>='a' && a<='z')?printf("it is an alphabet"):printf("it is not an alphabet");
}
