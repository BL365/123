// �������.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	for (int a=0; a<Pr; a++) //���� ���������� ������
	{
		for(int b=0; b<St;b++)//���� ���������� �������� ������
		{
			arr [a] [b] = rand () % max_rand +min_rand;
		}
	}
	int ball = rand () % max_rand +min_rand;
	
	cout<<"������ ���������:"<<endl;
	int a = 0;
	while (a < Pr)
	{
		int p=a+1;
		cout << endl << "������� " << p << ": ";
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
	cout <<endl<<endl<<"���-�� ����� "<<Dvo<<endl;
	Hor=St-Dvo;
	cout<< endl << "������� ��������� ������� " << Hor <<" ���������"<<endl;
	cout<< "�� ��������� �������� " << Dvo << " ���������"<<endl<<endl;
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
		cout<<"������� ���� �� �������� "<< a<<": "<<sum<<endl;
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
		cout<<"������� ���� �������� ����� "<< b<<": "<<sum<<endl;
		sum=0;
		
	}

	system("pause>>void");
}