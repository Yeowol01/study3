#pragma once
#include "Mechanic.h"
#include "Vulture.h"
#include "Tank.h"

class Goliath : public Mechanic
{
public:
	Goliath();

	void Move();

	virtual void Attack() override;
	virtual void Create() override;

	~Goliath();
};

