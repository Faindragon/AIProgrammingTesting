#pragma once
#include <vector>

#include "Entity.h"
#include "Map.h"

//SHOULD THE AI HOLD IN THE ENTITY, OR THE OTHER WAY AROUND?

enum AllowedActions {
	ACTION_FIRE,
	ACTION_RELOAD,
	ACTION_HEAL,
	ACTION_MOVE
};

class AIBase
{
public:
	AIBase(uint16_t life, float positionX, float positionY);
	virtual ~AIBase();
	virtual AllowedActions DecideAction(std::vector<AIBase*> allAIs, unsigned int myID, Map2D *map) = 0;
	AllowedActions GetLastPerformedAction();
	bool Fire();
	void Reload();
	void Heal(uint16_t damageToHeal);
	float GetLife();
	float GetDamage(float distanceToTarget);
	uint16_t GetTarget();
	float GetAccuracy(float distanceToTarget);
	void TakeDamage(uint16_t damage);
	float GetPositionX();
	float GetPositionY();
	void  SetPositionX(float position);
	void  SetPositionY(float position);
protected:
	Entity* myEntity;
	AllowedActions lastAction;
	uint16_t targetID;
private:
};