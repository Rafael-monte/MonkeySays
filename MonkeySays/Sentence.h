#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <chrono>
#include <thread>
#include "Settings.h"
class Sentence
{
private:
	std::vector<std::string> words{};
public:
	void AddWord(const std::string& word);
	std::string GetCompleteSentence();
};

