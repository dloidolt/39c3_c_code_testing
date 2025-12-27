#include <stdint.h>
#include "unity.h"
/* #include "file_to_test.h" */

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_function_should_doBlahAndBlah(void)
{
	uint16_t actual = 0xBEFF;
	TEST_ASSERT_EQUAL_HEX16_MESSAGE(0xC0FE, actual, "I want coffee!");
}

void test_function_should_doAlsoDoBlah(void) {
	void *p = NULL;
	TEST_ASSERT_NULL(p);
}

#ifdef MAIN
// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_should_doBlahAndBlah);
    RUN_TEST(test_function_should_doAlsoDoBlah);
    return UNITY_END();
}
#endif
