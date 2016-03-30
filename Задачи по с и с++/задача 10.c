//что выведется на экран(решать без запуска), почему.

/*
задача ни понимание работы с указателями
*/
#include <cstdlib>  
#include <stdio.h> 

int main() 
{ 
	int *ptr1, *ptr2, a[10], r;
    int i=2;
    ptr1=a+(i+4);   /*  равно адресу элемента a[6] */
    ptr2=ptr1-i;      
    r = *ptr1;
	printf("%d\n", r); 
    r = *ptr2;
	printf("%d\n", r); 
	return EXIT_SUCCESS; 
}
