﻿#include <iostream>
#include <vector>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <list>
#include <deque>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80


using namespace std;

void View(int health)
{
	for (int i = 0; i < health; i++)
	{
		cout << "♥";
	}

	cout << endl;
	cout << endl;

}


void Judgment(vector<const char*>& note, const char* arrow, int& health)
{
	if (note.back() == arrow)
	{
		note.pop_back();
	} // 제일 뒤에있는 note와 비교
	else
	{
		health--;
	}

}


int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 일반적인
	// 컨테이너입니다. 

#pragma region Vector
	//std::vector<int> vector;
	//
	//vector.reserve(6);
	//// capacity 1.5배씩 증가
	//
	//cout << "vector의 capacity값: " << vector.capacity() << endl;
	//
	//vector.push_back(10); // [10]
	//vector.push_back(20); // [10][20]
	//vector.push_back(30); // [10][20][30]
	//vector.push_back(40); // [10][20][30][40]
	//vector.pop_back(); // [10][20][30]
	//vector.clear();
	//
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << "vector[" << i << "]의 값 : " << vector[i] << endl;
	//}

#pragma endregion

#pragma region Rhythm Game

	//srand(time(NULL));
	//
	//vector<const char*> note;
	//
	//char key = 0; // 키 입력받을거
	//int count = 4;
	//int health = 5;
	//
	//note.reserve(6);
	//// 1. 노트를 생성합니다.
	//
	//for (int i = 0; i < count; i++)
	//{
	//	int random = rand() % 4;
	//
	//	switch (random)
	//	{
	//	case 0:
	//		note.push_back("↑");
	//		break;
	//	case 1:
	//		note.push_back("→");
	//		break;
	//	case 2:
	//		note.push_back("←");
	//		break;
	//	case 3:
	//		note.push_back("↓");
	//		break;
	//	}
	//}
	//
	//
	//while (health > 0)
	//{
	//	View(health);
	//
	//
	//	for (const char* element : note)
	//	{
	//		cout << element << " ";
	//	}
	//	key = _getch();
	//
	//	if (key == -32)
	//	{
	//		key = _getch();
	//	}
	//
	//	switch (key)
	//	{
	//	case UP: Judgment(note, "↑", health);
	//		break;
	//	case LEFT:Judgment(note, "←", health);
	//		break;
	//	case RIGHT:Judgment(note, "→", health);
	//		break;
	//	case DOWN:Judgment(note, "↓", health);
	//		break;
	//	}
	//	
	//	if (note.size() <= 0)
	//	{
	//		break;
	//	}
	//	
	//	system("cls");
	//
	//}
	//system("cls");
	//
	//
	//if (health <= 0)
	//{
	//	cout << "Defeat" << endl;
	//}
	//else
	//{
	//	cout << "Victory" << endl;
	//}









#pragma endregion

#pragma region List

//std::list<int> list;
//
//  list.push_back(10); // [10]
////list[0] = 10; // 원하는 인덱스에 값 넣기 불가능
//  list.push_back(20); // [10][20]
//
//  list.push_front(5); // [5][10][20]
//  list.push_front(1); // [1][5][10][20]
//
//  list.pop_back(); // [1][5][10]
//  list.pop_front(); // [5][10]
//
//  // 제일 앞의 인덱스 값,제일 뒤의 인덱스 값 반환
//  cout << "list.front(): "<< list.front() << endl;
//  cout << "list.back(): " << list.back() << endl;


#pragma endregion

#pragma region String
//std::string name = "Alistar";
//
//name.append(" Champion"); // 문자 추가
//
//if (name.compare("Alistar")) // 문자 비교
//{
//	cout << "문자열이 같습니다." << endl;
//}
//
//name.clear(); // 문자 지우기
//
//cout << "name 변수의 값: " << name << endl;

#pragma endregion

#pragma region Deque
//std::deque<int> deque;
//
//deque.push_front(10);
//deque.push_back(20);
//deque.push_back(30);
//deque.push_back(40);
//
//deque.pop_back();
//deque.pop_front();
//
//for (int i = 0; i < deque.size(); i++)
//{
//	cout << "deque [" << i << "]의 값: " << deque[i] << endl;
//}

#pragma endregion


#pragma endregion


	return 0;
}

