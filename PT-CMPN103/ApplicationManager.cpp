#include "..\PT-CMPN103\\ApplicationManager.h"
#include "..\PT-CMPN103\Actions\AddRectAction.h"
#include "../PT-CMPN103/Actions/AddRectAction.h"
#include "../PT-CMPN103/Actions/AddTrianAction.h"
#include "../PT-CMPN103/Actions/AddCircleAction.h"
#include "..\PT-CMPN103\Actions\Copy.h"



//Constructor
ApplicationManager::ApplicationManager()
{
	//Create Input and output
	pOut = new Output;
	pIn = pOut->CreateInput(pOut);
	
	FigCount = 0;
		
	//Create an array of figure pointers and set them to NULL		
	for(int i=0; i<MaxFigCount; i++)
		FigList[i] = NULL;	
}

//==================================================================================//
//								Actions Related Functions							//
//==================================================================================//
ActionType ApplicationManager::GetUserAction() const
{
	//Ask the input to get the action from the user.
	return pIn->GetUserAction();		
}
////////////////////////////////////////////////////////////////////////////////////
//Creates an action and executes it
void ApplicationManager::ExecuteAction(ActionType ActType) 
{
	Action* pAct = NULL;
	
	//According to Action Type, create the corresponding action object
	switch (ActType)
	{
			case DRAW_LINE:
				///create AddLineAction here
				break;
			case DRAW_RECT:
				pAct = new AddRectAction(this);
				break;
			case DRAW_TRI:
				pAct = new AddTrianAction(this);
				break;
			case DRAW_CIRC:
				pAct = new AddCircleAction(this);
				break;
			case CHNG_DRAW_CLR:
				break;
			case CHNG_FILL_CLR:
				break;
			case CHNG_BK_CLR:
				break;
			case ZOOM_IN:
				break;
			case ZOOM_OUT:
				break;
			case SAVE:
				break;
			case LOAD:
				break;
			case DEL:
				break;
			case MOVE:
				break;
			case RESIZE:
				break;
			case ROTATE:
				break;
			case SEND_BACK:
				break;
			case BRNG_FRNT:
				break;
			case COPY:
				pAct = new Copy(this);
				break;
			case CUT:
				break;
			case PASTE:
				break;


				//////////////////////////////////////////////////////////////////////////////////


			case DRAWING_AREA:
				break;
			case STATUS:
				break;
			case EMPTY:
				break;


				/*PLAY MODE*/

			case PICK_HIDE_MODE:
				break;
			case SCRAMBLE_FIND_MODE:
				break;
			case TO_DRAW:
				break;
			case BACK:
				break;
			case EXIT:
				break;


	}
	
	//Execute the created action
	if(pAct != NULL)
	{
		pAct->Execute();//Execute
		delete pAct;	//Action is not needed any more ==> delete it
		pAct = NULL;
	}
}
//==================================================================================//
//						Figures Management Functions								//
//==================================================================================//

//Add a figure to the list of figures
void ApplicationManager::AddFigure(CFigure* pFig)
{
	if(FigCount < MaxFigCount )
		FigList[FigCount++] = pFig;	
	   // pFig->setID(FigCount);
}
////////////////////////////////////////////////////////////////////////////////////
CFigure *ApplicationManager::GetFigure(int x, int y) const
{
	//If a figure is found return a pointer to it.
	//if this point (x,y) does not belong to any figure return NULL


	///Add your code here to search for a figure given a point x,y	

	return NULL;
}

void ApplicationManager::GetFigCount(int&size)
{
	size = FigCount;
}


//==================================================================================//
//							Interface Management Functions							//
//==================================================================================//

//Draw all figures on the user interface
void ApplicationManager::UpdateInterface() const
{	
	for(int i=0; i<FigCount; i++)
		FigList[i]->Draw(pOut);		//Call Draw function (virtual member fn)
}
////////////////////////////////////////////////////////////////////////////////////
//Return a pointer to the input
Input *ApplicationManager::GetInput() const
{	return pIn; }
//Return a pointer to the output
Output *ApplicationManager::GetOutput() const
{	return pOut; }
////////////////////////////////////////////////////////////////////////////////////
//Destructor
ApplicationManager::~ApplicationManager()
{
	for(int i=0; i<FigCount; i++)
		delete FigList[i];
	delete pIn;
	delete pOut;
	
}
