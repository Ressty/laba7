#include <stdio.h>
#include <conio.h>

int main()
{
    
  char c;
  int i;
  double d;

  printf("tip  \t\t adres \t\t\t adres+2 \t\t adres-1\n");
  printf("char \t\t %p \t\t %p \t\t %p\n",&c,&c+2,&c-1);
  printf("int \t\t %p \t\t %p \t\t %p\n",&i,&i+2,&i-1);
  printf("double \t\t %p \t\t %p \t\t %p\n" ,&d,&d+2,&d-1);
  getch();


}