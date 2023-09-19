#include "Marine.h"

Marine::Marine()
{
	health = 40;
	maxHP = health;
}

int Marine::GetHP()
{
	return health;
}

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::RecoveryHP()
{
	health = maxHP;
}

void Marine::SetHP(int value)
{
	if (value >= 0 && value <= maxHP)
	{
		health = value;
	}
	else
	{
		cout << "�߸��� ���� ���Խ��ϴ�." << endl;
	}
}
