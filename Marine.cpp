#include "Marine.h"

int Marine::GetHP()
{
	return health;
}

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHP(int value)
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

void Marine::Recovery()
{
	
}
