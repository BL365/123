// все ли в этой задаче хорошо? (скомпилируется? выполнится без ошибок?) 
// если нет, то что не так и почему?  и как это исправить?

/* 
Проверка на знание способов передачи аргументов в функции, 
принимания работы с указателями и деструктором*/

#include <stdlib.h> 
#include <stdio.h> 

class A { 
	public: 
		A (int value) { 
			value_ = new int; 
			*value_ = value; 
		} 
		
		~A() { 
			delete value_; 
		} 

		int * value_; 
}; 

void function(A a) { 
	printf("%d\n", *a.value_); 
} 

int main () { 
	A instance(5); 
	function(instance); 
	function(instance); 
}
