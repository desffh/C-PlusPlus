﻿#include <iostream>

using namespace std;

#pragma region 생성자
// 클래스의 인스턴스가 생성되는 시점에서 자동으로
// 호출되는 특수한 멤버 함수입니다.



class GameObject
{
private:
	int x;
	int y;
	int z;

	static int score;


public:
	GameObject()
	{
		cout << "Create GameObject" << endl;
	}

#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의
	// 멤버 함수입니다.

	// 소멸자는 객체가 메모리에서 해제될 때 단 한 번만 호출되며,
	// 소멸자에는 매개 변수를 생성하여 사용할 수 없습니다.

	~GameObject()
	{
		score++;
		cout << "Score : " << score << endl;
		cout << "Release Game Object" << endl;
	}


#pragma endregion

	// 생성자의 경우 객체가 생성될 때 단 한 번만 호출되며,
	// 생성자는 반환형이 존재하지 않기 때문에 생성자가 호출되기
	// 전에는 객체에 대한 메모리는 할당하지 않습니다.

};

#pragma endregion

int GameObject::score = 0; // 전역변수에서 초기화

class Bullet
{
private:
	// 수정못하도록
	int x;
	int y;

	int velocity;

public:
	Bullet(int x, int y, int velocity)
	{
		// this 포인터
		// 자기 자신을 가리키는 포인터입니다. 
		this->x = x;
		this->y = y;
		this->velocity = velocity;
	}
	// 복사생성자
	Bullet(Bullet& clone)
	{
		cout << "Copy Constructor" << endl;

		x = clone.x; // 새로생긴x에 복제된 x넣기
		y = clone.y;
		velocity = clone.velocity;
	}

	void Information()
	{
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		cout << "velocity: " << velocity << endl;
	}

};

int main()
{
#pragma region 생성자
	//GameObject gameobject;

	//GameObject* ptr1 = new GameObject(); // 동적할당
	//GameObject* ptr2 = new GameObject(); 
	//GameObject* ptr3 = new GameObject();
	//
	//
	//delete ptr1; // 초기화
	//delete ptr2;
	//delete ptr3; 

#pragma endregion

#pragma region 복사 생성자
	// 같은 객체를 복사하여 생성시킬 때 호출되는 생성자입니다.

	Bullet bullet1(1, 1, 5);

	bullet1.Information();

	Bullet bullet2(bullet1); // 복사생성자가 호출됨

	bullet2.Information();


	// 복사 생성자를 정의하지 않고, 객체를 복사하게 되면
	// 기본 복사 생성자가 호출되기 때문에 얕은 복사로 객체가 복사됩니다.

#pragma endregion


	return 0;
}

