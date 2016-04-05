#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int i=2, j=3;

class matr
{
     public:
        matr()
        {
        	int *mass = new int [i];
        }
        int method_rund();
        int get_matr ();
        ~matr()
        {
                    delete *mass;
                    delete j;
                    delete i;
        };
};

matr::get_matr ()						//метод вывода массива
        {
        	for (int c = 0; c < 3; c++)
        		{

        		cout<<mass[c];				//не хватает цикла для вывода второй строки
        		}
        }

int main()
{
		matr Obj;										//здесь нужно создать объект класса matr, который вызовет функции класса по очереди
		Obj,*mass[i][j];
	return 0;
}

