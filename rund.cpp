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

	int method_rand(int min_rand, int max_rand);
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
int matr::method_rand (int min_rand, int max_rand)
{
	int A = max_rand;
	int B = min_rand;
	srand(time(NULL));
	for (int a = 0; a < i; a++)
	{
		for (int b = 0; b < j; b++)
		{
			arr [a] [b] = rand () % A +B;
		}
	}
	return 0;
};

int main()
{
	matr Obj(10, 10);
	int min_rand, max_rand;
	cout << "Введите минимальное значение рандома" << endl;
	cin >> min_rand;
	cout << "Введи максимальное значение рандома" << endl;
	cin >> max_rand;
	max_rand = max_rand - min_rand + 1;
	Obj.method_rand(min_rand, max_rand);
	Obj.get_matr();
	return 0;
}

