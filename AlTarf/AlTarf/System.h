#pragma once
#include <SDL/SDL.h>

class System final
{
public:
	static System & GetInstance()
	{
		static System instance;
		return instance;
	}

	~System();

private:
	System();

};
