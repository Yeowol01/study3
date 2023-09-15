#pragma once
#include "Mechanic.h"
#include "Vulture.h"
#include "Goliath.h"

class Tank : public Mechanic
{
public:
	Tank();

	void Move();

	virtual void Attack() override;
	virtual void Create() override;

	~Tank();
};

