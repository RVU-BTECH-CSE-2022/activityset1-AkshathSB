#include<stdio.h>
float input(char s[])
{
  float x;
  printf("enter number %s",s);
  scanf("%f", &x);
  return x;
}

float find_largest ( float a, float b)
{
  float c;
  if (a<b)
  {
    c=b;
  }
  else
  {
    c=a;
  }
  return c;
}

void output (float result)
{
  printf("The largest number is %f\n", result);
}

int main(void)
{
  float a, b, compare;
  a = input("1");
  b = input("2");
  compare = find_largest (a,b);
  output(compare) ;
  return 0;
}

