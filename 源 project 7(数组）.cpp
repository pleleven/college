////һά���鶨�����������������ֵ��λ�� 
//#include <stdio.h>
//#define N 8
//int main()
//{
//	int i, a[N];
//	int s = 0;
//	int max, maxp;
//	float avg;
//	//printf("������%d������",N)��
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);
//		s = s + a[i];
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//
//	}
//	max = a[0];
//	maxp = 1;
//	for (i = 1; i < N; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//			maxp = i + 1;
//		}
//	}
//	avg = (float)s / N;
//	printf("\ns=%d,avg=%7.2f\n", s, avg);
//	printf("max=%d,maxp=%d\n", max, maxp);
//	return 0;
//}
//
//
////��ά�������������������Сֵ��λ��
//#include <stdio.h>
//#include <math.h>
//#define M 4
//#define N 5
//int main()
//{
//	int i, j;
//	int a[M][N];//ͨ�����鶨�塣M,NΪ���ų��� 
//	int s = 0;
//	int max, maxp, maxq;//���ֵ�����ֵ�����У����ֵ������ 
//	float avg;
//	//printf("������%d������",N)��
//	for (i = 0; i < M; i++)                 //��ά�������� 
//	{
//		for (j = 0; j < N; j++)
//		{
//			//scanf("%d",&a[i][j]);  //ͨ�������������θ���ά����ÿ��Ԫ�ظ�ֵ 
//			a[i][j] = rand() % 19 + 1;     //ͨ�����������ά���鸳ֵ 
//			s = s + a[i][j];             //��ά������� 
//		}
//	}
//	for (i = 0; i < M; i++)                 //��ά������� 
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	max = a[0][0];      //���ά�������ֵ��λ�ã�ǰ���������Ѿ����岢��ֵ�� 
//	maxp = 0;
//	maxq = 0;
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//				maxp = i;
//				maxq = j;
//			}
//		}
//	}
//	avg = (float)s / (M * N);   //��ƽ��ֵ 
//	printf("\ns=%d,avg=%7.2f\n", s, avg);
//	printf("max=%d,maxp=%d,maxq=%d\n", max, maxp, maxq);
//	return 0;
//}
//
//
////һά������������ 
//#include <stdio.h>   //��׼�������ͷ�ļ�
//#include <math.h>    //��ѧͷ�ļ�
//#include <stdlib.h>  //��ͷ�ļ� 
//#define N 8
//int main()
//{
//	int i;
//	int a[N];        //һά���鶨�� 
//	srand(9);       //���������������ʼ������ 
//	for (i = 0; i < N; i++)
//	{
//		//scanf("%d",&a[i]);
//		//a[i]=i*10+1;
//		a[i] = rand() % 20 + 5;	//ͨ�����������ͬ�±������Ԫ�ظ�ֵ 
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);//�������ÿһ������Ԫ�� 
//
//	}
//	return 0;
//}
//
//
////һά�������������˳����ĳ����
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#define N 8
//int main()
//{
//	int i;
//	int a[N];
//	int x;
//	srand(9);
//	for (i = 0; i < N; i++)
//	{
//		//scanf("%d",&a[i]);
//		//a[i]=i*10+1;
//		a[i] = rand() % 20 + 5;
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//
//	}
//	printf("\n please input :");
//	scanf("%d", &x);
//	for (i = 0; i < N; i++)
//	{
//		if (x == a[i])break;
//
//	}
//	if (i < N)
//		printf("%d �������У�λ��Ϊ��%d ", x, i);
//	else
//		printf("not\n");
//
//	return 0;
//}
//
//
////�ҳ�һ�����е��������������� 
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#define N 10
//int main()
//{
//	int i, j;
//	int a[N];
//
//	srand(27);
//	for (i = 0; i < N; i++)
//	{
//		//scanf("%d",&a[i]);
//		//a[i]=i*10+1;
//		a[i] = rand() % 20 + 5;
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//
//	}
//	printf("\n");
//
//	for (i = 0; i < N; i++)
//	{
//		for (j = 2; j <= a[i] / 2; j++)
//			if (a[i] % j == 0) break;
//		if (j > a[i] / 2)
//		{
//			printf("%d ", a[i]);
//		}
//
//	}
//
//
//	return 0;
//}
//
//
//
//
//
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	float x, y, a;
//	for (y = 1.5; y > -1.5; y -= 0.1)
//	{
//		for (x = -1.5; x < 1.5; x += 0.05)
//		{
//			a = x * x + y * y - 1;
//			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
//		}
//		system("color 0c");
//		putchar('\n');
//	}
//	int main();
//	{
//		char arr1[] = "   I must have said I loved you hundreds of years ago";
//		char arr2[] = "   **************************************************";
//		int left = 0;
//		int right = strlen(arr1) - 1;
//		printf("%s\r", arr2);
//		Sleep(1000);
//		while (left <= right)
//		{
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			right--;
//			left++;
//			printf("%s\r", arr2);
//			Sleep(160);
//		}
//		printf("%s", arr2);
//		return 0;
//	}
//}
#include<stdio.h>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;//��Ҫ���ҵ�����
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
    int mid = (left + right) / 2;
    while (left <= right)
    {
        if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            printf("�ҵ��ˣ�%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("�Ҳ�����\n");
    }
    return 0;
}