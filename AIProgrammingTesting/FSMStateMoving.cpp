﻿#include "FSMStateMoving.h"
#include "FSMStateTransistionBase.h"

FSMStateMoving::FSMStateMoving()
{
	/*Kept empty on purpose*/
}

FSMStateMoving::~FSMStateMoving()
{
}

void FSMStateMoving::onEnter(AIBase* myAI)
{
	/*Kept empty on purpose*/
}

AllowedActions FSMStateMoving::onUpdate(AIBase* myAI, std::vector<AIBase*> otherAIs, Map2D* map)
{
	return ACTION_MOVE;
}

void FSMStateMoving::onExit(AIBase* myAI)
{
	/*Kept empty on purpose*/
}