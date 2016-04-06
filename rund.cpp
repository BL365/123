#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

class matr
{
	int i,j,c,d;
		public:
		matr(int I,int J)
        {
    	   i = I;
    	   j = J;
        }

       int method_rund();
       int get_matr ();
       int **mass = new int* [i];
       for (c = 0; c < 3; c++)
       {
    	   m[c] = new int [5]
       }
       ~matr()
			{
				delete [] mass;
				delete i;
			}
};

int matr::get_matr ()						//метод вывода массива
        {
        	for (c = 0; c < 2; c++)
        		{
        			for (d = 0; d < 3; d++)
        			{
        				cout<< mass [c] [d];
        			}
        		}
        }
int matr::method_rund()
{
		srand(time(NULL));
		for (int z = 0; z < i; z++)
		{
			for (int y = 0; y < j; y++)
			{
				mass [z] [y] = rand ();
			}
		}
		return 0;
};

int main()
{
		matr Obj(2, 3);
		Obj.method_rund();
	return 0;
};

