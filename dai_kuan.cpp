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

