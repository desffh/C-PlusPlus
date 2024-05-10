﻿#include <iostream>

// 위치에 따라 쓴 곳을 기준으로 아래부터 적용됨
using namespace std; // std를 안쓸 수 있게 됨

namespace A
{
	int data = 10;

	void Function()
	{
		std::cout << "A의 기능" << std::endl;
	}
}

namespace B
{
	int data = 20;

	void Function()
	{
		std::cout << "B의 기능" << std::endl;
	}
}

class Unit
{
#pragma region 접근 지정자
	// 클래스 내부의 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자입니다. 

	// public : 클래스 외부에서 데이터를 접근할 수 있도록 
	//			허용하는 접근 지정자입니다.

	// protected : 클래스 내부와 자기가 상속하고 있는 클래스에서만
	//			   접근을 허용하는 접근 지정자입니다. (외부x)

	// private : 클래스 내부에서만 접근을 허용하는 접근 지정자입니다.

#pragma endregion

private: // C++부터는 구조체에 바로 값 넣기 가능
	int health = 100; // 4 byte 
	double defense = 5.5; // 8 byte

public:
	void Move()
	{
		std::cout << "Unit Move" << endl;
	}

	void Information() const //값 변경 불가능(읽기전용)
	{
		cout << "Health: " << health << endl;
		cout << "Defense: " << defense << endl;
	}
};

int main()
{
#pragma region 이름 공간 (Name Space)
	// 속성을 구분할 수 있도록 유효 범위를 
	// 설정하는 영역입니다.

	//std::cout << "A namespace에 있는 data의 값: " << A::data << std::endl;
	//std::cout << "B namespace에 있는 data의 값: " << B::data << std::endl;

	// 이름 공간은 같은 이름의 함수나 변수를 또 다른
	// 공간에 선언하여 중복되지 않도록 선언할 수 있습니다.


#pragma endregion

#pragma region 범위 기반 반복문

	//int list[5] = { 10,20,30,40,50 };
	//
	//for (const int & element : list) // 해당하는 인덱스에는 접근불가
	//	// 한번에 다 출력할때 사용
	//{	// 상수화 const &사용하여 값 고정시킴
	//	std::cout << element << endl;
	//}
#pragma endregion

#pragma region 클래스(Class)
	// 사용자 정의 데이터 유형으로 속성과 함수가
	// 포함되어 있으며, 클래스를 통해 객체를 생성하여
	// 접근하고 사용할 수 있는 집합체입니다.

	//Unit unit;
	//
	//std::cout << "Unit 클래스의 크기: " << sizeof(Unit) << endl;
	//// 바이트 패딩까지 포함하여 16 byte
	//
	//unit.Move();
	//unit.Information();

	int x = 10;

	int* ptr = &x;



	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의
	// 메모리 영역에 포함되지만, 정적 변수와 함수의
	// 메모리는 클래스 영역에 포함되지 않습니다.

#pragma endregion




	return 0;
}
