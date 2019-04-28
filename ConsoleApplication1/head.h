#include"pch.h"

template<class numtype>
class Compare
{
public:
	Compare(numtype a, numtype b);
	numtype max();
	numtype min();
private:
	numtype x, y;
};
