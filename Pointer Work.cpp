#include<iostream>
using namespace std;
void PointerFun(int* a);
int main()
{
	int myvalue = 10;
	
	PointerFun(&myvalue);
	
	cout<<myvalue;
}

void PointerFun(int* a)
{
	*a = 15;

}
