/*********************************
    > File Name: e1.11_between2num.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月20日 星期四 23时51分38秒
 ********************************/
#include<iostream>
void printfunc(int a, int b)
{
//	for(a += 1; a < b; a++)
	a += 1;
	while(a < b)
	{
		std::cout << a << " ";
		a++;
	}
	
}
int main()
{
	int num1 = 0, num2 = 0;
	std::cout << "please input two numbers:";
	std::cin >> num1 >> num2;//没有对输入进行检查
	if(num1 < num2)
		printfunc(num1, num2);
	else
		printfunc(num2, num1);
	std::cout << std::endl;
	return 0;
}
