#include "MonkeyTyper.h"

void MonkeyTyper::Write(const int& MAXIMUM_WORDS_IN_SENTENCE) {

	std::cout << "O mamaco diz: " << std::endl;
	this->Chronometer.Start();
	for (int i = 0; i < MAXIMUM_NUMBER_OF_SENTENCES; i++) {
		for (int j = 0; j < MAXIMUM_WORDS_IN_SENTENCE; j++) {
			this->TypeWord();
		}
		this->Sentences.at(i).GetCompleteSentence();
	}
	this->Chronometer.Stop();
	this->ShowFinalConsiderations();
}


void MonkeyTyper::TypeWord() {
	const std::string WHITESPACE{ " " };
	int numberOfCharacters{};
	std::string character{};
	std::string word{};
	while (numberOfCharacters < MINIMUM_CHARACTERS_IN_WORD || (character = this->TypeRandomChar()) != WHITESPACE) {
		
		if (numberOfCharacters < MINIMUM_CHARACTERS_IN_WORD && character == WHITESPACE) {
			continue;
		}

		if (numberOfCharacters == MAXIMUM_CHARACTERS_IN_WORD) {
			break;
		}
		word.append(character);
		numberOfCharacters++;
	}
	Sentence sentence{};
	word.append(WHITESPACE);
	sentence.AddWord(word);
	this->Sentences.push_back(sentence);
}

std::string MonkeyTyper::TypeRandomChar() {
	auto randomLetterPosition{ this->RandomNumberGenerator.GenerateRandomNumber(this->ALPHABET.size() - 1) };
	std::string randomCharInAlphabet{ this->ALPHABET.at(randomLetterPosition) }; //Pegando uma letra aleatória do alfabeto
	return randomCharInAlphabet;
}


void MonkeyTyper::ShowFinalConsiderations() {
	if (SHOW_EXECUTION_TIME_AT_THE_END_OF_PROGRAM) {
		this->Chronometer.ShowElapsedTime();
	}

	if (SHOW_USED_GENERATION_METHOD) {
		this->RandomNumberGenerator.ShowMethodUsedInGeneration();
	}
}


