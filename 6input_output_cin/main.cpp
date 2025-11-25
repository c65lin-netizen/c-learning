/*
std::count: printinng data to the console (terminal)
std::cin : Reading data from the terminal
std::cerr : Printinng errors to the console
std::clog : Printig log messages to the console

*/
#include <iostream>

int main() {

    //printing data part
    std::cout << "Hello World!" <<std::endl;
    std::cerr << "std::cerr output: Something went wrong" <<std::endl;
    std::clog << " std::clog output : This is a log message"<<std::endl;
    //reading data in
    std::string name;
    int age;

    std::cout <<"Please type in your Last Name : "<<std::endl;
    std::cin>> name;

    std::cout<<"Please type in your age : "<<std::endl;
    std::cin>> age;

    std::cout << "Hello " <<name << "! You are "
    << age << " years old" <<std::endl; 
    
    //chaining std::cin
    //reading data with spaces

}