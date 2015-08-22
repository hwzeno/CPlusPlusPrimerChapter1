/*********************************
    > File Name: e1.12_for.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月21日 星期五 09时15分02秒
 ********************************/
#include<iostream>
int main()
{
	int sum = 0;
	int i;
	for (i = -100; i <= 100; ++i)
	{
		sum += i;
	}
	std::cout << sum << std::endl;
}
