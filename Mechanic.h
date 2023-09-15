#pragma once
#include <iostream>
using namespace std;

class Mechanic
{
protected : 
	int helath;
	int attack;

public : 
	Mechanic();

	void Move();

	virtual void Attack();

	virtual void Create();

	virtual ~Mechanic();
};

