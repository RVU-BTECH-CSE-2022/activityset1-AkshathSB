#include<stdio.h>


int main(void)
{
  int a,b,c;
  a = input("1");
  b = input("2");
  c = sum(a,b);
  printf("The sum is %d\n",c);
}
int input(char s[])
{
  float x;
  printf("Enter number %s: ",s);
  scanf("%f",&x);
  return x;
}

int sum( int a, int b)
{
  int c;
  c = a+b;
  return c;
}
