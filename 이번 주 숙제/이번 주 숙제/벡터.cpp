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
		cout << i << "���ּҰ���:" << &i << endl;
		return i;
	}

	int front()
	{
		cout << "������ ó�� ����:";
		cout << arr[top] << endl;
		return arr[top];
	}
	int back()
	{
		cout << "������ ������ ����:";
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
		cout << "������ �Ӹ��� " << data << "�� �߰��մϴ�." << endl;
		
	}
	void push_back(int data)
	{
		arr[indicator-1] = data;
		cout << "������ ������ " << data << "�� �߰��մϴ�." << endl;
	
	}

	void pop_front()
	{
		arr[top] = NULL;
		cout << "������ �Ӹ��� ���� �����մϴ�." << endl;
	}
	void pop_back()
	{
		arr[indicator-1] = NULL;
		cout << "������ ������ ���� �����մϴ�." << endl;
	}

	void remove(int data)
	{
		cout << data << "��(��) �����մϴ�." << endl;
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
		cout << "���͸� �ʱ�ȭ�մϴ�." << endl;
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
