#include "Copy.h"



Copy::Copy(ApplicationManager *pApp): Action(pApp)
{
}


void Copy::ReadActionParameters()
{
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("Copying Selected Figures: Click The Reference Point");

	pIn->GetPointClicked(P1.x, P1.y);

	pOut->PrintMessage("Copying Selected Figures: Click The Target Point");

	pIn->GetPointClicked(P2.x, P2.y);

}

//
void Copy::Execute() {}
//{
//	//
//	Point P1o, P2o, P3o;
//	//CopiedFigAct = new Action*[size(pManger->SelFigList];
//	for (int i = 0; i < /*size(CopiedFigAct)*/; i++)
//	{
//			GfxInfo Gfx;
//
//			//pManager->SelFigList[i]->GetFigureParameters(P1o, P2o, P3o, Gfx);
//			Point Pa;
//			Pa.x = P1o.x + (P1.x-P2.x); Pa.y = P1o.y + (P1.y-P2.y);
//			Point Pb;
//			Pb.x = P2o.x + P2.x; Pb.y = P2o.y + P2o.y;
//			//CopiedFigAct[i]->ReadImpilictParameters(Pa, Pb, P3o, Gfx);
//	}
//}

Copy::~Copy()
{
}
