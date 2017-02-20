#include "deng_e_ben_xi.h"
#include <cmath>
#include <iostream>
double deng_e_ben_xi::calc_yuehuan()
{
	return 	(get_benjin() * get_yueli() * pow((1 + get_yueli()), get_yuesu()) / (pow((1 + get_yueli()), get_yuesu())-1));
}

