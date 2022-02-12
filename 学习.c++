#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int age ;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	//	else if (18 <= age < 28)
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("成年\n");	
//	return 0;
//}
//分支和循环
// 顺序选择循环三结构
// 
//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//	
//};
//int main()

	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "c语言程序设计",55 };
//strcpy(b1.name, "C++");//strcpy-string copy-字符串拷贝-库函数-string.h
	//struct Book* pb = &b1;
	//利用pb打印书名和价格
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

///*	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	b1.price = 15;
//	printf("*/修改后的价格：%d\n", b1.price);

//	return 0;
//}
//#include<stdio.h>
//i*/nt main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
////	/*double d = 3.14;
////	*/double* pd = &d;//32-4 ,,64-8
////	*pd = 5.5;
////	printf("%d\n", sizeof(pd));
////	int a = 10;//申请了四个字节的空间
////	int* p = &a;//p是一个-指针变量
////	*p = 20;//*是解引用操作符/间接访问操作符
////	printf("a=%d\n", a);
////	printf("%p\n", p);
////	printf("%p\n", &a);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//&按位与运算
//	//|按位或运算
//	//^按位异或运算
//	int a = 1;
//	int b = 2;
//	int c = a ^ b;
////	int c = a | b;//3
////	int c = a & b;//0
//	printf("%d\n", c);
//	return 0;
//}
/* {
	int a = 1;//整形1占4个字节32个比特位
	//00000000000000000000000000000000001
	int b = a << 1;//比特位整体左移右端补0
	printf("%d\n", b);//2
	printf("%d\n", a);//1

	return 0;
	//移位操作符 左移<< 右移>>
}*/

/* {
	int a = 5 % 2;//1取模即取余数
//	int a = 5 / 2;//2
	printf("%d\n", a);
	//算数操作符/  %
	return 0;
}
*/

///* {
//	int const arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//
//	}
////	printf ("%d\n", arr[9]);//以下标的形式访问元素//arr[下标] 
////	char ch[20];
////	float arr2 = [];
//	return 0;
//}*/

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int sum;
//	int a = 10;
//	int b = 20;
//	int sum1 = 100;
//	int sum2 = 200;
//	sum = Add(sum1, sum2);
//	//sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("学计算机\n");
//	while (line < 2000)
//	{
//		printf("敲代码:%d\n",line);
//		line++;
//	}
//	if (line >= 2000);
//	printf("好offer\n");
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("好好学习?");
//    scanf ("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}
//{
//	printf("%c\n", '\x61');//字符a
//	return 0;
//}
//{
//	printf("%c\n", '\32');//32表示两个八进制数字，作为ASCII码值对应的字符---/ddd
//}
//{
//		printf("%c\n", '\'');
//		printf("%s\n", "\"");//%s打印字符串
//		return 0;
//	}
//{
//	printf("%c\n", ''');
//		return 0;
//}
//{
//	printf("c:\\test\\32\\test.c");
//	// \t是水平制表符
//	return 0;
//}
//转义字符
//{
//	printf("c:\test\32\test.c");
//	// \t是水平制表符
//	return 0;
//}
//{
//	printf("abc\n");//转移字符
//	return 0;
//}
//%s是字符形式%d是数字形式
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr1));//strlen-string length-计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//数据在计算机上存储的时候，存储的是二进制
//a-97  A-65
//ASCII编码 码值

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);//strlen-string length-计算字符串长度的
//	printf("%s\n", arr2);
//	return 0;
//}
//


//enum Color
////	RED,
//	YELLO,
//	BLUE
//};
//int main()
////	enum Color color = BLUE;
//	return 0；
//}
//#define MAX 10
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//
//};
//int main()

//{
//	//enum Sex s=FEMAL;
//	printf("%d\n", MALE);//0
//    printf("%d\n", SECRET);//2
//}
//4.枚举常量-enum
//枚举--一一列举
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//#define定义的标识符常量
//{
//	const int n = 10;//n具有常属性但还是变量
//	int arr[n] = {0};
//}
//{
//	//常属性，const修饰常变量
//	const int num = 4;
//	printf("%d\n", num);
//	return 0;
//}
//{
// //未声明的标识符
//声明
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;

//}
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	//输入数据，使用输入函数scanf
//	scanf("%d%d", &num1, &num2);
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//{
//	int a = 10;
//	scanf("%d", &a);
//	return 0;
//}
//{
//	int a = 10;
//	printf("%d\n", a);
//return 0;
//}
//