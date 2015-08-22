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

	//这样写有问题
//	Sales_item  item1;
//	while(std::cin >> item1)
//	{
//		item1 += item1;
//		std::cout << item1 << std::endl;
//	}
//
//
//
//
	Sales_item allbooks, item;
	if(std::cin >> allbooks)
	{
		while(std::cin >> item)
		{
			allbooks = allbooks + item;
		}

		std::cout << allbooks << std::endl;
	}
	else
	{
		exit(0);
		return -1;
	}
	return 0;
}
