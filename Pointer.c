//指针指向的空间被释放

#include <stdio.h>

int* test()
{
	int a = 10;//假如&a为0x1122335566
	return &a;
}//在该处返回主函数的a的地址（0x1122335566）已返还给系统！！（地址已经不存在）

int main()
{
	int* p = test();//接收到的地址（0x1122335566）已经不存在
	*p = 20;
	return 0;
}