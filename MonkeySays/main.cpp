#include<iostream>
#include "MonkeyTyper.h"
#include "Chronometer.h"
#include "Settings.h"
int main() {
	Chronometer cronometro{};
	cronometro.Start();
	MonkeyTyper mamaco{};
	mamaco.Write();
	cronometro.Stop();
	if (SHOW_EXECUTION_TIME_AT_THE_END_OF_PROGRAM) {
		cronometro.ShowElapsedTime();
	}
	return 0;
}