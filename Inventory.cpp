#include "Inventory.h"

Inventory::Inventory( int x, int y )
{
	lineX = x;
	selectIndex = 0;	

	size = x * y;
	items = new Item[size];

	for ( int i = 0; i < size; i++ )
	{
		items[i].SetCheck( false );
	}
}

void Inventory::ShowItem()
{
	if ( items[selectIndex].GetCheck() != false )
	{
		items[selectIndex].Information();
	}
	else
	{
		cout << "Item이 존재하지 않습니다." << endl;
	}
}

void Inventory::AddItem()
{
	for ( int i = 0; i < size; i++ )
	{
		if ( items[i].GetCheck() == false )
		{
			items[i].SetItem( 100, "Potion" );
			items[i].SetCheck( true );
			break;
		}

		if ( i == size - 1 )
		{
			if ( items[size - 1].GetCheck() == true )
			{
				cout << "인벤토리가 가득 찼습니다" << endl;
			}
		}
	}
}

void Inventory::Renderer()
{
	for ( int i = 0; i < size; i++ )
	{
		if ( i % 5 == 0 && i != 0 )
		{
			cout << endl;
		}

		if ( items[i].GetCheck() == false )
		{
			cout << "□";
		}
		else if( items[i].GetCheck() == true )
		{
			cout << "■";
		}
	}
}

void Inventory::SelectNumber( InputKey inputKey )
{
	// inputKey.GetX() (0) / 2

	// [0] [1]
	int resultX = inputKey.GetX() / 2;

	// inputKey.GetY() (1) * 5
	int resultY = inputKey.GetY() * lineX;

	selectIndex = resultX + resultY;
}
