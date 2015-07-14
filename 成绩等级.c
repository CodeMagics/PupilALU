
#include<stdio.h>
void main()
{
int a;
0<=a<=100;
scanf("%d",&a);
if(a>=90)printf("A\n");
else if(90>=a>80)printf("B\n");
else if(80>=a>70)printf("C\n");
else if(70>=a>60)printf("D\n");
else if(a<60)printf("E\n");
}
