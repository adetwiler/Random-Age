/*
 * strings.cpp
 *
 *  Created on: Mar 13, 2012
 *      Author: andrewdetwiler
 */

#ifndef STRINGS_H
#define	STRINGS_H

#include <string>
#include <sstream>

class strings {
public:
	static bool strIsNumber(std::string &s) {
	   int mybool;
	   std::stringstream str(s);
	   str >> mybool;

	   return str ? 1 : 0;
	}
};

#endif	/* STRINGS_H */
