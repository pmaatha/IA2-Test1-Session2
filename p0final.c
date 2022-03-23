#include<stdio.h>
int input_side()
{
  int side;
  printf("enter the side of the triangle\n");
  scanf("%d",&side);
  return side;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && a!=c && b!=c);
{
  return 1;
}
  return 0;
  }
void output(int a,int b,int c,int isscalene)
{
  if(isscalene)
  {
    printf("the triangle with sides %d,%d and %d isscalene\n",a,b,c);
  }
  else
  {
    printf("the triangle with sides %d,%d and %d  not scalene\n",a,b,c);
  }
}
int main()
{
  int AB=input_side();
  int BC=input_side();
  int AC=input_side();
  int res=check_scalene(AB,BC,AC);
  output(AB,BC,AC,res);
  return 0;
}
