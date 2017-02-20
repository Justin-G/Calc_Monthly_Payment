#include "dai_kuan.h"	
double dai_kuan::get_benjin()
{
	return m_benjin;
}
void dai_kuan::set_benjin(double benjin)
{
	m_benjin = benjin;
}
		
double dai_kuan::get_niansu()
{
	return m_niansu;
}
		
void dai_kuan::set_niansu(double niansu)
{
	m_niansu = niansu;
	calc_yuesu();
}
		
double dai_kuan::get_yuesu()
{
	return m_yuesu;
}
		
double dai_kuan::get_nianli()
{
	return m_nianli;
}
		
void dai_kuan::set_nianli(double nianli)
{
	m_nianli = nianli;
	calc_yueli();
}
		
double dai_kuan::get_yueli()
{
	return m_yueli;
}
		
double dai_kuan::get_yihuan_yue()
{
	return m_yihuan_yue;
}

		
void dai_kuan::set_yihuan_yue(double yi_huan_yue)//设置已经还月数
{
	m_yihuan_yue = yi_huan_yue;
}




void dai_kuan::show_all()
{

    std::cout<<std::endl<<std::endl<<std::endl;
	std::cout<<"本金："<<get_benjin()<<std::endl;
	std::cout<<"年数："<<get_niansu()<<std::endl;
	std::cout<<"月数："<<get_yuesu()<<std::endl;
	std::cout<<"年利："<<get_nianli()<<std::endl;
	std::cout<<"月利："<<get_yueli()<<std::endl;
}




double dai_kuan::get_yihuan_jine()
{
	return m_yihuan_jine;
}

void dai_kuan::set_yihuan_jine(double yihuan_jine)//设置已还金额
{
	m_yihuan_jine = yihuan_jine;
}
