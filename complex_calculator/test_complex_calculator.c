#include "unity_internals.h"
#include "unity.h"
#include "header.h"
void setUp()
{}
void tearDown()
{}
complex c1,c2,result;
void test_sum(void)
{
    c1.real=0;c2.real=0;c1.img=0;c2.img=0;
    result=sum(c1,c2);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(0,result.img);
}
void test_mul(void)
{
 c1.real=1;c2.real=1;c1.img=1;c2.img=0;
 result=mul(c1,c2);
 TEST_ASSERT_EQUAL(1,result.real);
 TEST_ASSERT_EQUAL(1,result.img);
}
void test_div(void)
{
    c1.real=1;c2.real=0;c1.img=0;c2.img=1;
    result=sum(c1,c2);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(-1,result.img);
}
void test_sqr(void)
{
    c1.real=0;c1.img=1;
    result=sqr(c1);
    TEST_ASSERT_EQUAL(-1,result.real);
    TEST_ASSERT_EQUAL(0,result.img);
}
int main()
{
    UNITY_BEGIN()
    RUN_TEST(test_sum);
    RUN_TEST(test_mul);
    RUN_TEST(test_sqr);
    RUN_TEST(test_div);
    return UNITY_END();
}