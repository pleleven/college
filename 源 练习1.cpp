//����36-6'
//#include<stdio.h>
//int main()
//{
//    int a[90];
//    int m, i, j;
//    scanf_s("%d", &m);
//    j = 0;
//    for (i = 1; i <= m; i++)
//    {
//        if ((i % 7) == 0 || (i % 11) == 0)
//            a[j++] = i;
//    }
//
//    for (i = 0; i < j; i++)
//        printf("%d\n", a[i]);
//}



//�������
//#include <stdio.h>
//void main()
//{
//    int a[60][60];
//    int i, j;
//    int n;
//    printf("����������:");
//    scanf_s("%d", &n);
//    for (i = 0; i < n; i++) 
//    {
        //for (j = 0; j <= i; j++)
        //{
        //    if (j == 0 || i == j)//�ڵ�һ�л����ڶԽ�����
        //    {
        //        a[i][j] = 1;
        //    }
        //    else
        //    {
        //        a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        //    }
        //}
//    }
//    //����������
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%d\t", a[i][j]);
//        }
//        printf("\n");
//    }
//
//}


//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	printf("%d", ~a);
//	return 0;
//}






//#include <stdio.h>
//#include <stdlib.h>
//#define N 5
//#define M 5
//int main()
//{
//	int i, j;
//	int a[N][M];
//	for (i = 0; i <= N; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			if (j >= i)
//			{
//				a[i][j] = 1	;
//			}
//			else
//				a[i][j] = i - j + 1;
//		}
//	}
//	for (i = 0; i <= N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int a;
//    scanf_s("%d", &n);
//    for (n = 1; n <= 5; n++)
//    
//    { 
//        a = n * (n - 1);
//
//    
//    }
//
//
//}


//����������˳������
//#include<stdio.h>
//
//int main()
//{
//    int a, b, c;
//    scanf_s("%d %d %d", &a, &b, &c);
//    if (a < c)
//    {
//        int tep = c;
//        c = a;
//        a = tep;
//    }
//    if (a < b)
//    {
//        int tep = b;
//        b = a;
//        a = tep;
//    }
//    if (b<c)
//    {
//        int tep = c;
//        c = b;
//        b = tep;
//    }
//        printf("%d %d %d", a, b, c);
//    return 0;
//}



//��������Ϸ
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<string.h>
//void menu()
//{
//    printf("##############################################\n");
//    printf("#################1.play game##################\n");
//    printf("#################2.exit#######################\n");
//    printf("##############################################\n");
//}
//void game()
//{
//    int x = 0;
//    int guess = 0;
//    x = rand() % 100 + 1;
//    while (1)
//    {
//        printf("�������");
//        scanf_s("%d", &guess);
//        if (guess > x)
//        {
//            printf("�´���\n");
//        }
//        else if (guess < x)
//        {
//            printf("��С��\n");
//        }
//        else
//        {
//            printf("��ϲ������ˣ�\n");
//            break;
//        }
//    }
//}
//int main()
//{
//    int input=0;
//    srand((unsigned int)time(NULL));
//    do  
//    {
//        menu();
//        printf("��ѡ��(1/0):");
//        scanf_s("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("�˳���Ϸ");
//            break;
//        default:
//            printf("ѡ�����������ѡ��");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}



//��ӡ100��200֮�������
//#include<stdio.h>
//
//int main()
//{
//    int count = 0;
//    int i = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        if (i == j)
//        {
//            count++;
//            printf("%5d\n", i);
//        }
//    }
//    printf("\n%d",count);
//    return 0;
//}

//��ӡ�����������棩


//int is_prime(int n)
//{
//    int j = 0;
//    for (j = 2; j < n; j++)
//    {
//        if (n % j == 0)
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime(i) == 1)
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}




//���ַ�����
//#include<stdio.h>
//
// int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;//��Ҫ���ҵ�����
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//    
//   while(left<=right)
//{
//       int mid = (left + right) / 2;
//    if (arr[mid] < k) 
//    {
//        left = mid + 1;
//    }
//    else if (arr[mid] > k)
//    {
//        right = mid - 1;
//    }
//    else
//    {
//        printf("�ҵ��ˣ�%d\n", mid);
//        break;
//    }
//}
//   if (left > right)
//   {
//       printf("�Ҳ�����\n");
//   }
//    return 0;
//}



//���ַ����Һ�����

//#include<stdio.h>
//int binary_search(int arr[], int key, int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] > key)
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < key)
//        {
//            left = mid - 1; 
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int key = 7;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = binary_search(arr, key, sz);
//    if (-1 == ret)
//    {
//        printf("�Ҳ���\n");
//    }
//    else
//    {
//        printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//����Ĳ���ȫ��ʼ��
//	   //���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���������ݸ�ֵ,������ʹ���±������ʵģ��±��0��ʼ�����ԣ�
//	int i = 0;//���±꣬��ʱ�����Ǳ���
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//������������
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//    {
//        printf("&arr[%d] = %p\n", i, &arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//    for (arr[i][j] = 0; arr[i][j] < 12; arr[i][j]++)
//    {
//        printf("%-3d ", arr[i][j]);
//
//        printf("\n");
//    }
//	return 0;
//}	

//#include <stdio.h>
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}	
//	}												
//	return 0;
//}

//#include<stdio.h>
//
//void Lisa(int arr[])
//{
//    printf("a = %d\n", sizeof(arr));//���齵ά��ָ����ָ���С����32λϵͳ��ָ�붼Ϊ4�ֽ�
//    printf("b = %d\n", sizeof(arr[0]));//������Ԫ�صĴ�С
//    printf("sz =a / b  = %d\n", sizeof(arr) / sizeof(arr[0]));//��СΪ1
//    printf("arr = %p\n", arr);//������Ԫ�ص�ַ
//    printf("&arr = %p\n", &arr);//ָ��ĵ�ַ
//    printf("arr + 1 = %p\n", arr + 1);//��һ��Ԫ�صĵ�ַ
//    printf("&arr + 1 = %p\n", &arr + 1);//ָ����һ��ĵ�ַ
//}
//
//int main(void)
//{
//    int Shuzu[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    printf("a = %d\n", sizeof(Shuzu));//�����ܴ�С
//    printf("b = %d\n", sizeof(Shuzu[0]));//������Ԫ�ش�С
//    printf("sz =a / b = %d\n", sizeof(Shuzu) / sizeof(Shuzu[0]));//����Ԫ�ظ���
//    printf("Shuzu = %p\n", Shuzu);//������Ԫ�ص�ַ
//    printf("&Shuzu = %p\n", &Shuzu);//�����������飬���ǵ�ַ������Ԫ�ص�ַ
//    printf("Shuzu + 1 = %p\n", Shuzu + 1);//��һ��Ԫ�صĵ�ַ
//    printf("&Shuzu + 1 = %p\n", &Shuzu + 1);//�����������������ŵĵ�ַ
//                                                           //��ʱ�õ�ַ��ȥ��Ԫ�ص�ַ���������С
//    printf("\n\n");
//    Lisa(Shuzu);
//
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int a[4] = { 20, 345, 700, 22 };
//    int b[4] = { 56720, 9999, 20098, 2 };
//    int c[4] = { 233, 205, 1, 6666 };
//    int d[4] = { 34, 0, 23, 23006783 };
//
//
//    printf("%-9d %-9d %-9d %-9d\n", a[0], a[1], a[2], a[3]);
//    printf("%-9d %-9d %-9d %-9d\n", b[0], b[1], b[2], b[3]);
//    printf("%-9d %-9d %-9d %-9d\n", c[0], c[1], c[2], c[3]);
//    printf("%-9d %-9d %-9d %-9d\n", d[0], d[1], d[2], d[3]);
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i, a[10];
//    //��1~10����������
//    for (i = 0; i < 10; i++)
//    {
//        a[i] = (i + 1);
//        printf("%d ", a[i]);
//    }
//
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i, a[10];
//
//    //�ӿ���̨��ȡ�û�����
//    for (i = 0; i < 10; i++)             //���� a ������±��� 9��Ҳ���ǲ��ܳ��� 10
//    {
//        scanf_s("%d", &a[i]);         //ע��ȡ��ַ�� &����Ҫ����Ŷ
//    }
//
//    //�����������Ԫ��
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", a[i]);
//    }
//
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int i, n, thisindex=0 ;
//    int a[10] = { 1,10,6,296,177,23,0,100,34,999 };
//    scanf_s("%d", &n);
//    for (i = 0; i < 10; i++)
//    {
//        if (a[i] == n)           //if������Ҫ��==���Һ����ô�����{}
//        {
//            thisindex = i;      //��i��ֵ��thisindex
//            break;            //�ҵ���ȵ�������ӡ�±꣬����ѭ��
//        }
//        
//    }
//    if (thisindex < 0)
//    {
//        printf("%d isn't  in the array.\n", n);
//    }
//    else  
//    {
//        printf("%d is in the array, it's index is %d.\n", n, thisindex);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int m, n;
//    scanf_s("%d%d", &m, &n);
//    printf("sum=%d\n", add(m, n));
//    printf("m=%d,n=%d\n", m, n);
//    return 0;
//}
//
//
//int pcb(int a, int b);
//{
//    int r;
//    r = a % b;
//    while (r != 0)
//    {
//        a = b;
//        b = r;
//        r = a % b;
//    }
//    return b;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//    char input[20] = { 0 };
//    system("shutdown -s -t 100");
//    again: printf("��ע�⣬���ĵ��Ի���100��ͻ�ػ������롰��¬־����ɵ�Ƽ��ɽ���\n");
//    scanf_s("%s", input);
//    if (input == "��¬־����ɵ��")
//    {
//        system("shutdown -a");
//    }
//    else
//    { 
//        goto again;
//    }
//    return 0;
//}
   