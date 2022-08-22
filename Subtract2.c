#include<stdio.h>

int main (void)
{
  int a,b,c;
  a= input("1");
  b= input("2");
  c= subtraction(a,b);
  printf("The subtraction of the two numbers is %d\n",c);
}

int input(char s[])
{
  int x;
  printf("Enter the number please %d",s);
  scanf("%d",&x);
  return x;
}

int subtraction (int a, int b)
{
 int c;
  c = a - b;
  return c;
}