#pragma once
#include "Action.h"
#include "../Figures/CFigure.h"
#include "../Figures/CRectangle.h"
#include "../ApplicationManager.h"


class CRectangle;
class CFigure;

class Cut :
	public Action
{
	int MaxSelSize;
	Point P1, P2;
	int SelFigCount;
	CFigure**SelFigList;
public:
	Cut(ApplicationManager *pApp);
	virtual void ReadActionParameters();
	virtual void Execute();
	~Cut();
};

