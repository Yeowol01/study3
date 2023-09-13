#pragma once
#include <iostream>
using namespace std;

#pragma region ���� ������
// ���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� �������Դϴ�.

class Item
{
private:
	int price;
	int* size;

public:
	Item()
	{
		price = 100;
		size = new int;
		*size = 999;
	}

	Item(const Item& clone)
	{
		price = clone.price;
		// ���� ����
		// size = clone.size;
		// ���� ����
		size = new int;
		*size = 450;
	}

	void Show()
	{
		cout << "price : " << price << endl;
		cout << "*size : " << *size << endl;
	}

	~Item()
	{
		delete size;
	}

	// �⺻ ������
	// public Item() { }

};

#pragma endregion


int main()
{
#pragma region ���� ������
	Item item1;
	item1.Show();

	Item item2(item1);
	item2.Show();
#pragma endregion

#pragma region ���� ����
	// ��ü�� ������ �� �ּ� ���� �����Ͽ� ���� �޸𸮸� ����Ű�� �����Դϴ�.

	/*int* ptr1 = new int;

	int* ptr2 = ptr1;

	*ptr2 = 1000;

	cout << "ptr1�� ����Ű�� �� : " << *ptr1 << endl;
	cout << "ptr2�� ����Ű�� �� : " << *ptr2 << endl;

	delete ptr1;*/
	// delete ptr2; ERROR

	// ���� ����� ��ü�� �޸𸮿��� ������ �� �������� ���� ������ �ݴ�� �Ҹ��ڰ� ����Ǳ� ������, ������ ��ü�� ���� �����ǹǷ� ���� �ִ� ��ü�� ������ ���� �̹� ������ �޸𸮿� �����ϰ� �˴ϴ�.
#pragma endregion

#pragma region ���� ����
	// ��ü�� ������ ��, ���� ���� �ƴ� �ν��Ͻ� ��ü�� ���� �����Ͽ� ���� �ٸ� �޸𸮸� �����ϴ� �����Դϴ�.



#pragma endregion



	return 0;
}

