#include "Medic.h"

Medic::Medic()
{
	health = 60;
	maxHP = health;
}

int Medic::GetHP()
{
	return health;
}

void Medic::Skill()
{
    cout << "È¸º¹" << endl;
    cout << "±¤ÇÐ ¼¶±¤Åº" << endl;
}

void Medic::RecoveryHP()
{
	health = maxHP;
}

void Medic::SetHP(int value)
{
	if (value >= 0 && value <= maxHP)
	{
		health = value;
	}
	else
	{
		cout << "Àß¸øµÈ °ªÀÌ µé¾î¿Ô½À´Ï´Ù." << endl;
	}
}