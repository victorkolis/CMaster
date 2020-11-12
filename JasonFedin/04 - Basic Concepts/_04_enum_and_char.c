/*
 * _04_EnumAndChar.c
 *
 *  Created on: Nov 9, 2020
 *      Author: victordematos
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
	enum primaryColor {red, yellow, blue};
	enum primaryColor victorColor, isaacColor;
	victorColor = red;

	enum gender {Male, Female};
	enum gender myGender = Male;
	enum gender anotherGender = Female;
	enum month{January, February, March, April, May, June, July, August, September, October, November, December};
	enum month birthdaysAtHome;
	birthdaysAtHome = June;


	char letterU = 'u';
	char semicolon = ';';
	char newLine = '\n';

	bool isMale = (myGender == anotherGender);

}
