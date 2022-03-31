#include "unity.h"
#include "multi_integer.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void automated_test_multi_integer()
{
    int expected_multi = 2;
    int result_multi = 0;
    TEST_ASSERT_EQUAL(SUCCESS, multi_integer(0, 0, &result_multi));
    TEST_ASSERT_EQUAL(expected_multi, result_multi);

    TEST_ASSERT_EQUAL(SUCCESS, multi_integer(1, 2, &result_multi));
    TEST_ASSERT_EQUAL(2, result_multi);

    TEST_ASSERT_EQUAL(SUCCESS, multi_integer(-4, 2, &result_multi));
    TEST_ASSERT_EQUAL(-8, result_multi);
    
}

void automated_test_multi_overflow()
{
    int expected_multi = 0;
    int result_multi= 0;
    TEST_ASSERT_EQUAL(OVERFLOW, multi_integer(INT_MAX, 2, &result_multi));   
}

void automated_test_multi_underflow()
{
    int expected_multi = 0;
    int result_multi = 0;
    TEST_ASSERT_EQUAL(UNDERFLOW, multi_integer(INT_MIN, -2, &result_multi));
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(automated_test_multi_integer);
    RUN_TEST(automated_test_multi_overflow);
    RUN_TEST(automated_test_multi_underflow);

    return (UnityEnd());
}