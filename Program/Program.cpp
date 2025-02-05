﻿#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void Position(int x, int y)
{	
	// 좌표이동함수
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

class Item
{
private:
	int price;
	const char* name;

public:
	void SetData(int price, const char* name)
	{
		this->price = price;
		this->name = name;
	}
};

class Input
{
private:
	int x;
	int y;
	char key;
	const char* shape;
	
public:
	Input()
	{
		x = 0;
		y = 1;
		shape = "↑";
	}

	void Renderer()
	{	
		Position(x, y);

		cout << shape;
	}
	
	void Getkey(int & index)
	{
		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}

		switch (key)
		{
		case UP: if (y > 1)
		{
			y -= 2;
			index -= 8;
		}
			   break;
		case LEFT:if (x > 0)
		{
			x -= 2;
			index -= 2;
		}
				 break;

		case RIGHT:if (x < 6)
		{
			x += 2;
			index += 2;
		}
				  break;
		case DOWN:if (y < 5)
		{	
			y += 2;
			index += 8;
		}
				 break;
		}
		
	}

	void Select(Item * item[], int & index)
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			if (item[index / 2] == nullptr)
			{
				item[index / 2] = new Item();
			}
		}
	}


};


class Inventory
{
private:
	int size;
	int width;
	int index;

public:
	Input input;

	Item* item[12];

	Inventory(int size, int width)
	{
		index = 0;
		this->size = size;
		this->width = width;

		for (int i = 0; i < size; i++)
		{
			item[i] = nullptr;
		}

	}
	
	void Update()
	{
		input.Getkey(index);
		input.Select(item, index);
	}

	void Renderer()
	{	
		Position(0, 0);

		for (int i = 0; i < size; i++)
		{
			/*
			for (int j = 0; j < width; j++)
			{
				cout << "□";
			}
			if (size * width % width == 0)
			{
				cout << endl;
				cout << endl;
			}
			*/
			if (i != 0 && i % width == 0)
			{
				cout << endl << endl;
			}

			if (item[i] == nullptr)
			{
				cout << "□";
			}
			else
			{
				cout << "■";
			}


		
		}
		input.Renderer();

		//cout << index/2 << endl;
	}

	~Inventory()
	{
		for (int i = 0; i < 12; i++)
		{
			if (item[i] != nullptr)// 데이터가 있다
			{
				delete item[i];
			}
		}
	}

};



int main()
{
	Inventory inventory(12,4);
	
	while (true)
	{
		inventory.Renderer();
		inventory.Update();
		system("cls");
	}

	

	Item* item[12];

	for (int i = 0; i < 12; i++)
	{
		//item[i] = new Item();
		//item[i] = nullptr; // 다 nullptr로 초기화/ 00000000...
		//cout << item[i] << endl;
	}


	return 0;
}

