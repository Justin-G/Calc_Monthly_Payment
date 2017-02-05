#include "dai_kuan.h"
#include "deng_e_ben_xi.h"

class dai_kuan_factory
{
	public:
	dai_kuan* create_dai_kuan(int select)
	{
		dai_kuan* n_dai = 0;
		switch(select)
		{
			case 0:
			    n_dai = new deng_e_ben_xi;
			    break;
				
			case 1:
			break;
		}
		
		return n_dai;
		
		
		
	}
	
	void del_dai_kuan(dai_kuan* n_dai)
	{
		delete n_dai;
		n_dai = 0;
	}
};