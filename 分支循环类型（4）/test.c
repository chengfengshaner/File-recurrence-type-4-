//写一个代码打印1 - 100之间所有3的倍数的数字 
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		//判断i是否为3的倍数
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

//或

#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i+=3)
	{
		//不去判断i是否为3的倍数
			printf("%d ", i);
	}
	return 0;
}
