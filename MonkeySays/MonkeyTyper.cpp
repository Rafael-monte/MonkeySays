#include "MonkeyTyper.h"

void MonkeyTyper::Write(const int& MAXIMUM_WORDS_IN_SENTENCE) {
	std::cout << "O mamaco diz: " << std::endl;
	for (int i = 0; i < MAXIMUM_NUMBER_OF_SENTENCES; i++) {
		for (int j = 0; j < MAXIMUM_WORDS_IN_SENTENCE; j++) {
			this->TypeWord();
		}
		this->Sentences.at(i).GetCompleteSentence();
	}
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
	sentence.AddWord(word);
	this->Sentences.push_back(sentence);
}

std::string MonkeyTyper::TypeRandomChar() {
	auto randomLetterPosition{ this->GetRandomNumberInRange(this->ALPHABET.size() - 1) };
	std::string randomCharInAlphabet{ this->ALPHABET.at(randomLetterPosition) }; //Pegando uma letra aleatória do alfabeto

	return randomCharInAlphabet;
}


int MonkeyTyper::GetRandomNumberInRange(const int& MAX_RANGE, const int& MIN_RANGE) {
	return MIN_RANGE + (std::rand() % (MAX_RANGE - MIN_RANGE + 1));
}


