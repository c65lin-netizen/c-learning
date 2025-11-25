#include <iostream>

int main(){
    /* variable braced initialization
    int elephant_count;
    //garbage value, the default will be zero

    int lion_count{};

    int dog_count{10};

    int cat_count {15};

    int domesticated_animals {dog_count + cat_count};

   // dangerous!! int narrowing_conversion {2.9};

    std::cout << elephant_count << std::endl;
    std::cout << lion_count << std::endl;
    std::cout << dog_count << std::endl;
    std::cout << cat_count << std::endl;
    std::cout << domesticated_animals << std::endl;
*/

/*
    //Functional Initialization
    int apple_cout(5);
    int narrowing_conversion (2.9);
    //information loss.Less safe than braced initializers
    //Reason: more than four bytes.So it will chop the fractional numbers
*/


   //Assignment notation
   int bike_count = 5;
   int narrowing_conversion_assignment = 2.9;
  //still chop the number 
   std::cout << "narrowing_conversion_assignment: " <<narrowing_conversion_assignment << std:: endl;

  // Check the size with sizeof
   std::cout << "sizeof int: " <<sizeof(int) << std:: endl;
    std::cout << "sizeof bike_count : " <<sizeof(bike_count) << std:: endl;



    return 0;



}