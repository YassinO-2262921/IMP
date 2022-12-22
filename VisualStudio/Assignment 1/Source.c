/**
 *Taak 1
 *Imperatief Programmeren
 *Universiteit Hasselt - Academiejaar 2022-2023
 *
 *Naam: Yassin Omrani
 *Studentennummer: 2262921
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define NUM_TESTS 9
#define NUM_WORDS 3
#define MAX_WORD_SIZE 64
#define ALPHABET_SIZE 26

 /*This function populates an array of 26 integers (one for each letter of the alphabet)
 with the number of times each letter appears in the given word. For example, if the
 word is "apple" and the buckets array is initially all zeros, then after this function
 is called, buckets will be[1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]*/

void populateWordBuckets(char word[], int buckets[ALPHABET_SIZE])
{
	for (int i = 0; i < strlen(word); ++i)
	{
		int index = word[i] - 'a';
		buckets[index]++;
	}
}

// This function sorts the given array of words in alphabetical order.

void sortWords(char words[NUM_WORDS][MAX_WORD_SIZE])
{
	for (int i = 0; i < NUM_WORDS - 1; ++i)
	{
		for (int j = i + 1; j < NUM_WORDS; ++j)
		{
			if (strcmp(words[i], words[j]) > 0)
			{
				char temp[MAX_WORD_SIZE];
				strcpy(temp, words[i]);
				strcpy(words[i], words[j]);
				strcpy(words[j], temp);
			}
		}
	}
}

/*This function determines if the given array of words forms a "word pyramid". A word pyramid
is an array of words where each word is composed of the letters of the previous word plus
one additional letter. For example, ["a", "act", "macht"] is a word pyramid because "a"
contains only one letter, "act" contains the letters of "a" plus the letter "c", and
"macht" contains the letters of "act" plus the letter "h".*/

bool isWordPyramid(char words[NUM_WORDS][MAX_WORD_SIZE])
{
	sortWords(words);

	int buckets[ALPHABET_SIZE] = { 0 };

	for (int i = 0; i < NUM_WORDS - 1; ++i)
	{
		populateWordBuckets(words[i], buckets);

		int numExtraLetters = 0;
		for (int j = 0; j < strlen(words[i + 1]); ++j)
		{
			int index = words[i + 1][j] - 'a';
			if (buckets[index] == 0)
			{
				numExtraLetters++;
			}
			else
			{
				buckets[index]--;
			}

			if (numExtraLetters > 2)
			{
				return false;
			}
		}
	}

	return true;
}

void testIsWordPyramid()
{
	bool testTruth[NUM_TESTS] = { true, false, true, true, true, true, true, true, false
	};

	char testCases[NUM_TESTS][NUM_WORDS][MAX_WORD_SIZE] = {
		{ "a", "act", "macht" },	// Word pyramid
		{ "misacht", "atomisch", "mosachtiger" },	// NO word pyramid
		{ "mosachtiger", "misacht", "atomische" },	// Word pyramid
		{ "en", "dekens", "eend" },	// Word pyramid
		{ "atomische", "triomfgeschal", "mosachtiger" },	// Word pyramid
		{ "", "aa", "aaaa" },	// Word pyramid
		{ "mosas", "mosasas", "mosasasas" },	// Word pyramid
		{ "", "  ", "    " },	// Word pyramid
		{ "a", "act", "actatcaga" }	// NO word pyramid

	};

	for (int i = 0; i < NUM_TESTS; ++i)
	{
		isWordPyramid(testCases[i]) == testTruth[i] ? printf("[PASS]") : printf("[FAIL]");
		printf(" isWordPyramid(CASE %d) = %d (%d)\n", i, isWordPyramid(testCases[i]), testTruth[i]);
	}
}

int main()
{
	testIsWordPyramid();
	return EXIT_SUCCESS;
}