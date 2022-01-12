#include <stdio.h>
#include <conio.h>

int main()
{ 
int x=8, y=3;
float z1, z2;

z1=x/y;
z2=(float)x/y;

printf("x/y=%f\n",z1);
printf("(float)x/y=%f\n",z2);
}
