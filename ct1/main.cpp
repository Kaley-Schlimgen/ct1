/*
 *  main.cpp
 *  ct1
 *
 *  Created by Kaley Schlimgen on 1/17/25.
 *
 * Programming 3: CT 1
 * Console Application & Syntax Corrections
 *
 * To Do: Create simple C++ console application that will display:
 *   fictional person's: first & last name, address, city, zipcode
*/

#include <iostream>

int main(int argc, const char * argv[]) {
    //Assigns variables with a string
    std::string firstName = "Joe";
    std::string lastName = "Smith";
    std::string streetAddress = "123 S. St";
    std::string city = "Littleton";
    std::string zipCode = "80127";
    
    //Displays the variables and their assignments
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Street Address: " << streetAddress << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Zip Code: " << zipCode << std::endl;
    
    //return 0 because type is int (string is a class)
    return 0;
}
