#include "Medic.h"

int Medic::GetHP()
{
	return health;
}

void Medic::Skill()
{
    cout << "회복" << endl;
    cout << "광학 섬광탄" << endl;
}

void Medic::SetHP(int value)
{
	if (value >= 0 && value <= 100)
	{
		health = value;
	}
	else
	{
		cout << "잘못된 값이 들어왔습니다." << endl;
	}
}

void Medic::Recovery()
{
	cout << "체력을 회복하였습니다" << endl;
}
