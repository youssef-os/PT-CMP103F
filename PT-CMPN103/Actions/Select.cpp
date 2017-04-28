#include "Select.h"


Select::Select (ApplicationManager* pApp):
	Action(pApp)
{
}

bool Select::isSelected(CFigure* fig,Point p){
	if (dynamic_cast<CRectangle*>(fig)){
		Point p1,p2,p3;
		GfxInfo info;
		fig ->GetFigureParameters(p1,p2,p3,info);
		if (((p1.x > p.x ) && (p2.x < p.x)) || ((p1.x < p.x) && (p2.x > p.x))){
			if (((p1.y > p.y)&&(p2.y < p.y))||((p1.y < p.y)&&(p2.y > p.y))){
				return true;
			}
		}
		return false;
	}else if(dynamic_cast<CCircle*>(fig)){
		//return getCircleArea(fig->r)                                ;
	}
	
}

float Select::getCircleArea(float r){
	return 4*atan(1)*pow(r,2);
}

Select::~Select() {
	
}