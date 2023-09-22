#pragma once
#include "Component.h"

using namespace std;

class Keyboard : virtual public Component
{
public : 
	Keyboard();

	void Input();
	void OnButton();
};

