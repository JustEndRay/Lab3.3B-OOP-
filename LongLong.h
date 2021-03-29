#pragma once
#include <string>
#include <sstream>
#include <iostream>

using namespace std;
class LongLong
{
	long long1, long2;
public:
	long Getlong1() const;
	long Getlong2() const;

	void Setlong1(long value);
	void Setlong2(long value);
	
	LongLong();
	LongLong(long, long);
	LongLong(LongLong&);

	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);
	operator string() const;
};

