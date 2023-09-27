#include "Item.h"

Item::Item( int price, const char* name )
{
	this->price = price;
	this->name = name;
}

void Item::Information()
{
	cout << "Item Name : " << name << endl;
	cout << "Item Price : " << price << endl;

}

void Item::SetItem( int price, const char* name )
{
	this->price = price;
	this->name = name;
}

void Item::SetCheck( bool check )
{
	this->check = check;
}

bool Item::GetCheck()
{
	return check;
}