#pragma once

#include "mbed.h"
#include "GD2.h"

#define UNIT (float) 16
#define UNIT16 (float) 16 * UNIT

#define SCREEN_WIDTH 480
#define SCREEN_HEIGHT 272

#define SCREEN_UNIT_BORDER_X (float) SCREEN_WIDTH / (2 * UNIT)
#define SCREEN_UNIT_BORDER_Y (float) SCREEN_HEIGHT / (2 * UNIT)

#define BLACK 0x000000
#define WHITE 0xffffff
#define RED 0xff0000
#define GREEN 0x00ff00
#define BLUE 0x0000ff
#define GREY 0x444444
#define COLOR_ENERGY 0xffff22
#define COLOR_HEALTH 0xff0000
#define COLOR_SHIELD 0x22aaff

#define CAM_X_OFFSET16 SCREEN_WIDTH * 8
#define CAM_Y_OFFSET16 SCREEN_HEIGHT * 8

class Cam
{
protected:
	float _x, _y;

public:
	Cam();
	void translate(float dx, float dy);
	void moveTo(float x, float y);
	short getX();
	short getY();
	void Vertex2f(float x, float y);

};

extern Cam cam;