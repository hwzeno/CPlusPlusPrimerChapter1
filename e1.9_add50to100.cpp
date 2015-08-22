/*********************************
    > File Name: e1.9_add50to100.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月20日 星期四 23时42分52秒
 ********************************/
#include<iostream>
int main()
{
	int counter = 50;
	int sum = 0;
	while(counter <= 100)
	{
		sum += counter;
		counter++;
	}
	std::cout << sum << std::endl;
}
