/*
 * Person.cpp
 *
 *  Created on: Mar 12, 2012
 *      Author: andrewdetwiler
 */

#include <string>
#include "Person.h"

Person::Person(std::string n, uint a) {
    setName(n);
    setAge(a);
    setMaxAge();
}

void Person::setName(std::string n) {
    name = n;
}
void Person::setAge(uint a) {
	age = a;
}

std::string Person::getName() {
    return name;
}
int Person::getAge() {
	return age;
}
