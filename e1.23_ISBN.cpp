/*********************************
    > File Name: 1.5.1_salesitem.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月21日 星期五 20时33分52秒
 ********************************/
#include<iostream>
#include"./C++primer_souce_code/1/Sales_item.h"
//$ addItems <infile.txt >outfile.txt
int main()
{

	Sales_item curritem, item;
	if(std::cin >> curritem)

	{
		int cnt = 1;
		while(std::cin >> item)
		{
			if(item.isbn() == curritem.isbn() )
			{
				cnt++;
			}
			else
			{
				std::cout << curritem.isbn() << "  " << cnt << std::endl;
				curritem = item;
				cnt = 1;
			}
		}
		std::cout << curritem.isbn() << "  " << cnt << std::endl;
	}
	return 0;
}
