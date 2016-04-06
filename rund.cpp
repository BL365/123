#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

	class matr
		{
				int i,j,c,d;

				public:
				int **mass;
				matr(int I,int J)
					{
						i = I;
						j = J;
						int **mass = new int* [i];
						for (c = 0; c < i; c++)
							{
								mass[c] = new int [j];
							}
					}

				int method_rand();
				void get_matr ();

				~matr()
					{
						delete [] mass;
					}
		};

	void matr::get_matr ()
        {
        	for (c = 0; c < i; c++)
        		{
        			for (d = 0; d < j; d++)
        			{
        				cout<< mass [c] [d]<<endl;
        			}
        		}
        }
	int matr::method_rand()
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
				Obj.method_rand();
				Obj.get_matr();
				return 0;
		};

