#pragma once
#include <iostream>
using namespace std;

int data = 25;

namespace A
{
	void Attack()
	{
		cout << "A ������ Attack( )" << endl;
	}
}

namespace B
{
	void Attack()
	{
		cout << "B ������ Attack( )" << endl;
	}
}

void Damage(int hp = 100)
{
	hp -= 25;
	cout << "hp�� �� : " << hp << endl;
}

// �⺻ �Ű������� �����ʿ��� ���� �����ؾ� �մϴ�.
void Move(int x, int y, int z = 10)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
	cout << "z�� �� : " << z << endl;
}

int max(int a, int b)
{
	int n;

	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}

int min(int a, int b)
{
	return a * b / max(a, b);
}

int main()
{
#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� �������Դϴ�.

	//int data = 100;

	//cout << "data�� �� : " << data << endl;
	//cout << "data�� �� : " << ::data << endl;

	// ���� ���� �����ڴ� ���� ������ ���� ���� ���� ������ ����Ǿ��� �� ���� ����� ������ ����� ������ �̸��� ����ϴ� ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʽ��ϴ�.

#pragma endregion

#pragma region �̸� ����
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.

	/*A::Attack();
	B::Attack();*/

#pragma endregion

#pragma region �⺻ �Ű�����
	// �Լ��� �Ű������� ���� ���޵��� �ʾ��� �� �⺻ ������ �����Ǵ� �Ű������Դϴ�.

	/*int hp = 100;

	Damage();
	Move(5, 10);*/

	// �⺻ �Ű������� �ִ� ��ġ�� �ٽ� ���ο� �μ��� �־��� �� �ֽ��ϴ�.
	/*Move(5, 10, 25);*/

#pragma endregion

#pragma region �ּ� �����

	int a, b;

	cin >> a >> b;

	cout << "�ּҰ���� : " << min(a, b);

	// ����� ���
	int x = 0;
	int y = 0;
	int count = 1;
	cin >> x >> y;
	for (int i = 2; i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			count *= i;
			x /= i;
			y /= i;

			i--;
		}
	}

	cout << count * x * y << endl;

#pragma endregion


	return 0;
}

