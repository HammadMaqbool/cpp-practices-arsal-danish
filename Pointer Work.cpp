#include<iostream>
using namespace std;
void Add(int* a);
int main()
{
	int myvalue = 10;
	
	Add(&myvalue);
	
	cout<<myvalue;
}

void Add(int* a)
{
	*a = 15;
}