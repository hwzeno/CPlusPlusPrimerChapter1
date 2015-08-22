/*********************************
    > File Name: e1.16_cin.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月21日 星期五 10时08分58秒
 ********************************/
#include<iostream>
int main()
{
	int value = 0;
	int sum = 0;
	for (;std::cin >> value;)
	{
		sum += value;
	}
	std::cout << sum << std::endl;
	return 0;
}
