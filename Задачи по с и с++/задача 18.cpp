// что произойдет при запуске этого кода
#include <iostream>

void func1(int & x){
	while (x & (8 + 4) || x > 6 ) {
		x /=2;
		if (x == 1) 
			x++;
	}
}

int main() {
	int x = 0x10;
	func1(x);
	std::cout << x++ << std::endl;
}