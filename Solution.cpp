#include <iostream>

using namespace std;

#pragma region final
	// 하위 클래스에서 더 이상 재정의할 수 없도록 선언하는 기능입니다.

class Hero
{
	virtual void BasicSkill() {};
	virtual void MagicSkill() {};
};

class Crusaders : public Hero
{
	void BasicSkill() {};
	void MagicSkill() final {};
};

class Fighter : public Crusaders
{
	void BasicSkill() {};
	// Crusaders에서 MagicSkill에 final을 선언하였기 때문에 재정의 할 수가 없습니다.
	// void MagicSkill() {}; ERROR
};

#pragma endregion

int main()
{
		 

	return 0;
}

