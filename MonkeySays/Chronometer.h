#pragma once
#include <iostream>
#include <chrono>
class Chronometer
{
private:
	std::chrono::steady_clock::time_point ClockInicial{};
	std::chrono::steady_clock::time_point ClockFinal{};

public:
	void Stop();
	void Start();
	void ShowElapsedTime();
};

