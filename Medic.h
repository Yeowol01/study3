#pragma once
#include "Unit.h"
class Medic : public Unit
{
public:
	Medic();

	int GetHP() override;
	void Skill() override;
	void RecoveryHP() override;
	void SetHP(int value) override;
};

