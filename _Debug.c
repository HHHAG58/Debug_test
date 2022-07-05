#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//死循环调试
//Debug版本死循环,Release版本正常输出
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("haha\n");
//		arr[i] = 0;
//	}
//	//system("pause");
//	return 0;
//}

//断点 - F5跳到断点处 
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", 10 - i);
//	}
//	return 0;
//}

//调试实例
//n的阶乘
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;//调试后加上
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
// }

//模拟strcpy
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//'\0'
//}

//优化
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//再优化
#include <assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy
//	char arr1[] = "####################";
//	char arr2[] = "bit";
//	//my_strcpy(arr1, arr2); 
//	my_strcpy(arr1, NULL); 
//	printf("%s\n", arr1);
//
//	return 0;
//}

//模拟实现strlen
//my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针有效性s
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

    