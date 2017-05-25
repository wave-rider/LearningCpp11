// Variadic Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//http://eli.thegreenplace.net/2014/variadic-templates-in-c/
#include <iostream>
#include <string>
using namespace std;
template<typename T>
T adder(T v) {
	return v;
}

template<typename T, typename... Args>
T adder(T first, Args... args) {
	return first + adder(args...);
}

int main()
{
	long sum = adder(1, 2, 3, 8, 7);

	std::string s1 = "x", s2 = "aa", s3 = "bb", s4 = "yy";
	std::string ssum = adder(s1, s2, s3, s4);
	cout << "ssum= " << ssum << endl;
    return 0;
}

