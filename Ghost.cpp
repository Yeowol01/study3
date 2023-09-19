#include "Ghost.h"

Ghost::Ghost()
{
	health = 45;
	maxHP = health;
}

int Ghost::GetHP()
{
	return health;
}

void Ghost::Skill()
{
	cout << "����" << endl;
	cout << "���" << endl;
	cout << "�� ����" << endl;
}

void Ghost::RecoveryHP()
{
	health = maxHP;
}

void Ghost::SetHP(int value)
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