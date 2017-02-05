#include <iostream>
#include "deng_e_ben_xi.h"
#include "calc.cpp"

int main(void)
{
	dai_kuan* a;
	dai_kuan_factory dk_factory;
	int select;
	double benjin,nianli,niansu;
	std::cout << "请输入还款方式：\n0.等额本息\n1.等额本金\n" << std::endl;
	std::cin >> select;
	
	a = dk_factory.create_dai_kuan(select);
	
	std::cout << "请输入本金：" << std::endl;
	while(1)
	{
		if(!(std::cin >> benjin))
		{
			std::cin.clear();
			std::cin.sync();
			std::cout<<"输入错误，请重新输入！\n"<<std::endl;
		}
		else if(benjin <= (double)0 )
		{
			std::cout <<"输入的本金不能小于等于0，请重新输入！"<<std::endl;
		}
		else
		{
			a->set_benjin(benjin);
			break;
		}
		
	}
	
	std::cout << "请输入年利率：" << std::endl;
	while(1)
	{
		if(!(std::cin >> nianli))
		{
			std::cin.clear();
			std::cin.sync();
			std::cout<<"输入错误，请重新输入！\n"<<std::endl;
		}
		else if(nianli < (double)0 )
		{
			std::cout <<"输入的年利不能小于0，请重新输入！"<<std::endl;
		}
		else
		{
			a->set_nianli(nianli);
			break;
		}
	}
	
	std::cout << "请输入还款年数：" << std::endl;
	while(1)
	{
		if(!(std::cin >> niansu))
		{
			std::cin.clear();
			std::cin.sync();
			std::cout<<"输入错误，请重新输入！\n"<<std::endl;
		}
		else if(niansu < (double)0 )
		{
			std::cout <<"输入的年数不能小于0，请重新输入！"<<std::endl;
		}
		else
		{
			a->set_niansu(niansu);
			break;
		}
	}
	a->show_all();
	std::cout << a->calc_yuehuan() << std::endl;
	dk_factory.del_dai_kuan(a);
	return 0;
}