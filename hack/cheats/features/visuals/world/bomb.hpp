#pragma once

#include <cheats/classes/renderableToPresent.hpp>
#include <cheats/classes/frameStage.hpp>

class Bomb_t;
class IConVar;
class IGameEvent;
class BombOverlayEntGrabber;

class BombOverlay : protected RenderablePresentType
{
public:
	constexpr BombOverlay() :
		RenderablePresentType{}
	{}

	void setBombEnt(Bomb_t* ent) { m_bombEnt = ent; }
protected:
	virtual void draw() override;
	virtual void init() override;
	virtual void roundRestart() override;
private:
	void handleWhoPlanted(IGameEvent* event);

	Bomb_t* m_bombEnt;
	IConVar* m_timer;
	std::string m_whoPlanted;

	friend BombOverlayEntGrabber;
};

GLOBAL_FEATURE(BombOverlay);

class BombOverlayEntGrabber : protected FrameStageType
{
public:
	constexpr BombOverlayEntGrabber()
		: FrameStageType{}
	{}

protected:
	virtual void run(int frame) override;
};

GLOBAL_FEATURE(BombOverlayEntGrabber);
