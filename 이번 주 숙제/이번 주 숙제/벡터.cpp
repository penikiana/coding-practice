#include <iostream>

using namespace std;

class vector
{
private:
	int size=0;
	int indicator = 0;
	int top=0;
	int capacity=0;
	int* arr;

public:
	vector(int size = 10)
	{
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = i;
			cout << arr[i];
			indicator++;
		}
		cout << endl;
	}
	~vector()
	{

	}

	int at(int i) const
	{
		cout << i << "의주소값은:" << &i << endl;
		return i;
	}

	int front()
	{
		cout << "벡터의 처음 원소:";
		cout << arr[top] << endl;
		return arr[top];
	}
	int back()
	{
		cout << "벡터의 마지막 원소:";
		cout << arr[indicator-1] << endl;
		return arr[indicator-1];
	}

	bool empty()
	{

	}

	int getsize()
	{

	}
	int getcapacity()
	{

	}

	void push_front(int data)
	{
		arr[top] = data;
		cout << "벡터의 머리에 " << data << "를 추가합니다." << endl;
		
	}
	void push_back(int data)
	{
		arr[indicator-1] = data;
		cout << "벡터의 꼬리에 " << data << "를 추가합니다." << endl;
	
	}

	void pop_front()
	{
		arr[top] = NULL;
		cout << "벡터의 머리의 값을 삭제합니다." << endl;
	}
	void pop_back()
	{
		arr[indicator-1] = NULL;
		cout << "벡터의 꼬리의 값을 삭제합니다." << endl;
	}

	void remove(int data)
	{
		cout << data << "을(를) 제거합니다." << endl;
		for (int i = 0; i < indicator; i++)
		{
			if (arr[i] == data)
			{
				arr[i] = NULL;
			}
		}
	}
	void clear()
	{
		cout << "벡터를 초기화합니다." << endl;
		for (int i = 0; i < indicator; i++)
		{
			arr[i] = NULL;
		}
	}

	void reserve()
	{

	}
};

int main()
{
	vector go;
	go.at(2);

	go.front();

	go.push_front(5);
	go.push_front(6);
	go.push_front(7);
	go.remove(9);
	go.front();
	go.back();

	go.push_front(8);
	go.push_back(6);

	go.clear();

	go.front();
	go.back();




}
