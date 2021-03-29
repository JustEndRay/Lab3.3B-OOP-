#include "LongLong_Public.h"
LongLong_Public::LongLong_Public() { Setlong1(0); Setlong2(0); }
LongLong_Public::LongLong_Public(long long1 = 0, long long2 = 0)
{
	Setlong1(long1); Setlong2(long2);
}
LongLong_Public::LongLong_Public(LongLong_Public& A)
{
	Setlong1(A.Getlong1());
	Setlong2(A.Getlong2());
}
LongLong_Public& LongLong_Public::operator = (const LongLong_Public& A)
{
	LongLong(A.Getlong1(), A.Getlong2());
	return *this;
}
ostream& operator << (ostream& out, const LongLong_Public& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, LongLong_Public& A)
{
	long long1, long2;
	cout << "Enter a long1 "; in >> long1;
	cout << "Enter a long2 "; in >> long2;
	A.Setlong1(long1); A.Setlong2(long2);
	return in;
}

LongLong_Public::operator string() const
{
	stringstream ss;
	ss << "long1= " << this->Getlong1() << endl;
	ss << "long2= " << this->Getlong2() << endl;
	return ss.str();
}

LongLong_Public& LongLong_Public::operator ++ ()
{
	this->Setlong1(this->Getlong1() + 1);
	return *this;
}
LongLong_Public& LongLong_Public::operator -- ()
{
	this->Setlong1(this->Getlong1() - 1);
	return *this;
}
LongLong_Public LongLong_Public::operator ++ (int)
{
	LongLong_Public t(*this);
	this->Setlong2(this->Getlong2() + 1);
	return t;
}
LongLong_Public LongLong_Public::operator -- (int)
{
	LongLong_Public t(*this);
	this->Setlong2(this->Getlong2() - 1);
	return t;
}
bool operator>(const LongLong_Public A, const LongLong_Public B)
{
	if (A.Getlong1() > B.Getlong2()) { return 1; }
	else
	{
		if (A.Getlong1() == B.Getlong2())
		{
			if (A.Getlong1() > B.Getlong2()) { return 1; }
		}
	}
	if (A.Getlong1() < B.Getlong2()) { return 0; }
}

bool operator<(const LongLong_Public A, const LongLong_Public B)
{
	if (A.Getlong1() < B.Getlong2()) { return 1; }
	else {
		if (A.Getlong1() == B.Getlong2())
		{
			if (A.Getlong1() < B.Getlong2()) { return 1; }
		}
	}
	if (A.Getlong1() > B.Getlong2()) { return 0; }
}

bool operator==(const LongLong_Public A, const LongLong_Public B)
{
	if (A.Getlong1() == B.Getlong2() || A.Getlong2() == B.Getlong2()) { return 1; }
	else { return 0; }

}