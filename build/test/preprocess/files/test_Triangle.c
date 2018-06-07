#include "build/temp/_test_Triangle.c"
#include "Triangle.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_getTriangleName_given_5_6_7_expects_is_scalene(void)

{

  char *triangleName = getTriangleName(5,6,7);



  UnityAssertEqualString((const char*)(("scalene")), (const char*)((triangleName)), (

 ((void *)0)

 ), (UNITY_UINT)(16));

}



void test_getTriangleName_given_minus5_6_7_expects_is_not_a_Triangle(void)

{

  char *triangleName = getTriangleName(-5,6,7);



  UnityAssertEqualString((const char*)(("Not a Triangle")), (const char*)((triangleName)), (

 ((void *)0)

 ), (UNITY_UINT)(23));

}



void test_getTriangleName_given_7_7_7_expects_is_equilateral(void)

{

  char *triangleName = getTriangleName(7,7,7);



  UnityAssertEqualString((const char*)(("equilateral")), (const char*)((triangleName)), (

 ((void *)0)

 ), (UNITY_UINT)(30));

}



void test_getTriangleName_given_minus7_minus7_minus7_expects_not_a_Triangle(void)

{

  char *triangleName = getTriangleName(-7,-7,-7);



  UnityAssertEqualString((const char*)(("Not a Triangle")), (const char*)((triangleName)), (

 ((void *)0)

 ), (UNITY_UINT)(37));

}



void test_getTriangleName_given_15_60_15_expects_is_isosceles(void)

{

  char *triangleName = getTriangleName(15,60,15);



  UnityAssertEqualString((const char*)(("isosceles")), (const char*)((triangleName)), (

 ((void *)0)

 ), (UNITY_UINT)(44));

}



void test_getTriangleName_given_2_2_minus5_expects_not_a_Triangle(void)

{

  char *triangleName = getTriangleName(2,2,-5);



  UnityAssertEqualString((const char*)(("Not a Triangle")), (const char*)((triangleName)), (

 ((void *)0)

 ), (UNITY_UINT)(51));

}



void test_getTriangleName_given_2_0_5_expects_not_a_Triangle(void)

{

  char *triangleName = getTriangleName(2,0,5);



  UnityAssertEqualString((const char*)(("Not a Triangle")), (const char*)((triangleName)), (

 ((void *)0)

 ), (UNITY_UINT)(58));

}



void test_add_2_with_5_expect_7(void)

{

  int result = add(2,5);







  UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(67), UNITY_DISPLAY_STYLE_INT);

}



void test_add_9_with_minus_20_expect_minus11(void)

{

  int result = add(9,-20);







  UnityAssertEqualNumber((UNITY_INT)((-11)), (UNITY_INT)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_INT);

}
