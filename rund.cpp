#include <stdlib.h>
#include <iostream>
#include <ctime>
using namespace std;

class matr
{
	int i, j;
	int **arr;
	public:
	matr(int numbersLine, int numbersColumn)
	{
		i = numbersLine;
		j = numbersColumn;
		arr = new int* [i];
		for (int a = 0; a < i; a++)
		{
			arr [a] = new int [j];
		}
	}

	int method_rand();
	void get_matr ();

	~matr()
	{
		delete [] arr;
	}
};

void matr::get_matr ()
{
	int a = 0;
	while (a < i)
	{
		int b;
		for (b = 0; b < j; b++)
		{
			cout << arr [a] [b] << " ";
		}
		cout << endl;
		a++;
	}
}
int matr::method_rand()
{
	srand(time(NULL));
	for (int a = 0; a < i; a++)
	{
		for (int b = 0; b < j; b++)
		{
			arr [a] [b] = rand ();
		}
	}
	return 0;
};

int main()
{
matr Obj(4, 3);
Obj.method_rand();
Obj.get_matr();
return 0;
}

