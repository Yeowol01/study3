#pragma once
#include "Mechanic.h"
#include "Tank.h"
#include "Goliath.h"

class Vulture : public Mechanic
{
public : 
	Vulture();

#pragma region �Լ��� ���� ���̵�
	// ���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� �������Ͽ� ����ϴ� ����Դϴ�.

	void Move();

	virtual void Attack() override;
	virtual void Create() override;
	// �Լ��� �������̵�� ��� ���迡���� �̷������, ���� Ŭ�������� �Լ��� �������� �� ���� Ŭ������ �Լ� ���¿� ��ġ�ؾ� �մϴ�.
	~Vulture();
#pragma endregion

};

