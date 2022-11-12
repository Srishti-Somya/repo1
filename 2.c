#include<stdio.h>
int main()
{
int i=3,a=0,b=1,c;
while(i<=6)
{c=a+b;
printf("%d",c);
a=b;
b=c;
i++;
}

return 0;
}