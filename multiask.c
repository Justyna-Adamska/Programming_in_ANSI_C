#include <stdio.h>

int main ()
{
printf("Please insert the first digit:");

int a,b,c;

a=getchar()-'0';
getchar();

printf("Please insert second digit:");

b=getchar()-'0';

c=a*b;

printf("%d\n", c);

return 0;

}
