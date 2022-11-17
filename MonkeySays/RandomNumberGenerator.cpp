#include "RandomNumberGenerator.h"

int RandomNumberGenerator::GenerateRandomNumber(const int& MAX_RANGE, const int& MIN_RANGE) {
	if (!this->SeedSet) {
		srand(time(nullptr));
		this->SeedSet = true;
	}
	try {
		return this->GetRandomNumberUsingUniformDistribution(MAX_RANGE, MIN_RANGE);
	}
	catch (const std::exception& e) {
		return this->GetRandomNumberUsingDefaultMethod(MAX_RANGE, MIN_RANGE);
	}
}

int RandomNumberGenerator::GetRandomNumberUsingUniformDistribution(const int& MAX_RANGE, const int& MIN_RANGE) {
	std::random_device rd;
	std::uniform_int_distribution<int> dist(MIN_RANGE, MAX_RANGE);
	return dist(rd);
}

int RandomNumberGenerator::GetRandomNumberUsingDefaultMethod(const int& MAX_RANGE, const int& MIN_RANGE) {
	this->MethodBeingUsed = GenerationMethod::DEFAULT;
	return MIN_RANGE + (std::rand() % (MAX_RANGE - MIN_RANGE + 1));
}

void RandomNumberGenerator::ShowMethodUsedInGeneration() {
	std::vector<std::string> METHODS{ stringify(UNIFORM), stringify(DEFAULT)};
	std::string MethodUsed{ METHODS.front() };
	if (this->MethodBeingUsed != GenerationMethod::UNIFORM) {
		MethodUsed = METHODS.back();
	}
	std::cout << "Used '" << MethodUsed << "' distribution method. \n";
}