﻿// 练习4-大整数的因子.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "Method1.h"
#include "Method2.h"
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[31];
	while (gets_s(str))
	{
		method1(str);
		method2(str);
		//method1以空间换时间，时间复杂度仅为O（n），而method2时间复杂度为O（n^2）
		//这一问题在输入规模变大时尤为显著
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
