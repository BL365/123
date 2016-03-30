//что выведется на экран(решать без запуска), почему.

/*
задача ни понимание работы с указателями
*/
#include <cstdlib>  
#include <stdio.h> 

int main() 
{ 
	int *ptr, a[10], r;
    ptr=&a[5];
    ptr++;      
    r = *ptr;
	printf("%d\n", r); 
	return EXIT_SUCCESS; 
}
