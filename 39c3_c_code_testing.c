/**
 * @file   39c3_code_testing.c
 * @author Dominik Loidolt (39c3@dominikloidolt.at)
 * @date   2025
 * @copyright GPL-2.0
 *
 * @brief C Code Testing. Let's talk about it!
 *        PASS, FAIL, or SEGFAULT?
 * ⢀⣀⣀⣀⣀⣀⣀⣀⣀⠀⠀⠀⠀⢀⡠⠤⠤⠤⠤⠤⣀⠀⠀⠀⠀⠀⣀⣠⣤⣤⣤⣤⣤⣤⣀⡀⠀⠀⢀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⢀⠤⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⣒⡒⠂⢤⡀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⣠⠔⠁⠀⠀⠀⡔⠁⠀⠀⠀⠀⠀⠀⠀⢱⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⡔⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⣿⣿⣿⣿⣦⡈⢢⠀
 * ⠀⠀⠀⢀⡠⠊⠁⠀⠀⠀⠀⠀⣇⠀⠀⠀⠀⠀⠀⠀⠀⢠⡇⠀⣿⣿⣿⡿⠉⠉⠉⠉⠉⠙⣿⣿⣿⡇⠀⠉⢉⣩⣼⣿⣿⣿⠿⠛⠁⠀⠀⠀⠀⡘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⡄⠇
 * ⠀⠀⠀⠛⠒⠒⠒⠒⢤⡀⠀⠀⠈⠢⠤⣀⣀⣀⣀⡠⠴⠊⡆⠀⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀    ⠀⠀⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠸
 * ⡄⠀⠀⠀⠀⠀⠀⠀⠀⢱⠀⠀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⣿⣿⣿⣷⣀⣀⣀⣀⣀⣠⣿⣿⣿⡇⣤⣤⣭⡍⠉⠉⠉⠉⣿⣿⣿⡇⠀⠀⠀⠰⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⡿⢀⠇
 * ⠳⡀⠀⠀⠀⠀⠀⠀⢀⠎⠀⠀⠸⡀⠀⠀⠀⠀⠀⠀⢀⡜⠀⠀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀⠀⠀⠀⠑⢄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⠿⠿⠿⠟⢋⡠⠃⠀
 * ⠀⠈⠉⠉⠉⠉⠉⠉⠁⠀⠀⠀⠀⠈⠉⠒⠒⠒⠒⠊⠉⠀⠀⠀⠀⠀⠉⠉⠙⠛⠛⠛⠛⠋⠉⠁⠀⠀⠀⠈⠉⠙⠛⠛⠛⠛⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠊⠁⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⣤⣤⣤⣤⣤⡀⠀⢀⣤⣶⣶⣦⡄⠠⣤⣤⡄⣤⣤⡄⢠⣤⣤⢠⣤⣤⣤⣤⠀⣤⣤⣤⣤⣤⡀⠀⠀⠀⢀⣤⣶⣶⣦⣄⠀⣤⣤⡄⢠⣤⣤⠀⣤⣶⣶⣦⣄⠀⢤⣤⣤⠀⠀⣤⣤⣤⣤⡄⢀⣤⣶⣶⣦⣄⠀⠀
 * ⣿⣿⣿⢿⣿⣿⠀⣾⣿⡿⢻⣿⣿⠀⣿⣿⡇⣿⣿⡇⢸⣿⣿⢸⣿⣿⠿⠿⠀⣿⣿⡿⢿⣿⣷⠀⠀⠀⣼⣿⣿⠻⣿⣿⡄⣿⣿⡇⣼⣿⡏⢸⣿⣿⠻⣿⣿⡆⢸⣿⣿⠀⠀⣿⣿⣿⠿⠇⣸⣿⣿⠻⣿⣿⡆⠀
 * ⣿⣿⣿⢸⣿⣿⡇⣿⣿⡇⢸⣿⣿⡇⣿⣿⡇⣿⣿⡇⢸⣿⣿⢸⣿⣿⠀⠀⠀⣿⣿⡇⢸⣿⣿⠀⠀⠀⣿⣿⣿⠀⣿⣿⡇⣿⣿⡇⣿⣿⡇⢸⣿⣿⠀⣿⣿⡇⢸⣿⣿⠀⠀⣿⣿⣿⠀⠀⣿⣿⣿⠀⣿⣿⡇⠀
 * ⣿⣿⣿⢸⣿⣿⡇⣿⣿⡇⢸⣿⣿⡇⣿⣿⡇⣿⣿⣷⢸⣿⡿⢸⣿⣿⠀⠀⠀⣿⣿⡇⢸⣿⣿⠀⠀⠀⣿⣿⣿⠀⣿⣿⡇⢸⣿⡇⣿⣿⡇⣿⣿⣿⠀⣿⣿⡇⢸⣿⣿⠀⠀⣿⣿⣿⠀⠀⢿⣿⣿⡀⠿⠿⠃⠀
 * ⣿⣿⣿⢸⣿⣿⡇⣿⣿⡇⢸⣿⣿⡇⣿⣿⡇⣿⣿⣿⢸⣿⡇⢸⣿⣿⣤⣄⠀⣿⣿⣇⣼⣿⠟⠀⠀⠀⣿⣿⣿⠀⠛⠛⠃⢸⣿⣇⣿⣿⠀⣿⣿⣿⠀⠛⠛⠃⢸⣿⣿⠀⠀⣿⣿⣿⣤⡄⠘⢿⣿⣿⣶⣄⠀⠀
 * ⣿⣿⣿⢸⣿⣿⠇⣿⣿⡇⢸⣿⣿⡇⣿⣿⡇⣿⢻⣿⢸⣿⡇⢸⣿⣿⡿⠿⠀⣿⣿⡟⢿⣿⡄⠀⠀⠀⣿⣿⣿⠀⣿⣿⡇⠸⣿⣿⣿⣿⠀⣿⣿⣿⠀⣿⣿⡇⢸⣿⣿⠀⠀⣿⣿⣿⠿⠇⣀⣀⣈⢻⣿⣿⡆⠀
 * ⣿⣿⣿⣾⣿⣿⠀⣿⣿⡇⢸⣿⣿⡇⢸⣿⣷⣿⢸⣿⣾⣿⡇⢸⣿⣿⠀⠀⠀⣿⣿⡇⢸⣿⣿⠀⠀⠀⣿⣿⣿⠀⣿⣿⡇⠀⢻⣿⣿⠛⠀⣿⣿⣿⠀⣿⣿⡇⢸⣿⣿⠀⠀⣿⣿⣿⠀⠀⣿⣿⣿⠀⣿⣿⡇⠀
 * ⣿⣿⣿⠛⠛⠁⠀⣿⣿⣧⣸⣿⣿⠃⢸⣿⣿⣿⠘⣿⣿⣿⡇⢸⣿⣿⣄⣀⠀⣿⣿⡇⢸⣿⣿⡀⠀⠀⢿⣿⣿⣠⣿⣿⡇⠀⢸⣿⣿⠀⠀⢸⣿⣿⣀⣿⣿⡇⢸⣿⣿⣀⡀⢿⣿⣿⣀⡀⢿⣿⣿⣀⣿⣿⡇⠀
 * ⣿⣿⡿⠀⠀⠀⠀⠘⢿⣿⣿⣿⠟⠀⢸⣿⣿⣿⠀⣿⣿⣿⠇⢸⣿⣿⣿⣿⠀⣿⣿⡇⠸⣿⣿⡇⠀⠀⠘⢿⣿⣿⣿⠟⠀⠀⢸⣿⣿⠀⠀⠘⢿⣿⣿⣿⠟⠁⢸⣿⣿⣿⡇⢸⣿⣿⣿⡇⠘⢿⣿⣿⣿⠟⠀⠀
 */



#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/* Function declarations */
int complicated_calculation(int input);
uint32_t map_to_pos(uint32_t value, uint32_t max_bits);
int compressed_decompression_round_trip(const uint8_t *data, size_t size, void *cfg);
int is_valid(int result);


/* ==========================================================================
 *  How my journey through the testing jungle began
 * ========================================================================== */

/* in the case the code "worked" */
void no_test_needed_if_it_works(void)
{
	int i;
	for (i = 0; i < 23; i++) {
		/* TODO: write tests for this */
		int result = complicated_calculation(i);
		/* ... */
	}
}

/* in the case the code not "worked" */
void printf_is_there_for_you(void)
{
	int i;
	for (i = 0; i < 23; i++) {
		int result = complicated_calculation(i);
		printf("i: %i; result: %d\n", i, result);
		/* ... */
	}
}

/**
 * Question to the audience:
 * Do you write tests?
 * Do you use printf to test your code?
 */


/* ==========================================================================
 *  After a long time spent getting the code working, I now need tests to get
 *  a 100% code coverage
 * ========================================================================== */

/* so every function static or not gets its test */
#include "map_to_pos.c"  /* Hack to test the static map_to_pos function */
#include <unity.h> /* I use the unity testing Framework */
void test_map_to_pos(void)
{
	uint32_t value_to_map;
	uint32_t max_data_bits;
	uint32_t mapped_value;

	/* test mapping 32 bits values */
	max_data_bits = 32;

	value_to_map = 0;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(0, mapped_value);

	value_to_map = -1U;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(1, mapped_value);

	value_to_map = 1;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(2, mapped_value);

	value_to_map = 42;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(84, mapped_value);

	value_to_map = INT32_MAX;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_HEX(UINT32_MAX-1, mapped_value);

	value_to_map = (uint32_t)INT32_MIN;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_HEX(UINT32_MAX, mapped_value);

	/* test mapping 16 bits values */
	max_data_bits = 16;

	value_to_map = -1U;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(1, mapped_value);

	/* test mapping 6 bits values */
	max_data_bits = 6;

	value_to_map = 0;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(0, mapped_value);

	value_to_map = -1U;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(1, mapped_value);

	value_to_map = UINT32_MAX;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(1, mapped_value);

	value_to_map = -1U & 0x3FU;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(1, mapped_value);

	value_to_map = 63;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(1, mapped_value);

	value_to_map = 1;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(2, mapped_value);

	value_to_map = 31;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(62, mapped_value);

	value_to_map = -33U; /* aka 31 */
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(62, mapped_value);

	value_to_map = -32U;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(63, mapped_value);

	value_to_map = 32;
	mapped_value = map_to_pos(value_to_map, max_data_bits);
	TEST_ASSERT_EQUAL_INT(63, mapped_value);
}


/*
 * This was a lot of tedious work and there was not really a great payoff except
 * a website with a green 100% figure.
 *
 * I went on and now I have to change a lot of tests when I refactor a function.
 * First I tried to fix it.
 * Then I gave up and abandoned the tests.
 * Then a new review is coming, needing test coverage and the cycle started
 * again.
 */

/*
 * Question to the audience:
 * Is someone familiar with this testing approach?
 */


/* ==========================================================================
 *  In the meantime I learned about Code sanitizer
 * ========================================================================== */

/*
 * AddressSanitize: clang/gcc -fsanitize=address code.c
 * UndefinedBehaviorSanitizer: clang/gcc -fsanitize=undefined code.c
 *
 *  You may want to set some environment variables:
 *    ASAN_OPTIONS=detect_leaks=1     to detect memory leaks
 *    UBSAN_OPTIONS=halt_on_error=1   to abort the program on UB
 *
 *  I use these for every debug build.
 *  They spark joy!
 *
 * DEMO TIME: show sanitizer in practice
 */

/*
 * Question to the audience:
 * Do you use code sanitizers?
 */


/* ==========================================================================
 *  Fuzzing to the rescue
 * ========================================================================== */

int LLVMFuzzerTestOneInput(const uint8_t *src, size_t size)
{
	struct compress_cfg cfg;
	generate_random_cfg(src, &size, &cfg);

	int result = compressed_decompression_round_trip(src, size, &cfg);

	FUZZ_ASSERT(is_valid(result));

	return 0;
}

/* This found some inputs trigger buffer overflows (with the help of
 * Address Sanitizer)
 * Moreover it found some edge cases where the decompression failed!
 *
 * This was the most useful test and huge improvement in the robustness of the
 * code.
 */

/**
 * Question to the audience:
 * Do you fuzz/property testing?
 */


/* ==========================================================================
 *  Open Round
 * ========================================================================== */

/*
 * Do you test at all?
 * How do you do it?
 * Do you have any hacks to prevent you from shooting yourself in the foot?
 * Do you automate test runs?
 * Do you want to share a test?
 *
 * Let's share your experiences!
 */











/* ==========================================================================
 *  Then I started to look more into tests, which completely changed my approach
 * ========================================================================== */


/*
 * DEMO TIME: show some recent tests
 */


/*
 * My new testing approach:
 * - AAA pattern
 *   - Arrange, Act and Assert
 *
 * - Only test against the public API
 *   - no more testing of static functions
 *   - prevents tight coupling with the implementation details
 *   - easy refactoring
 *
 * - One unit test verifies a *single* unit of behaviour
 *   - Something that a non-programmer with domain knowledge can understand
 *   - The test name describes this behaviour
 *     - like a requirement I have for the code
 *     - no more cryptic test names coupled to implementation details
 *   - That unit of test may require multiple classes or functions working together
 *   - They can serve as documentation and examples
 *
 * - Turn bugs into test cases
 *
 * - This makes my tests maintainable and provide real value
 */


/* ==========================================================================
 *  Test-driven development (TDD)
 * ========================================================================== */

/*
 * I am now trying TDD and I like it for now.
 *
 * https://tidyfirst.substack.com/p/canon-tdd
 *
 */

/**
 * Question to the audience:
 * Do you do TDD?
 */






/* ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣀⢠⡤⠤⠖⠒⠒⠒⠲⣆⠀⠀⠀⠀⣾⠋⠉⠉⠛⢷⠀⣴⠖⠒⠤⣄⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⠤⠶⢺⣾⣏⠁⠀⠀⣧⣼⣇⣀⠀⠀⠀⡀⠀⠘⡆⠀⠀⢰⣏⠀⠀⠀⠀⠘⣿⡟⠀⠀⢠⢃⣼⡏⠉⠙⢳⡆⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⣀⡤⠴⠒⠋⠙⣇⣿⠀⠀⠀⣿⣿⠀⠀⠀⢸⣿⣿⣿⠃⠀⢰⣿⡀⠀⠹⡄⠀⢸⣿⠀⠀⠀⠀⠀⢹⡇⠀⠀⢸⡿⣽⠀⠀⠀⡜⠀⣀⡤⠖⠓⠢⢤⣀⠀
 * ⣠⡴⠒⠉⠁⠀⠀⠀⠀⠀⠸⣿⡇⠀⠀⠘⠛⠃⠀⠀⠈⡟⠉⣿⠀⠀⠘⠛⠃⠀⠀⢷⠀⢸⣿⠀⠀⢠⡀⠀⠀⠀⠀⠀⣿⢧⡇⠀⠀⠸⠗⠚⠁⠀⠀⠀⣀⣠⣾⠃
 * ⣿⡇⠀⠀⠀⠀⠀⠀⣶⣶⣿⢿⢹⠀⠀⠀⢀⣀⠀⠀⠀⢳⠀⣿⠀⠀⢀⣀⣤⠀⠀⠘⣇⢸⡏⠀⠀⢸⣧⠀⠀⠀⠀⢸⣿⡿⠀⠀⢀⠀⠀⠀⢀⣤⣶⣿⠿⠛⠁⠀
 * ⢧⣹⣶⣾⣿⡄⠀⠀⠸⡟⠋⠘⡜⡆⠀⠀⢻⣿⡇⠀⠀⢸⡀⣿⠀⠀⢸⣿⡿⡇⠀⠀⢸⣿⡇⠀⠀⢸⡿⡆⠀⠀⠀⣾⣿⠃⠀⠀⣾⡇⠀⠀⠈⡟⠉⠀⠀⠀⠀⠀
 * ⠘⣿⡿⠿⢿⣧⠀⠀⠀⢳⡀⠀⣇⢱⠀⠀⠈⣿⣷⠀⣀⣸⣷⣿⣤⣤⣼⠋⣇⣹⣶⣶⣾⣿⡿⢲⣶⣾⡇⣿⣤⣀⣀⣿⡏⠀⠀⣼⡏⢧⠀⠀⠀⣇⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠸⡞⣇⠀⠀⠀⢧⠀⢸⣈⣷⣶⣶⣿⣿⣿⣿⣿⣿⣿⣽⣿⡏⢀⡼⠟⠛⠻⢿⡿⠿⠿⣿⣁⣿⣿⣿⣿⣿⣿⣿⣶⣴⢿⠁⢸⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⢹⣼⣦⣤⣶⣿⠁⣀⣿⠿⠿⣿⣫⣿⠉⠁⠀⠀⠀⡏⠀⣴⠏⠀⠀⠀⠀⠀⠹⣆⠀⢠⣿⠀⠀⠀⢈⠟⢻⡿⠿⣅⣘⡆⣸⣇⠀⠀⢸⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠻⠿⠿⠛⠃⢠⣿⣷⣄⠀⠈⠙⠋⠀⠀⠀⠀⣸⢁⡾⠁⠀⠀⣠⣤⡀⠀⠀⠸⣤⡞⡇⠀⠀⠀⢸⣰⣿⠃⠀⠀⢹⣿⣿⣿⣿⣦⣼⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⢿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⣿⣾⠇⠀⠀⣸⣿⣿⢿⠀⠀⠀⣿⢁⡇⠀⠀⢀⣿⣿⡏⠀⠀⠀⡼⠀⢙⣿⠛⠻⣏⡀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣷⠀⠀⠀⠀⢸⡿⡿⠀⠀⠀⡏⢹⠟⡟⠀⠀⠀⡿⢸⠀⠀⠀⢸⣿⡿⠀⠀⠀⢠⠇⡰⢋⡏⠀⠀⠀⢙⡆⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⡿⡿⠀⠀⠀⠀⣸⡇⡇⠀⠀⠀⠻⠾⠞⠁⠀⠀⢀⡇⡏⠀⠀⠀⢸⣿⠃⠀⠀⠀⡼⣰⠃⡞⠀⠀⠀⠀⡾⠁⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡇⡇⠀⠀⠀⠀⣿⣇⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣃⡇⠀⠀⠀⠀⠀⠀⠀⠀⣼⣷⠃⣼⡀⠀⠀⢀⡞⠁⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢸⠃⠀⠀⠀⢀⡇⢿⣿⣧⣀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣽⣿⣷⣤⡞⠁⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣼⣤⣶⣶⣶⡿⠁⠈⢿⣿⣿⣿⣿⣿⣿⣿⠿⠃⢸⣿⣿⣷⣤⣄⣀⣀⣤⣾⣏⣤⡟⠁⠀⠈⠻⡍⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠿⠿⠿⠟⠛⠁⠀⠀⠀⠉⠛⠛⠛⠛⠉⠁⠀⠀⠀⠙⠿⢿⣿⣿⡿⠿⠋⢀⣿⣿⣧⡀⠀⠀⣠⡇⠀⠀⠀⠀⠀⠀⠀⠀
 * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀
 */

/* contact me: 39C3@dominikloidolt.at */
