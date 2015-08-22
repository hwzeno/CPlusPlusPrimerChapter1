/*********************************
    > File Name: 1.4.4_frequency.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月21日 星期五 10时19分52秒
 ********************************/
#include<iostream>
int main()
{
	int currVal = 0, val =0;
	if(std::cin >> currVal)
	{
		int cnt = 1;
		while(std::cin >> val)
		{
			if(val == currVal)
				++cnt;
			else
			{
				std::cout << currVal 
						  << " occurs "
						  << cnt
						  << " times "
						  << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal
				  << " occures "
				  << cnt
				  << " times "
				  << std::endl;
	}
	return 0;
}
