#include <iostream>
int main() {
    //Compile time error example
    std::cout<<"Hello,World!"<<std::endl;
    
    //Run time error
    int value = 7/0;
    std::cout<<"Value: "<<value<<std::endl;
    return 0;
}
