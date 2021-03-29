#include "LongLong.h"
#include <sstream>

LongLong::LongLong() { Setlong1(0); Setlong2(0); }
LongLong::LongLong(long long1 = 0, long long2 = 0)
{
	Setlong1(long1); Setlong2(long2);
}
LongLong::LongLong(LongLong& A)
{
	Setlong1(A.Getlong1());
	Setlong2(A.Getlong2());
}

ostream& operator << (ostream& out, const LongLong& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, LongLong& A)
{
	long long1, long2;
	cout << "Enter a long1 "; in >> long1;
	cout << "Enter a long2 "; in >> long2;
	A.Setlong1(long1); A.Setlong2(long2);
	return in;
}
long LongLong::Getlong1() const { return long1; }
long LongLong::Getlong2() const { return long2; }

void LongLong::Setlong1(long value) { long1 = value; }
void LongLong::Setlong2(long value) { long2 = value; }

LongLong::operator string() const
{
	stringstream ss;
	ss << "long1= " << this->Getlong1() << endl;
	ss << "long2= " << this->Getlong2() << endl;
	return ss.str();
}