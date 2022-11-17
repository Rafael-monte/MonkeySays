#pragma once
#include <iostream>
#include <random>
#include <vector>
#include <string>
#include <stdexcept>
#include "GenerationMethod.h"
class RandomNumberGenerator
{
private:
	GenerationMethod MethodBeingUsed{ GenerationMethod::UNIFORM };
	bool SeedSet{ false };
	int GetRandomNumberUsingUniformDistribution(const int& MAX_RANGE, const int& MIN_RANGE = 0);
	int GetRandomNumberUsingDefaultMethod(const int& MAX_RANGE, const int& MIN_RANGE = 0);
public:
	int GenerateRandomNumber(const int& MAX_RANGE, const int& MIN_RANGE = 0);
	void ShowMethodUsedInGeneration();
};

