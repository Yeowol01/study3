#pragma once
#include <iostream>
using namespace std;

class Mechanic
{
protected : 
	int helath;
	int attack;

public : 
	void Move();

	virtual void Attack();
};

