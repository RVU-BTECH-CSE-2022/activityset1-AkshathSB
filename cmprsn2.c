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
void output (float a, float b)
{
  printf("The largest number is a=%f,b=%f is %f\n", a, b, c);
}
int main(void)
{
  float a, b
  a= input("a");
  b= input("b");
  compare = find_largest ("a,b");
  return 0;
}

