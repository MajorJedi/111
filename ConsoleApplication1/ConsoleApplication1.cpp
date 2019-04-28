// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
#include"head.h"

int main()
{
	Compare<int> cmp1(3, 7);
	cout << cmp1.max() << endl;
	cout << cmp1.min() << endl;
	Compare<float> cmp2(45.78, 93.6);
	cout << cmp2.max() << endl;
	cout << cmp2.min() << endl;
	Compare<char> cmp3('a', 'A');
	cout << cmp3.max() << endl;
	cout << cmp3.min() << endl;
	return 0;
}

