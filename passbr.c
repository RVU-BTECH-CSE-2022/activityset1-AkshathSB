#include<stdio.h>


int main(void)
{
  int a,b,c;
a = input(1);
b = input(2);  
c = addition(a,b);
 printf("The sum of the two numbers is %d", c);
int age [2];

for (int i=0; i<2; i++)
{
   scanf("%d", & age[i]);
}

for (int i=0; i<2; i++)
{
  printf("%d", age[i]);
 return 0;
}
return 0;
}
int input(char s[])
{
  int x;
  printf("enter number %d",s);
  scanf("%d",&x);
  return x;
} 
 

int addition(int a, int b)
{
int c;
c= a+b;
return c;  
}
 


