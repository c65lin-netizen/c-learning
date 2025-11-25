#include <iostream>
#include <string>
int main(){
    //printing  data
    /*
    std::cout << "Hello c++20" <<std::endl;

    int age {21};
    std::cout << "Age : " << age << std::endl;
    
    std::cerr << "Error messgae : Something is wrong" << std::endl;
    std::clog << "Log message : Something happened " <<std::endl;
    
    */
    
    // data input
    /*
    
    int agel;
    std::string name;

    std::cout << "Please type your name and age" <<std::endl;
    
    //std::cin >> name ;
    //std::cin >> agel ;

    std::cin >> name >> agel;

    std::cout << "Hello " << name << " You are " << agel <<" years old "<<std::endl;
    
    */


    //data with spaces

    std::string full_name;
    int age3;

    std::cout<<"Please type your name and age " << std::endl;

    std::getline(std::cin,full_name);

    std::cin >> age3;

    std::cout << "Hello " << full_name << " you are " << age3 <<" years old!" << std::endl;

    
    
    return 0;
    
   

}