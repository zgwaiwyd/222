#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int age ;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	//	else if (18 <= age < 28)
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("����\n");	
//	return 0;
//}
//��֧��ѭ��
// ˳��ѡ��ѭ�����ṹ
// 
//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];//c���Գ������
//	short price;//55
//	
//};
//int main()

	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "c���Գ������",55 };
//strcpy(b1.name, "C++");//strcpy-string copy-�ַ�������-�⺯��-string.h
	//struct Book* pb = &b1;
	//����pb��ӡ�����ͼ۸�
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

///*	printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	b1.price = 15;
//	printf("*/�޸ĺ�ļ۸�%d\n", b1.price);

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
////	int a = 10;//�������ĸ��ֽڵĿռ�
////	int* p = &a;//p��һ��-ָ�����
////	*p = 20;//*�ǽ����ò�����/��ӷ��ʲ�����
////	printf("a=%d\n", a);
////	printf("%p\n", p);
////	printf("%p\n", &a);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//&��λ������
//	//|��λ������
//	//^��λ�������
//	int a = 1;
//	int b = 2;
//	int c = a ^ b;
////	int c = a | b;//3
////	int c = a & b;//0
//	printf("%d\n", c);
//	return 0;
//}
/* {
	int a = 1;//����1ռ4���ֽ�32������λ
	//00000000000000000000000000000000001
	int b = a << 1;//����λ���������Ҷ˲�0
	printf("%d\n", b);//2
	printf("%d\n", a);//1

	return 0;
	//��λ������ ����<< ����>>
}*/

/* {
	int a = 5 % 2;//1ȡģ��ȡ����
//	int a = 5 / 2;//2
	printf("%d\n", a);
	//����������/  %
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
////	printf ("%d\n", arr[9]);//���±����ʽ����Ԫ��//arr[�±�] 
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
//	printf("ѧ�����\n");
//	while (line < 2000)
//	{
//		printf("�ô���:%d\n",line);
//		line++;
//	}
//	if (line >= 2000);
//	printf("��offer\n");
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("�ú�ѧϰ?");
//    scanf ("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}
//{
//	printf("%c\n", '\x61');//�ַ�a
//	return 0;
//}
//{
//	printf("%c\n", '\32');//32��ʾ�����˽������֣���ΪASCII��ֵ��Ӧ���ַ�---/ddd
//}
//{
//		printf("%c\n", '\'');
//		printf("%s\n", "\"");//%s��ӡ�ַ���
//		return 0;
//	}
//{
//	printf("%c\n", ''');
//		return 0;
//}
//{
//	printf("c:\\test\\32\\test.c");
//	// \t��ˮƽ�Ʊ��
//	return 0;
//}
//ת���ַ�
//{
//	printf("c:\test\32\test.c");
//	// \t��ˮƽ�Ʊ��
//	return 0;
//}
//{
//	printf("abc\n");//ת���ַ�
//	return 0;
//}
//%s���ַ���ʽ%d��������ʽ
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr1));//strlen-string length-�����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//�����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ�����
//a-97  A-65
//ASCII���� ��ֵ

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);//strlen-string length-�����ַ������ȵ�
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
//	return 0��
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
//4.ö�ٳ���-enum
//ö��--һһ�о�
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//#define����ı�ʶ������
//{
//	const int n = 10;//n���г����Ե����Ǳ���
//	int arr[n] = {0};
//}
//{
//	//�����ԣ�const���γ�����
//	const int num = 4;
//	printf("%d\n", num);
//	return 0;
//}
//{
// //δ�����ı�ʶ��
//����
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;

//}
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	//�������ݣ�ʹ�����뺯��scanf
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