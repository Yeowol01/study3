#pragma once
#include "Unit.h"
class Medic : public Unit
{
public:
	int GetHP() override;
	void Skill() override;
	void SetHP(int value) override;
	void Recovery() override;
};

