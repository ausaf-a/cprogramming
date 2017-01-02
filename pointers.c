#include <stdio.h>

int main() {
	//point is a pointer to an integer, *point is the value of that integer 
	int *point, num; 
	
	//so &num would give me the address of the value in num
	point = &num; 
	
	/*since i didn't store a value in num, *point should return an error 
	or default value, lets see*/
	printf("*point :%d\n", *point);	//prints a random integer value since num 
								  	//hasn't been initialized 
	
	//this should do the same thing as 
	//scanf("%d", &num);
	//as they both store input at the same memory address	
	printf("enter an integer:");
	scanf("%d", point);
	
	//now that we stored the input into num, print it out
	//two methods, they both give the same result
	printf("\ngetting stored value with *\t:%d\n", *point);
	printf("getting stored value with num\t:%d\n", num);


	//pause program in cmd and exit after keypress
	system("pause");
	return 0;
}