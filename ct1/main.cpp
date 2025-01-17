/*
 *  main.cpp
 *  ct1
 *
 *  Created by Kaley Schlimgen on 1/17/25.
 *
 *  Programming 3: CT 1
 *  Console Application
 *
 *  To Do: Create simple C++ console application that will display:
 *         fictional person's: first & last name, address, city, zipcode
*/

#include <iostream>
#include<stdio.h>

//So don't have to do "std::" before string and cout
using namespace std;

int main() {
    //Assigns variables with a string
    string firstName = "Joe";
    string lastName = "Smith";
    string streetAddress = "123 S. St";
    string city = "Littleton";
    string zipCode = "80127";
    
    //Displays the variables and their assignments
    cout << "First Name: " << firstName << std::endl;
    cout << "Last Name: " << lastName << std::endl;
    cout << "Street Address: " << streetAddress << std::endl;
    cout << "City: " << city << std::endl;
    cout << "Zip Code: " << zipCode << std::endl;
    
    //return 0 because type is int (string is a class)
    return 0;
}
