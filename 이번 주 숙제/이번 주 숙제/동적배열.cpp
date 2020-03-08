#include <iostream>

using namespace std;

class DynamicArray
{
private:
	int size=0;
	int* arr;
	int* copiedarray;
public:
	DynamicArray(int size=10)
	{
		this->size = size;
		cout << "너는 되지 ?" << endl;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cout << &arr[i] << endl;
		}

	}
	~DynamicArray()
	{
		delete[] arr;
	}
	
	void resize(int n)
	{
		int* copiedarray = new sizeof(int);
	

		for (int i = 0; i < n; i++)
		{
			arr[i] = copiedarray[i];
		}

		delete[] arr;
		arr = copiedarray;
	}

	void setData(int i, int data) 
	{
		cout << "data에 저장된 i의 주소값은 이걸거야 :";
		arr[i] = data;
		cout << &data << endl;
	}
	int at(int i) const
	{
		cout << i << endl;
		return i;
	}
	int& operator[](int i) 
	{

		return i;
	}
};

int main()
{
	DynamicArray n(5);
	n.resize(12);

	n.setData(10, 6);
	n.at(5);
	
}

