#include "Firebat.h"

int Firebat::GetHP()
{
	return health;
}

void Firebat::Skill()
{
    cout << "������" << endl;
}

void Firebat::SetHP(int value)
{
	if (value >= 0 && value <= 100)
	{
		health = value;
	}
	else
	{
		cout << "�߸��� ���� ���Խ��ϴ�." << endl;
	}
}

void Firebat::Recovery()
{
	cout << "ü���� ȸ���Ͽ����ϴ�" << endl;
}
