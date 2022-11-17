#include "Chronometer.h"

void Chronometer::Start() {
	this->ClockInicial = std::chrono::steady_clock::now();
}

void Chronometer::Stop() {
	this->ClockFinal = std::chrono::steady_clock::now();
}

void Chronometer::ShowElapsedTime() {
	auto duration{ std::chrono::duration_cast<std::chrono::milliseconds>(this->ClockFinal - this->ClockInicial) };
	std::cout << "\n" << "Execution time: " << duration.count() << "ms" << "\n";
}