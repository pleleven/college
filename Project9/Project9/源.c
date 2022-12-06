//1.
//求平均值
//#include<stdio.h>
//float fun(float a[], int n)
//{
//	int i;
//	float avg = 0;
//	for (i = 0; i < n; i++)
//		avg = avg + a[i];
//	avg = avg / n;
//	return avg;
//}
//
//void main()
//{
//	float score[30] = { 90,72,80.61,55 }, aver;
//	aver = fun(score, 5);
//	printf("\nAverage score is:%5.2f\n", aver);
//}


//2.
//牛顿迭代法求方程的根
//#include <stdio.h>
//#include <math.h>
//
//double funY(double x);
//double funY1(double x);
//
//int main()
//{
//    double x, x1, x2;
//
//    x1 = 1.5;//求1.5附近的根
//    x2 = x1 - funY(x1) / funY1(x1);
//    while (fabs(x2 - x1) > 1e-6) 
//    {
//        x1 = x2;
//        x2 = x2 = x1 - funY(x1) / funY1(x1);
//    }
//    printf("%lf", x2);
//}
////  y的函数
//double funY(double x) 
//{
//    double y;
//    y = 2 * x * x * x - 4 * x * x + 3 * x - 6;
//    return y;
//}
////y的一阶导数
//double funY1(double x)
//{
//    double y1;
//    y1 = 6 * x * x - 8 * x + 3;
//    return y1;
//}



//3.排序
//#include<stdio.h>
//#define N 6
//int main()
//{
//	int a[N], t;
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = i + 1; j < N; j++)
//		{
//			if (a[i] > a[j])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%8d", a[i]);
//	}
//	return 0;
//}


//4.
//#define N 5
//#include<stdio.h>
//int main()
//{
//	int a[N], m = 8;
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%d", &a[i]);
//		printf("%5d", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%x ", &a[i]);
//	}
//	return 0;
//}

//5.统一一行字符中的单词个数
//#include<stdio.h>
//int main()
//{
//	char str[81];
//	int i, num = 0, word = 0;
//	char c;
//	printf("输入一行字符串：\n");
//	gets(str);//不能用scanf代替
//	for (i = 0; (c = str[i]) != '\0'; i++)
//		if (c == ' ')
//			word = 0;
//		else if (word == 0)
//		{
//			word = 1;
//			num++;
//		}
//	printf("这行字符串中含有的单词个数为：%d\n", num);
//	return 0;
//}

//#include<stdio.h>
//void input(int*a, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		scanf_s("%d", a + i);
//}
//void output(int* a, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf(" %d", *(a + i));
//	printf("\n");
//}
//int main()
//{
//	int a[10];
//	intput(a, 6);
//	output(a, 6);
//	return 0;
//}




