#pragma once
//ȫ�ֱ��������ã��ı�ɺ����ھ�̬������
//�ܹ����ȫ�ֱ���δ��ʼ���ͱ����õ�����

//����1
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
static initialiszer s_init_val; //��̬��ʼ������

