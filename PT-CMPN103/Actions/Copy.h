#pragma once
#include "Action.h"
#include "../Figures/CFigure.h"
#include "../Figures/CRectangle.h"
#include "../ApplicationManager.h"

class CRectangle;
class CFigure;
class Action;

class Copy :
	public Action
{
	Point P1, P2;
	//queue<Action**> CopiedFigAct;
public:
	Copy(ApplicationManager *pApp);
	virtual void ReadActionParameters();
	virtual void Execute();
	~Copy();
};

