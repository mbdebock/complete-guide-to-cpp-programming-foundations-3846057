// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <cstdio>

/* This program prints
   the message "Hi There!"
   in the terminal output. */

/*  argc = Integer that represents the number of command line arguments passed to the program.
    argv = an array of C-style strings representing those arguments.
int main(int argc, char* argv[]){
    std::cout << "Hi There!" << std::endl;
    return 0;
}
*/

int main(){ //This is the main function
    std::cout << "Hi There!" << std::endl;
    printf("Hey, there!\n");

    std::cout << std::endl << std::endl;
    return 0;
}
