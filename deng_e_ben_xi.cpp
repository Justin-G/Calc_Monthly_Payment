#include "deng_e_ben_xi.h"
#include <cmath>
#include <iostream>
double deng_e_ben_xi::calc_yuehuan()
{
	return 	get_benjin() * get_yueli() * pow((1 + get_yueli()), get_yuesu()) / (pow((1 + get_yueli()), get_yuesu())-1);
}

void deng_e_ben_xi::show_all()
{

    std::cout<<std::endl<<std::endl<<std::endl;
	std::cout<<"本金："<<get_benjin()<<std::endl;
	std::cout<<"年数："<<get_niansu()<<std::endl;
	std::cout<<"月数："<<get_yuesu()<<std::endl;
	std::cout<<"年利："<<get_nianli()<<std::endl;
	std::cout<<"月利："<<get_yueli()<<std::endl;
	
	
}