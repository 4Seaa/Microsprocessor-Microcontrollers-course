#include "software_timer.h"

#define TICK 10

int timer1_flag = 0;
int timer1_counter = 0;

void setTimer1(int dur) {
	timer1_counter = dur / TICK;
	timer1_flag = 0;
}

void timerRun() {
	if (timer1_counter > 0) {
		timer1_counter--;
		if (timer1_counter == 0)
			timer1_flag = 1;
	}
}
