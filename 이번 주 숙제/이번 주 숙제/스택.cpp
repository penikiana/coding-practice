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
			cout << "삭제될 값: " << size[indicator - 1] << endl;
			size[indicator - 1] = NULL;
			indicator--;
		}
		else
		{
			cout << "잘못된 접근입니다." << endl;
		}
	
	}
	void top()
	{
		if (indicator > 0)
		{
			cout << "최근 입력된 값: " << size[indicator - 1] << endl;
		}
		else
			cout << "스택이 비어있습니다." << endl;
	}
	void push(int n)
	{
		if (indicator < 7)
		{
			size[indicator] = n;
			cout << "입력된 값:" << size[indicator] << endl;
			indicator++;
		}
		else
		{
			cout << "잘못된 접근입니다." << endl;
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

	

	
	