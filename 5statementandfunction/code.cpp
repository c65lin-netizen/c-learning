#include <iostream>

int addNumbers (int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;

}


int main(){
 int first_number {666};
 int second_number {7};

 std::cout << "First number : "<<first_number << std::endl;     //666
 std::cout << "Second number : " << second_number << std::endl; //7
  
 int sum = first_number + second_number;
 std::cout<< "sum : " <<sum <<std::endl; //673

 sum = addNumbers(25,7);
 std::cout<< "sum : " <<sum <<std::endl; //32
 
 sum = addNumbers(30,54);
 std::cout<< "sum : " <<sum <<std::endl; //84
 
 std::cout<< "sum : " <<addNumbers(3,42) <<std::endl; //45
 
 return 0;


}