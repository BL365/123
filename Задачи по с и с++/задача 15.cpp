// что выведется на экран

/*
на понимание работы со ссылками
*/

#include <iostream>
using namespace std;

int main(void) 
{
	int val = 20,val2 = 2;
	int &refVal = val;
	refVal = val2;
	cout<<val<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
