﻿#pragma once
#include "FSMStateBase.h"

class FSMStateReloading : public FSMStateBase
{
public:
	FSMStateReloading();
	~FSMStateReloading();

	void onEnter(AIBase* myAI) override;
	AllowedActions onUpdate(AIBase* myAI, std::vector<AIBase*> otherAIs, Map2D* map) override;
	void onExit(AIBase* myAI) override;
};
