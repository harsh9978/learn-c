#include <stdio.h>

int main ()
{
  float length;
  float breadth;
  printf ("enter value of length : ");
  scanf ("%f",&length);
  printf ("enter value of breadth : ");
  scanf ("%f",&breadth);
  float area = length * breadth;
  printf ("Area of rectangle : %f\n",area);
  return 0;
  

  
}