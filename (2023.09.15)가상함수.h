#pragma once
#include <iostream>
#include "Vulture.h"
#include "Tank.h"
#include "Goliath.h"
using namespace std;

#pragma region ������
// ���� ���� ���� �ٸ� ��ü�� ������ ����� ���� �ٸ� ������� ó���� �� �ִ� �۾��Դϴ�.

// �������� ������ ������ �Լ��� �Ӽ��� �����Ǵ� ���� ���ε��� ���� �ʰ�, ���� �ð��� �Լ��� �Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� �մϴ�.	
#pragma endregion

int main()
{
#pragma region �������̵�
	/*
	Mechanic mechanic;
	mechanic.Move();

	Vulture vulture;
	vulture.Move();
	*/
#pragma endregion

#pragma region ���� �Լ�
	// ����ϴ� Ŭ���� ������ ���� ������ �Լ��� ������ �� �� �ִ� �Լ��Դϴ�.

	//Mechanic* mechanic1 = new Vulture;

	// cout << "Mechanic�� ũ�� : " << sizeof(Mechanic) << endl;
	// cout << "Vulture�� ũ�� : " << sizeof(Vulture) << endl;

	// ���� �Լ��� �� �� �̻��� ���� �Լ��� �����ϴ� Ŭ������ ���� ��, ��ü �ּҿ� ���� �Լ� ���̺��� �߰��մϴ�.

	//mechanic1->Move();
	//mechanic1->Attack();

	// ���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������ ���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� ������, ���� �����ڴ� ������ �����ؾ� �մϴ�.
#pragma endregion

#pragma region ��Ÿũ����Ʈ ���� ����
	/*
	Mechanic* mechanic1 = new Vulture;
	mechanic1->Move();
	mechanic1->Create();
	mechanic1->Attack();

	Mechanic* mechanic2 = new Tank;
	mechanic2->Move();
	mechanic2->Create();
	mechanic2->Attack();

	Mechanic* mechanic3 = new Goliath;
	mechanic3->Move();
	mechanic3->Create();
	mechanic3->Attack();
	*/

	// ����� ���
	/*
	int selectNumber = 0;

	int createCount = 0;

	Mechanic* mechanic = nullptr;

	while (createCount < 5)
	{
		cin >> selectNumber;

		switch (selectNumber)
		{
		case 1: mechanic = new Vulture;
			break;
		case 2 : mechanic = new Tank;
			break;
		case 3 : mechanic = new Goliath;
			break;
		default:
			continue;
		}

		createCount++;
		mechanic->Attack();
	}
	*/

	// ���� �Լ��� ��� ���� �Լ� ���̺��� ����Ͽ� ȣ��Ǵ� �Լ��� ���� �ð��� �����ϸ�, �������� ����� �Լ��� ���� �Լ��� ������ �� �����ϴ�.
#pragma endregion

#pragma region ���� �Ҹ���
	// ��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� ������� ��� ȣ��Ǵ� �Ҹ����Դϴ�.

	Mechanic* unit1 = new Vulture;
	Mechanic* unit2 = new Tank;
	Mechanic* unit3 = new Goliath;

	delete unit1;
	delete unit2;
	delete unit3;

	// ���� �Ҹ��ڴ� ��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ� ���� ����ǰ� ���� Ŭ������ �Ҹ��ڰ� ����Ǿ�� �ϱ� ������, ���� �ð��� �޸𸮿� �Ҵ�� ��ü�� Ȯ���ϰ� ���ʴ�� �Ҹ���Ѿ� �մϴ�.
#pragma endregion




	return 0;
}

