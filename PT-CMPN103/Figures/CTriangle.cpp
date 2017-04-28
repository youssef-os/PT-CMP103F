 #include "CTriangle.h"


CTriangle::CTriangle(Point P1, Point P2, Point P3, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	Corner1 = P1;
	Corner2 = P2;
	Corner3 = P3;
}


	
void CTriangle::GetFigureParameters(Point&P1, Point&P2, Point&P3, GfxInfo&Gfx)
{
	P3.x = Corner3.x; 
	P3.y = Corner3.y;
	P1.x = Corner1.x;
	P1.y = Corner1.y;
	P2.x = Corner2.x;
	P2.y = Corner2.y;
	Gfx = FigGfxInfo;
}
void CTriangle::Draw(Output* pOut) const
{
	//Call Output::DrawRect to draw a triangle on the screen	
	pOut->DrawTRI(Corner1, Corner2, Corner3, FigGfxInfo, Selected);
}
