#include<stdio.h>
int input()
{
  int a,b;
  printf("enter the number\n");
  scanf("%d%d\n",&a,&b);
  return 0;
}
int gcd(int a,int b)
{
  for(int i=2;i<=a && i<=b;i++)
    {
      if(a%i==0 && b%i==0)
        gcd=i;
      return gcd;
    }
}
int main()
{
  int a,b,g;
  a=input();
  b=input();
 g=gcd(a,b);
  }
