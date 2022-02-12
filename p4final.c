#include<stdio.h>
int input_array_size()
{
  int length;
  printf("enter the lenght of the arrey\n");
  scanf("%d",&length);
  return length;
}
void input_array(int n,int a[n])
{
  printf("enter all values of the arrey\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int is_composite(int n)
{
  for(int i=2;i<=n/2;i++)
{
  if (n%i==0)
  return 1;
}
  return 0;
}
int sum_composite_number(int n,int a[n])
{
  int sum=0;
  for (int i=0;i<n;i++)
  {
    if(is_composite(a[i]))
    {
      sum +=a[i];
    }
    }
  return sum;

}
void out_put(int sum)
{
  printf("%d\n",sum);
}
int main()
{
  int length=input_array_size();
  int data[length];
  input_array(length,data);
  int res=sum_composite_number(length,data);
  out_put(res);
  return 0;

}