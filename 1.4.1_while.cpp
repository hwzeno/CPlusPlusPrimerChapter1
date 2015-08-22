/*********************************
    > File Name: 1.4.1_while.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月20日 星期四 23时33分48秒
 ********************************/
#include<iostream>
int main()
{
	int i = 0;
	int s = 0;
	while(i <= 10)
	{
		s += i;
		i++;
	}
	std::cout << s << std::endl;
}
