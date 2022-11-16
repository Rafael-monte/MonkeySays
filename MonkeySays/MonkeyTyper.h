#pragma once
#include <string>
#include <vector>
#include <random>
#include "Settings.h"
#include "Sentence.h"
class MonkeyTyper
{
private:
	const std::string ALPHABET{"abcdefghijklmnopqrstuvwxyz "};
	std::vector<Sentence> Sentences{};
	std::string TypeRandomChar();
	void TypeWord();
	int GetRandomNumberInRange(const int& MAX_RANGE, const int& MIN_RANGE = 0);

public:
	void Write(const int& MAXIMUM_WORDS_IN_SENTENCE=MAXIMUM_NUMBERS_OF_WORDS_IN_SENTENCE);

	
};

