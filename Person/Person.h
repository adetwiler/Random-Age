/*
 * File:   Person.h
 * Author: andrewdetwiler
 *
 * Created on March 12, 2012, 10:43 PM
 */

#ifndef PERSON_H
#define	PERSON_H

#include <string>

typedef unsigned int uint;

class Person {
private:
    std::string name;
    uint age,maxAge;

    void setMaxAge() { maxAge=111; }

public:
    Person() { setMaxAge(); };
    Person(std::string n, uint a);

    ~Person() {};

    // Setters
    void setName(std::string n) { name = n; };
    void setAge(uint a) { age = a; };

    // Getters
    std::string getName() { return name; };
    int getAge() { return age; };
    int getMaxAge() { return maxAge; }

    void getOlder() { age++; }
};


#endif	/* PERSON_H */

