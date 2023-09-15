#include "Goliath.h"

Goliath::Goliath()
{
	helath = 125;
	attack = 12;
}

void Goliath::Move()
{
	cout << "°ñ¸®¾Ñ ÀÌµ¿" << endl;
}

void Goliath::Attack()
{
	cout << "°ñ¸®¾Ñ °ø°Ý" << endl;
}

void Goliath::Create()
{
	cout << "°ñ¸®¾Ñ »ý¼º" << endl;
}

Goliath::~Goliath()
{
	cout << "°ñ¸®¾Ñ »èÁ¦" << endl;
}
