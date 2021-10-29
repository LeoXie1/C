// CWin32Demo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool isodd(int num) {
	return num % 2;
}
void demo1() {

	std::vector<int> some_list(20);
	generate(some_list.begin(), some_list.end(), rand);
	cout << "some_list size:" << some_list.size()<<endl;
	for_each(some_list.begin(), some_list.end(), [](int value) {
		cout << value << '\t';
	});
	cout << endl;
	//可以使用lambda 公式替换isodd 函数功能、
	auto iter1 = find_if(some_list.begin(), some_list.end(), [=](int n) {return n > 10; });
	if (iter1 != some_list.end())
	{
		//找到对应的值

	}
	int odd_count = count_if(some_list.begin(), some_list.end(), isodd);
	cout << "Odd number count:" << odd_count << endl;
	//for (int i = 0; i < 10; i++) some_list.push_back(i);
	cout << some_list.size() << endl;

	/*for (auto it : some_list)
	{
		cout << it << endl;
		[=](){
			printf("==%d\n", it);
		};
	}*/

	
}
int main()
{
    std::cout << "Hello World!\n";
	demo1();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
