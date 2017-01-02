#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//pointrs can be initialized without a variable by using malloc, 
	//which allocates memory for the pointer	
	float *pi = malloc( sizeof(*pi) );

	//exit on keypress
	system("pause");
	return 0;
}

/*tells us the size of each variable
	printf("short:\t%d\n", sizeof(short));
	printf("int:\t%d\n", sizeof(int));
	printf("char:\t%d\n", sizeof(char));
	printf("float:\t%d\n", sizeof(float));
	printf("double:\t%d\n", sizeof(double));
	*/

	//short:  		2 bytes
	//int:    		4 bytes
	//char:   		1 bytes
	//float:  		4 bytes
	//double: 		8 bytes
	//pi address: 	12659312 bytes
	//value: 		1073741824 bytes
