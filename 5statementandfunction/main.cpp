#include <iostream>
int main (int argc, char **argv)
{
    int firstNumber =12;
    int secondNumber = 9;

    int sum = firstNumber + secondNumber;
    std::cout << "The sum of the two number s is : " << sum <<std::endl;

    return 0;
}
/*
Statements in C++:
1.A statement is a basic unit of computation in a C++ program. 
2.Every C++ program is made up of statements that perform actions.
3.A statement ends with a semicolon (;).
4.Statements are excecuted in sequence from top to bottom.
5.Execution keeps going until there is a statement causing the 
program to terminate,or run another part of the program.
*/

/*
function: input -> process -> output

int  addNumbers (int first_number, int second_number)
{
    int sum = first_number + second_number;
    return sum;
}

1.must be defined before it is called.

*/