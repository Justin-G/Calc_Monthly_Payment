#include <iostream>
#include "deng_e_ben_xi.h"
#include "calc.cpp"

int main(void)
{
	dai_kuan* a;
	dai_kuan_factory dk_factory;
	int select;
	double benjin,nianli,niansu;
	std::cout << "�����뻹�ʽ��\n0.�ȶϢ\n1.�ȶ��\n" << std::endl;
	std::cin >> select;
	
	a = dk_factory.create_dai_kuan(select);
	
	std::cout << "�����뱾��" << std::endl;
	while(1)
	{
		if(!(std::cin >> benjin))
		{
			std::cin.clear();
			std::cin.sync();
			std::cout<<"����������������룡\n"<<std::endl;
		}
		else if(benjin <= (double)0 )
		{
			std::cout <<"����ı�����С�ڵ���0�����������룡"<<std::endl;
		}
		else
		{
			a->set_benjin(benjin);
			break;
		}
		
	}
	
	std::cout << "�����������ʣ�" << std::endl;
	while(1)
	{
		if(!(std::cin >> nianli))
		{
			std::cin.clear();
			std::cin.sync();
			std::cout<<"����������������룡\n"<<std::endl;
		}
		else if(nianli < (double)0 )
		{
			std::cout <<"�������������С��0�����������룡"<<std::endl;
		}
		else
		{
			a->set_nianli(nianli);
			break;
		}
	}
	
	std::cout << "�����뻹��������" << std::endl;
	while(1)
	{
		if(!(std::cin >> niansu))
		{
			std::cin.clear();
			std::cin.sync();
			std::cout<<"����������������룡\n"<<std::endl;
		}
		else if(niansu < (double)0 )
		{
			std::cout <<"�������������С��0�����������룡"<<std::endl;
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