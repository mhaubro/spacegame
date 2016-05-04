/*
 * World.h
 *
 *  Created on: Apr 18, 2016
 *      Author: mathi
 */

#ifndef SRC_WORLD_H_
#define SRC_WORLD_H_

#include "Chunk.h"

#define WORLD_SIZE 16

class World {
protected:

	Chunk **chunks;
	unsigned int index = 0;

	void decrementIndex();
	void incrementIndex();

public:
	World();
	virtual ~World();

	void update(float x);
	void render();

	float getHeight(float x);
	Vector2f& getNormal(float x, Vector2f &vec);
};

extern World world;

#endif /* SRC_WORLD_H_ */
