#pragma once
#include "math/Vector.hpp"

class IEffects
{
public:
	VFUNC(void, beam, 1,
		(const Vector& start, const Vector& end, int modelIndex,
			int haloIndex, unsigned char frameStart, unsigned char frameRate,
			float life, unsigned char width, unsigned char endWidth, unsigned char fadeLength,
			unsigned char noise, unsigned char red, unsigned char green,
			unsigned char blue, unsigned char brightness, unsigned char speed),
		(this, std::cref(start), std::cref(end), modelIndex, haloIndex, frameStart, frameRate, life, width, endWidth, fadeLength, noise, red, green, blue, brightness, speed)
	);

	//-----------------------------------------------------------------------------
	// Purpose: Emits smoke sprites.
	// Input  : origin - Where to emit the sprites.
	//			scale - Sprite scale * 10.
	//			framerate - Framerate at which to animate the smoke sprites.
	//-----------------------------------------------------------------------------
	VFUNC(void, smoke, 2, (const Vector& origin, int modelIndex, float scale, float framerate), (this, std::cref(origin), modelIndex, scale, framerate));
	VFUNC(void, sparks, 3, (const Vector& position, int magnitude = 1, int trialLength = 1, const Vector* pvecDir = NULL), (this, std::cref(position), magnitude, trialLength, pvecDir));
	VFUNC(void, dust, 4, (const Vector& pos, const Vector& dir, float size, float speed), (this, std::cref(pos), std::cref(dir), size, size, speed));
	VFUNC(void, muzzleFlash, 5, (const Vector& vecOrigin, const Vector& vecAngles, float scale, int type), (this, std::cref(vecOrigin), std::cref(vecAngles), scale, type));
	// like ricochet, but no sound
	VFUNC(void, metalSparks, 6, (const Vector& position, const Vector& direction), (this, std::cref(position), std::cref(direction)));
	VFUNC(void, energySplash, 7, (const Vector& position, const Vector& direction, bool explosive = false), (this, std::cref(position), std::cref(direction), explosive));
	VFUNC(void, ricochet, 8, (const Vector& position, const Vector& direction), (this, std::cref(position), std::cref(direction)));

	// if you want to mess with effects abit then add dispatch, I will probably never need it
};