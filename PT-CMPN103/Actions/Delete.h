#pragma once
#include "Action.h"
class Delete :
	public Action
{
public:
	Delete(ApplicationManager*App);
	~Delete();
};

