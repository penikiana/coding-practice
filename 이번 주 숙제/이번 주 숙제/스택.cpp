#include <iostream>

using namespace std;

class stack
{
private:
	int size[7];
	int empty;
	int indicator = 0;
public:
	stack()
	{

	}
	~stack()
	{
		
	}
	void pop() 
	{
		if (indicator > 0)
		{
			cout << "������ ��: " << size[indicator - 1] << endl;
			size[indicator - 1] = NULL;
			indicator--;
		}
		else
		{
			cout << "�߸��� �����Դϴ�." << endl;
		}
	
	}
	void top()
	{
		if (indicator > 0)
		{
			cout << "�ֱ� �Էµ� ��: " << size[indicator - 1] << endl;
		}
		else
			cout << "������ ����ֽ��ϴ�." << endl;
	}
	void push(int n)
	{
		if (indicator < 7)
		{
			size[indicator] = n;
			cout << "�Էµ� ��:" << size[indicator] << endl;
			indicator++;
		}
		else
		{
			cout << "�߸��� �����Դϴ�." << endl;
		}
	}
};


int main() 
{
	stack init;
	init.push(10);
	init.push(20);
	init.push(50);
	init.push(40);
	init.push(70);
	init.push(90);
	init.push(100);
	init.push(120);
	init.top();
	init.pop();
	init.pop();
	init.pop();
	init.pop();
	init.pop();
	init.pop();
	init.pop();
	init.top();
	

}

	

	
	