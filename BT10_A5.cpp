#include<iostream>
using namespace std;

const int n = 10;

struct Arr
{
	int *a = new int [n];
};

int main()
{
	int *b= new int [n];
	Arr arr;
	cout << arr.a << endl;
	b = arr.a;
	cout << b << endl;
}
