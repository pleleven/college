//#include <stdio.h>
//int main()
//{
//	int v1, v2;
//	v1 = 'a';
//	v2 = 'b';
//	printf("%c,%c\n", v1, v2);
//	printf("%d,%d\n", v1, v2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i, j, m, n;
//	i = 8;
//	j = 10;
//	m = ++i;
//	n = j++;
//	printf("%d,%d,%d,%d\n", i, j, m, n);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	float d, e;
//	char c1, c2;
//	double f, g;
//	long m, n;
//	unsigned int p, q;
//	a = 61; b = 62;
//	c1 = 'a'; c2 = 'b';
//	d = 3.56; e = -6.87;
//	f = 3157.890121; g = 0.123456789;
//	m = 50000; n = -60000;
//	p = 32768; q = 40000;
//	printf("a=%d,b=%d\nc1=%c,c2=%c\nd=%6.2f,e=%6.2f\n", a, b, c1, c2, d, e);
//	printf("f=%15.6f,g=%15.12f\nm=%ld,n=%ld\np=%u,q=%u\n", f, g, m, n, p, q);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i;
//    scanf_s("%d", &i);
//    switch (i)
//    {
//    case 1: printf("i=%d*\n", i); break;
//    case 2: printf("i=%d**\n", i);
//    case 5: printf("i=%d*****\n", i); break;
//    case 4: printf("i=%d****\n", i);
//    default: printf("i=%d***\n", i);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int once_b = 1;	// 一次性执行标志位，=1可执行，=0不执行 
//	while (1) {
//		if (once_b && os_wait1(K_SIG)) {	// 修改此处
//			once_b = 0;
//		}
//	    if (once_b == 0) {
//		printf("持续执行这句话.\n");
//		}
//	}
//
//	return 0;
//}
//#include<stdio.h>

//int maxvalue(int x, int y, int z) {
//	int max;
//	max = x;
//	if (y > max) {
//		max = y;
//	}
//	else if (z > max) {
//		max = z;
//	}
//	return max;
//}
//
//
//int main() {
//	int maxvalue(int x, int y, int z);
//	int a, b, c, d;
//	printf("please input the value:");
//	scanf_s("%d,%d,%d", &a, &b, &c);
//	d = maxvalue(a, b, c);
//	printf("the max is: %d", d);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, max;
//	printf("输入：");
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//			max = a;
//		else
//			max = c;
//	}
//	else
//	{
//		if (a > c)
//			max = b;
//		else
//			max = c;
//	}
//	printf("最大值：%d", max);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int max(int x, int y, int z);
//	float a, b, c, d;
//	printf("请输入a,b,c的值：");
//	scanf_s("%f%f%f", &a, &b, &c);
//	d = max(a, b, c);
//	printf("%f", d);
//	return 0;
//}
//int max(int x, int y, int z)
//{
//	int m;
//	if (x > y && x > z) m = x;
//	else if (y > x && y > z) m = y;
//	else m = z;
//	return m;
//}
//int main()
//{
//
//
//	char g;
//		printf("请输入学生考试成绩的：");
//		scanf("%c",&g);
//		switch(g)
//		{
//			case 'A':
//			case 'a':
//				printf("90~100\n");break;
//			case 'B':
//			case 'b':
//				printf("80~89\n");break;
//			case 'C':
//			case 'c':
//				printf("70~79\n");break;
//			case 'D':
//			case 'd':
//				printf("60~69\n");break;
//			default:
//				printf("60分以下\n");
//				return 0;
//		}
