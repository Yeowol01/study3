#include "Bank.h"

void Bank::Withdrawal( Player & player, int money )
{
	bankMoney += money;
	player.money -= money;
}

void Bank::ShowInfo()
{
	cout << "bank Money : " << bankMoney << endl;
}
