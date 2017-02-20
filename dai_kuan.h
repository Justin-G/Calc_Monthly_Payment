#ifndef __DAI_KUAN__
#define __DAI_KUAN__

#define MONTHS_PER_YEAR 12
#define ERROR 0
#define OK 1

#include <iostream>

class dai_kuan
{
	private:
	    double m_benjin;    //本金
		double m_yuesu;//月数
		double m_niansu;//年数
		double m_nianli;//年利率
		double m_yueli;//月利率
		double m_yihuan_yue;//已经还了多少月
		double m_yihuan_jine;//已经还了的金额
		double m_benyue;//本个还款月

		void calc_yuesu()//计算总共要还多少个月
		{
			m_yuesu = m_niansu * MONTHS_PER_YEAR;
		}
		
		void calc_yueli()//计算每月利率
		{
			m_yueli = m_nianli / MONTHS_PER_YEAR;
		}
	public:
	
		dai_kuan(double benjin = 0, double yuesu = 0,double niansu = 0, double nianli = 0,double yueli = 0,double yihuan_yue = 0,double yihuan_jine = 0,double benyue = 0)
		{
			m_benjin = benjin;
			m_yuesu = yuesu;
			m_niansu = niansu;
			m_nianli = nianli;
			m_yueli = yueli;
			m_yihuan_yue = yihuan_yue;
			m_yihuan_jine = yihuan_jine;
			m_benyue = benyue;
		};
		
	    double get_benjin();//得到本金
		void set_benjin(double benjin);//设置本金
		
		double get_niansu();//得到年数
		void set_niansu(double niansu);//设置年数
		
		double get_yuesu();//得到月数
		
		double get_nianli();//得到年利
		void set_nianli(double nianli);//设置年利
		
		double get_yueli();//得到月利
		
	    double get_yihuan_yue();//得到已经还月数
		void set_yihuan_yue(double yi_huan_yue);//设置已经还月数

		double get_yihuan_jine();//得到已经还的金额
		void set_yihuan_jine(double yihuan_jine);//设置已还金额
		
	    virtual double calc_yuehuan()=0;//计算每月还款金额
		void show_all();//显示全部信息
};

#endif