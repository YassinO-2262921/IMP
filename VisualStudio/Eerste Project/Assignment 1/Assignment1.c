#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define NUM_TESTS 5
#define NUM_WORDS 3
#define MAX_WORD_SIZE 64
#define ALPHABET_SIZE 26

void populateWordBuckets(char word[], int buckets[ALPHABET_SIZE]) {
	for (int i = 0; i < strlen(word); ++i) {
		int index = word[i] - 'a';
		buckets[index]++;
	}
}

void sortWords(char words[NUM_WORDS][MAX_WORD_SIZE]) {
	for (int i = 0; i < NUM_WORDS - 1; ++i) {
		for (int j = i + 1; j < NUM_WORDS; ++j) {
			if (strcmp(words[i], words[j]) > 0) {
				char temp[MAX_WORD_SIZE];
				strcpy(temp, words[i]);
				strcpy(words[i], words[j]);
				strcpy(words[j], temp);
			}
		}
	}
}

bool isWordPyramid(char words[NUM_WORDS][MAX_WORD_SIZE]) {
	sortWords(words);

	int buckets[ALPHABET_SIZE] = { 0 };
	for (int i = 0; i < NUM_WORDS - 1; ++i) {
		populateWordBuckets(words[i], buckets);

		int numExtraLetters = 0;
		for (int j = 0; j < strlen(words[i + 1]); ++j) {
			int index = words[i + 1][j] - 'a';
			if (buckets[index] == 0) {
				numExtraLetters++;
			}
			else {
				buckets[index]--;
			}

			if (numExtraLetters > 2) {
				return false;
			}
		}
	}

	return true;
}

void testIsWordPyramid() {
	bool testTruth[NUM_TESTS] = { true, false, true, true, true };
	char testCases[NUM_TESTS][NUM_WORDS][MAX_WORD_SIZE] = {
		{ "a", "act", "macht" },						// Word pyramid
		{ "misacht", "atomisch", "mosachtiger" },		// NO word pyramid
		{ "mosachtiger", "misacht", "atomische" },		// Word pyramid
		{ "en", "dekens", "eend" },						// Word pyramid
		{ "atomische", "triomfgeschal", "mosachtiger" } // Word pyramid
	};

	for (int i = 0; i < NUM_TESTS; ++i) {
		isWordPyramid(testCases[i]) == testTruth[i] ? printf("[PASS]") : printf("[FAIL]");
		printf(" isWordPyramid(CASE %d) = %d (%d)\n", i, isWordPyramid(testCases[i]), testTruth[i]);
	}
}


int main() {
	testIsWordPyramid();
	return EXIT_SUCCESS;
}