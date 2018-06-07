#include <stdio.h>
#include "Triangle.h"

char *getTriangleName(int l1, int l2, int l3)
{
  if (l1 <= 0 || l2 <= 0 || l3 <= 0)
    return "Not a Triangle";
  
  if (l1 == l2 && l1 == l3 && l2 == l3)
    return "equilateral";
  
  if (l1 == l2 || l1 == l3 || l2 == l3)
    return "isosceles";
  
  if (l1 != l2 && l1 != l3 && l2 != l3)
    return "scalene";
 
}

int add(int v1, int v2)
{
  return v1+v2;
}