#pragma once
//全局变量的引用，改编成海曙内静态变量的
//能够解决全局变量未初始化就被引用的问题

//方法1
//int get_globale_x() 
//{
//	static X x;
//	return x.
//
//}

#include "X.h"
extern X x;
class initialiszer {

private:
	void init();
	void clean();
	static int s_counter_;
};
static initialiszer s_init_val; //静态初始化变量

