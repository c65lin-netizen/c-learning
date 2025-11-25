/*
Int
1.Stores decimals
2.Typically occupies 4 bytes or more in memory
*/

/*
Variable
a named piece of memory that you use to store 
specific types of data
*/


/*
Variable example

//variable may contain random garbage value
int elephant_cout;

int lion_count {};// Initializes to zero

int lion_count {5};// Initializes to 5

//can use expression as initializer
int domesticated_animals { dog_number + cat_number};

//Won't compile, the expression in the braces uses undeclared variables
int bad_initialization { doesnt_exsist1 + doesnt_exist2 };

//2.9 is not int data type .Error or Warning
int narrowing_conversion {2.6};

*/

/*
() It's used for inputting some data
{} It's used for initialization and providing a code scope

*/

/*
Three types of initialization

1.functional variable initialization
int apple_count (5);

2.Variable braced initialization
int lion_count{} ; 

3.Assignment Initialization
int truck_count = 7

*/

/*
Size of a type in memory
std::cout << "sizeof int : " << sizeof (int) <<std::endl;
std::cout << "sizeof truck_count : " << sizeof(truck_count) <<std::endl;



*/