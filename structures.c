#include <stdio.h>

//just an example of a basic struct
struct body {
	int posX;
	int posY; 
	int velX;
	int velY;
};

int main() {
	struct body particle; 
	struct body *ptr;

	//initialize struct variables
	particle.posX = 5;
	particle.posY = 10;
	particle.velX = 0;
	particle.velY = -1;

	//set ptr to reference particle 
	ptr = &particle;

	/*now if I want to use ptr to get a value in the struct particle,
	i have to use the '->' operator to get the value i want as opposed to
	just using *ptr */
	printf("posX: %d\n", ptr->posX);
	printf("posY: %d\n", ptr->posY);
	printf("velX: %d\n", ptr->velX);
	printf("velY: %d\n", ptr->velY);

	//done, let's exit
	system("pause");
	return 0;
}
