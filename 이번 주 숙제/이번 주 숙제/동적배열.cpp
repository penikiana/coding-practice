#include <iostream>

using namespace std;

class DynamicArray
{
private:
	int size=0;
	int* arr;
public:
	DynamicArray(int size=10)
	{
		cout << "너는 되지 ?" << endl;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cout << &arr[i] << endl;
		}

	}
	~DynamicArray()
	{
		cout << "소멸자 호출은 되긴함 ?" << endl;
	}
	
	void resize(int n)
	{
		
		int* copiedarray = new int[n];
	
		memcpy(copiedarray, arr, sizeof(n));

		cout << "되는거 맞냐..." << endl;

		for (int i = 0; i < n; i++)
		{
			cout << &copiedarray[i] << endl;
		}

		delete[] copiedarray;
		copiedarray = nullptr;
	}

	void setData(int i, int data) 
	{
		cout <<"여기 있나요 있는거 맞죠?" << endl;
		arr[i] = data;
		cout << &data << endl;
	}
	int at(int i) const
	{
		cout << "i의주소값은 이걸거야 :"<< &i << endl;
		return i;
	}
	int& operator[](int i) 
	{

		return i;
	}
	

};

int main()
{
	DynamicArray n(11);
	n.resize(12);

	n.setData(10, 0);
	n.at(5);
	
}
