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
    cout << "ȸ��" << endl;
    cout << "���� ����ź" << endl;
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
		cout << "�߸��� ���� ���Խ��ϴ�." << endl;
	}
}