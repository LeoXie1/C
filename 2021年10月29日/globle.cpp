#include "globle.h"

//dummy 虚假的，仿制品
static char g_dummy[sizeof(X)];
//静态转换
static X x = reinterpret_cast<X&>(g_dummy);

//变量计数
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
