#include<stdio.h>
float input(char s[])
{
  float x;
  printf("enter %s",s);
  scanf("%f",&x);
  return x;
}
float find_area(float length, float breadth)
{
  float area = length*breadth*0.5;
  return area;
}
void output(float length, float breadth, float area)
{
  printf("The area of the triangle with length=%f and breadth=%f is %F",length, breadth,area);
}
  int main(void)
{
  float length, breadth, area;
  length = input("length");
  breadth = input("breadth");
  area = find_area(length,breadth);
  output(length, breadth, area);
  return 0;
  }

