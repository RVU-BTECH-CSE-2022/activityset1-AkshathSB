#include<stdio.h>
int y =0;

float akshath(char s[])
{
  int z =9;
  float x;
 printf("enter number %s", s);
  scanf("%f",&x);
  return x;
}

  int main(void)
{
  float r ;
 r = akshath ("pucchi") ;
 printf ("I am here \n");
 printf (" y value is %d\n ", y);
  printf ("Returned Value is %f " , r);

}


  
