#pragma once
#include "Action.h"
#include "../Figures/CFigure.h"
#include "../Figures/CRectangle.h"
#include "../Figures/CCircle.h"
#include "../Figures/CTriangle.h"
#include "../ApplicationManager.h"

class Select :
	public Action {

public:
	Select(ApplicationManager*);
	bool isSelected(CFigure*,Point);
	float getCircleArea(float);
	~Select();
};