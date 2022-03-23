#include<stdio.h>

struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle k;
  printf("enter the base and altitude\n");
  scanf("%f%f",&k.base,&k.altitude);
  return k;
}
void find_area(Triangle *t)
{
  t->area=0.5 *t->base *t->altitude;
}
void output(Triangle t)
{
  printf("area of the triangle with base %f and altitude %f is %f",t.base,t.altitude,t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}
