#pragma once
#include <string>
#include <vector>
#include <random>
#include "Settings.h"
#include "Sentence.h"
#include "RandomNumberGenerator.h"
#include "Chronometer.h"

class MonkeyTyper
{
private:
	const std::string ALPHABET{"abcdefghijklmnopqrstuvwxyz "};
	std::vector<Sentence> Sentences{};
	RandomNumberGenerator RandomNumberGenerator{};
	Chronometer Chronometer{};
	std::string TypeRandomChar();
	void TypeWord();
	void ShowFinalConsiderations();
public:
	void Write(const int& MAXIMUM_WORDS_IN_SENTENCE=MAXIMUM_NUMBERS_OF_WORDS_IN_SENTENCE);

	
};

