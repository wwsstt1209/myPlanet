#pragma once
#include "cocos2d.h"
#include "GameInfo.h"
#include "Bullet.h"
USING_NS_CC;

class EnemyAirMachine :public Node
{
public:
	static EnemyAirMachine* create();
	bool init();
	void update(float dt);
	void shoot();
private:
	Sprite* m_sprite;
	bool m_upToDown;
	float m_time;
};