#include "Medic.h"

int Medic::GetHP()
{
	return health;
}

void Medic::Skill()
{
    cout << "ȸ��" << endl;
    cout << "���� ����ź" << endl;
}

void Medic::SetHP(int value)
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

void Medic::Recovery()
{
	cout << "ü���� ȸ���Ͽ����ϴ�" << endl;
}
