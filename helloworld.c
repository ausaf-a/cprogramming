/* preprocesser directive "include" tells the compiler to include 
the standard i/o header file */
#include <stdio.h>

//main function, returns an int value
int main() {
    printf("Hello, World!\n");
    
    /*sends 'pause' to the system, in windows, pause 
    freezes console activity until a key is pressed*/
    system("pause");
    
    //return 0 ends the program with an exit code '0' or normal
    return 0;
}