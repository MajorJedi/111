#include"pch.h"
#include<iostream>
#include"head.h"
#include<iostream>
using namespace std;

template<class numtype>
Compare<numtype>::Compare(numtype a, numtype b)
{
	x = a; y = b;
}

template<class numtype>
numtype Compare<numtype>::max()
{
	return (x > y) ? x : y;
}

template<class numtype>
numtype Compare<numtype>::min()
{
	return (x < y) ? x : y;
}