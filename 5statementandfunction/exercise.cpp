#include <iostream>
int multiply (int x, int y){
    return x * y;
}
int main(){
    int first_number = 7;
    int second_number =11;
    std::cout << "The multiplication of "<<first_number<<" and "<<second_number<<std::endl;
    std::cout << multiply(first_number,second_number);
    return 0;
}