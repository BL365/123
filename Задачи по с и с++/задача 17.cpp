// все ли верно, что произойдет при запуске этого кода

/*
задача на понимание объединений */
#include <iostream>
 
int main()
{
	union A {
		int a;
		char b;
	} a;
	a.a = 0x0000FFF1;
	std::cout  << a.b << std::endl;
    return 0;
}