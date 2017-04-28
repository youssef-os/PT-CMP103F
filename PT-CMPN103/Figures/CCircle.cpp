#include "CCircle.h"

CCircle::CCircle(Point P1, Point P2, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	Center = P1;
	Distance = P2;
}
void CCircle::GetFigureParameters(Point&P1, Point&P2, Point&P3, GfxInfo&Gfx)
{
	P3.x = 0; 
	P3.y = 0;
	P1.x = Center.x;
	P1.y = Center.y;
	P2.x = Distance.x;
	P2.y = Distance.y;
	Gfx = FigGfxInfo;
}
void CCircle::Draw(Output* pOut) const
{
	//Call Output::DrawCircle to draw a Circle on the screen	
	pOut->DrawCircle(Center, Distance, FigGfxInfo, Selected);
}
// void  CCircle::Save(ofstream &OutFile)
	 
 //wait
 