// Погодин.cpp: определяет точку входа для консольного приложения.
//

//#include <stdafx.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "Russian");
	const int St = 10;
	const int Pr = 4;
	int arr [Pr][St];

	int max_rand, min_rand;
	max_rand=5;
	min_rand=2;
	max_rand = max_rand - min_rand + 1;
	//srand(time(NULL));
	for (int a=0; a<Pr; a++) //цикл заполнения строки
	{
		for(int b=0; b<St;b++)//цикл заполнения столбцов строки
		{
			arr [a] [b] = rand () % max_rand +min_rand;
		}
	}
	int ball = rand () % max_rand +min_rand;
	
	cout<<"Оценки студентов:"<<endl;
	int a = 0;
	while (a < Pr)
	{
		int p=a+1;
		cout << endl << "Предмет " << p << ": ";
		int b;
		for (b = 0; b < St; b++)
		{
			cout << arr [a] [b] << " ";
		}
		a++;
	}
	
	int Hor=0;
	int Dvo=0;
	int b=0;
	for (int i=0; i<St; i++)
	{
		a=0;
		while (a<Pr)
		{
			if (arr [a][b]<3)
			{
				Dvo++;
				break;
			} 
			else
			{
				a++;
			}
		}
	}
	cout <<endl<<endl<<"кол-во двоек "<<Dvo<<endl;
	Hor=St-Dvo;
	cout<< endl << "Успешно закончили семестр " << Hor <<" студентов"<<endl;
	cout<< "На пересдачу осталось " << Dvo << " студентов"<<endl<<endl;
	a=0;
	float sum=0;
	while (a<Pr)
	{
		for (b=0; b<St; b++)
		{
			sum=sum+arr[a][b];
		}
		a++;
		sum=sum/St;
		cout<<"Средний балл по предмету "<< a<<": "<<sum<<endl;
		sum=0;
	}
	b=0;
	cout<<endl;
	for (int i=0; i<St; i++)
	{
		a=0;
		while (a<Pr)
		{
			sum=sum+arr[a][b];
			a++;
		}
		b++;
		sum=sum/Pr;
		cout<<"Средний балл студента номер "<< b<<": "<<sum<<endl;
		sum=0;
		
	}

	system("pause>>void");
}