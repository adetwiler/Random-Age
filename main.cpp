/*
 * main.cpp
 *
 *  Created on: Mar 12, 2012
 *      Author: andrewdetwiler
 */

#include <iostream>
#include <string>

#include "Person/Person.h"
#include "funcs/strings.h"

using namespace std;

int main(int argc, char** argv) {
    string name,age;

    // Loop until we have a valid name
    do {
        cout << "What is your name? ";
        getline(cin,name);

        if (name.empty()) {
            cout << "Invalid name.\n";
        }
    } while (name.empty());

    Person p;
    // Set the name
    p.setName(name);

    // Loop until we have a valid age
    bool error = false;
    do {
    	cout << "Hello " + p.getName() << ". How old are you? ";
    	getline(cin,age);
    	if (!strings::strIsNumber(age)
    		|| atoi(age.c_str()) <= 0
    		|| atoi(age.c_str()) >= p.getMaxAge()
    	){
    		cout << "Invalid age.\n";
    		error = true;
    	} else {
    		error = false;
    	}
    } while (error);

    // Set the age
    p.setAge(atoi(age.c_str()));

    cout << p.getName() << " is " << p.getAge() << " years old.\n";

    // initialize random seed:
    srand ( time(NULL) );

    // Loop until random age.
    int random_age = rand() % p.getMaxAge() + 1;

    do {
    	// Wait for user input
    	cout << "Press ENTER to get older...\n";
    	cin.ignore( numeric_limits <streamsize> ::max(), '\n' );

    	p.getOlder();
    	cout << "A year has passed. " << p.getName() << " is now " << p.getAge() << ".\n";
    } while (p.getAge() < random_age);

    cout << "RIP " << p.getName();

    return 0;
}
