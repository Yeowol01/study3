#include "Firebat.h"

int Firebat::GetHP()
{
	return health;
}

void Firebat::Skill()
{
    cout << "스팀팩" << endl;
}

void Firebat::SetHP(int value)
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

void Firebat::Recovery()
{
	cout << "체력을 회복하였습니다" << endl;
}
