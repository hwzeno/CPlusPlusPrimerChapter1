/*********************************
    > File Name: projectChapter1.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月22日 星期六 17时03分57秒
 ********************************/
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item curritem, item;
	if(std::cin >> curritem)
	{
		while(std::cin >> item)
		{
			if(curritem.isbn() == item.isbn())//首先检查是否是同一本书
			{
				curritem += item;//+=不会使isbn号变化
			}
			else
			{
				std::cout << curritem << std::endl;
				curritem = item;
			}
			
		}

		std::cout << curritem << std::endl;//打印最后一条记录,注意该语句的位置
	}
	else//加上错误检查
	{
		std::cout << " 无数据输入" << std::endl;
		return -1;
	}

	return 0;


}
