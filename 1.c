#include <stdio.h>
#include <conio.h>

float x=-8.92;
int y=5;

int main()
{ 
printf("sizeof x=%u\n", sizeof x);
printf("sizeof y=%u\n", sizeof y);
printf("sizeof x+y=%u\n", sizeof x+y);
printf("sizeof (x+y)=%u\n", sizeof (x+y));
printf("sizeof x*2+1=%u\n", sizeof x*2+1);
printf("sizeof 2*y+1=%u\n", sizeof 2*y+1);
printf("sizeof ++y*2=%u\n", sizeof ++y*2);
printf("sizeof y--*2=%u\n", sizeof y--*2);
}