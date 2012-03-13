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
    void setName(std::string n);
    void setAge(uint a);

    // Getters
    std::string getName();
    int getAge();
    int getMaxAge() { return maxAge; }

    void getOlder() { age++; }
};


#endif	/* PERSON_H */

