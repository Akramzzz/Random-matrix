#pragma once

#include <iostream>


namespace gnr {

	int RandomNumber(int From, int To)
	{
		int randNum = rand() % (To - From + 1) + From; return randNum;



	}


}