#include "globle.h"

//dummy ��ٵģ�����Ʒ
static char g_dummy[sizeof(X)];
//��̬ת��
static X x = reinterpret_cast<X&>(g_dummy);

//��������
int initialiszer::s_counter_ = 0;
void initialiszer::init()
{
	//new(&x) X;
	x =*(new X);
	//&x = new X;
	//new (x) X;
}

void initialiszer::clean()
{
	(&x)->~X();
}
