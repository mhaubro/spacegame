//Author: MH

#ifndef SRC_GAMETIMER_H_
#define SRC_GAMETIMER_H_

#include "mbed.h"

class GameTimer {

protected:
	float deltatime;
	double runtime;
	Timer t;

public:
	GameTimer();
	virtual ~GameTimer();

	void update();

	float getDeltaTime();
	double getRunTime();
};

extern GameTimer timer;

#endif /* SRC_GAMETIMER_H_ */
