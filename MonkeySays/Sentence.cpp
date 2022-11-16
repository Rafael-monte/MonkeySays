#include "Sentence.h"

void Sentence::AddWord(const std::string& word) {
	const std::string WHITESPACE{ " " };
	std::cout << word << WHITESPACE;
	this->words.push_back(word);
}

std::string Sentence::GetCompleteSentence() {
	const std::string WHITESPACE{ " " };
	std::string sentence{};
	for (const auto& word : this->words) {
		sentence.append(word);
		std::cout << word;
		std::this_thread::sleep_for(std::chrono::milliseconds(TIME_BETWEEN_WORDS_IN_MILLISECONDS));
	}
	return sentence;
}
