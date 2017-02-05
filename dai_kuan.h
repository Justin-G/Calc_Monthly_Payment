#ifndef __DAI_KUAN__
#define __DAI_KUAN__

#define MONTHS_PER_YEAR 12
#define ERROR 0
#define OK 1



class dai_kuan
{
	private:
	    double m_benjin;    //本金
		double m_yuesu;//月数
		double m_niansu;//年数
		double m_nianli;//年利率
		double m_yueli;//月利率
		double m_yihuan_yue;//已经还了多少月
		
		void calc_yuesu()//计算总共要还多少个月
		{
			m_yuesu = m_niansu * MONTHS_PER_YEAR;
		}
		
		void calc_yueli()//计算每月利率
		{
			m_yueli = m_nianli / MONTHS_PER_YEAR;
		}
	public:
	
	
	    double get_benjin();
		void set_benjin(double benjin);
		
		double get_niansu();
		void set_niansu(double niansu);
		
		double get_yuesu();
		
		double get_nianli();
		void set_nianli(double nianli);
		
		double get_yueli();
	    double get_yihuan_yue();
		
	    virtual double calc_yuehuan()=0;
		virtual void show_all()=0;
};

#endif