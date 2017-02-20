#include "deng_e_ben_jin.h"
#include <cmath>
#include <iostream>
double deng_e_ben_jin::calc_yuehuan()
{
	double yue_huan;
	yue_huan = (get_benjin() / get_yuesu()) + (get_benjin() - get_yihuan_jine()) * get_yueli();
	
	
	set_yihuan_jine(get_yihuan_jine() + get_yuehuan_benjin());
	set_yihuan_yue(get_yihuan_yue() + 1);
	return yue_huan;
}
