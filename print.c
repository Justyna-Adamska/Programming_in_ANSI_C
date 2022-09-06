#include <stdio.h>
void Print(int i);

int main(){
for (int i =0; i < 10; ++i)
	Print(i);
return 0;
};

void Print (int i)
{int j =2;
printf("Hello %d %d\n",i, j);
j++;
printf("Hi %d\n",j);
}
