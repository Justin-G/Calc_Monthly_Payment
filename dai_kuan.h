#ifndef __DAI_KUAN__
#define __DAI_KUAN__

#define MONTHS_PER_YEAR 12
#define ERROR 0
#define OK 1



class dai_kuan
{
	private:
	    double m_benjin;    //����
		double m_yuesu;//����
		double m_niansu;//����
		double m_nianli;//������
		double m_yueli;//������
		double m_yihuan_yue;//�Ѿ����˶�����
		
		void calc_yuesu()//�����ܹ�Ҫ�����ٸ���
		{
			m_yuesu = m_niansu * MONTHS_PER_YEAR;
		}
		
		void calc_yueli()//����ÿ������
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