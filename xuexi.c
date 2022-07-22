#define _CRT_SECURE_NO_WARNINGS 1
////void text()
////{
////    static int a = 1;
////	a++;
////	printf("%d",a);
////
////}
////int main()
////{
////	int b = 0;
////	while (b < 10)
////	{
////		text();
////		b++;
////
////	}
////	return 0;
////}
//int main()
//{
//	int a = 10;
//	int* b = &a;
//	*b = 20;
//	printf("%d\n", a);
//
//}
//比大小函数
int Max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a ,&b );
	//方法一if (a > b)
	//	printf("%d", a);
	//else printf("%d", b);

	//方法二,先指出函数Max,否则电脑不认
	int m = Max(a, b);
	printf("%d\n", m);

	return 0;
}
