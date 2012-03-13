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
