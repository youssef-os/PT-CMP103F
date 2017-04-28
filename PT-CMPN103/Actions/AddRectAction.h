#ifndef ADD_RECT_ACTION_H
#define ADD_RECT_ACTION_H

#include "..\Actions\Action.h"

//Add Rectangle Action class
class AddRectAction: public Action
{
private:
	Point P1, P2; //Rectangle Corners
	GfxInfo RectGfxInfo;
public:
	AddRectAction(ApplicationManager *pApp);

	//Reads rectangle parameters
	virtual void ReadActionParameters();
	virtual void ReadImpilictParameters(Point P1o, Point P2o, Point P3o, GfxInfo Gfx);
	//Add rectangle to the ApplicationManager
	virtual void Execute() ;
	
};

#endif