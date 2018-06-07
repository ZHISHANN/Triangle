#include "unity.h"
#include "Triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getTriangleName_given_5_6_7_expects_is_scalene(void)
{
  char *triangleName = getTriangleName(5,6,7);
  
  TEST_ASSERT_EQUAL_STRING("scalene",triangleName);
}

void test_getTriangleName_given_minus5_6_7_expects_is_not_a_Triangle(void)
{
  char *triangleName = getTriangleName(-5,6,7);
  
  TEST_ASSERT_EQUAL_STRING("Not a Triangle",triangleName);
}

void test_getTriangleName_given_7_7_7_expects_is_equilateral(void)
{
  char *triangleName = getTriangleName(7,7,7);
  
  TEST_ASSERT_EQUAL_STRING("equilateral",triangleName);
}

void test_getTriangleName_given_minus7_minus7_minus7_expects_not_a_Triangle(void)
{
  char *triangleName = getTriangleName(-7,-7,-7);
  
  TEST_ASSERT_EQUAL_STRING("Not a Triangle",triangleName);
}

void test_getTriangleName_given_15_60_15_expects_is_isosceles(void)
{
  char *triangleName = getTriangleName(15,60,15);
  
  TEST_ASSERT_EQUAL_STRING("isosceles",triangleName);
}

void test_getTriangleName_given_2_2_minus5_expects_not_a_Triangle(void)
{
  char *triangleName = getTriangleName(2,2,-5);
  
  TEST_ASSERT_EQUAL_STRING("Not a Triangle",triangleName);
}

void test_getTriangleName_given_2_0_5_expects_not_a_Triangle(void)
{
  char *triangleName = getTriangleName(2,0,5);
  
  TEST_ASSERT_EQUAL_STRING("Not a Triangle",triangleName);
}

void test_add_2_with_5_expect_7(void)
{
  int result = add(2,5);
  
  //printf("result = %d", result);
  
  TEST_ASSERT_EQUAL(7, result);
}

void test_add_9_with_minus_20_expect_minus11(void)
{
  int result = add(9,-20);
  
  //printf("result = %d", result);
  
  TEST_ASSERT_EQUAL(-11, result);
}

