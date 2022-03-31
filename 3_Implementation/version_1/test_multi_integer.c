#include "unity.h"

extern void manual_test_multi_integer();

void setUp(void)
{
}

void tearDown(void)
{
}

void automated_test_multi_integer()
{
    TEST_ASSERT_EQUAL(0, multi_integer(0, 0));
    TEST_ASSERT_EQUAL(4, multi_integer(2, 2));
    TEST_ASSERT_EQUAL(-20, multi_integer(-10, 2));
}

void automated_test_multi_overflow()
{
    TEST_ASSERT_EQUAL(0, multi_integer(INT_MAX, 5));
}

void automated_test_multi_underflow()
{
    TEST_ASSERT_EQUAL(0, multi_integer(INT_MIN, -1));
}

int main(void)
{
    manual_test_multi_integer();

    UnityBegin(NULL);

    RUN_TEST(manual_test_multi_integer);

    return (UnityEnd());
}