//#include<stdio.h>
//void function(int n)
//{
//	int sum = n;
//	int i;
//	for (i = 2; i * i <= n; ++i)
//	{
//		if (n % i == 0)
//		{
//			printf("%d ", i);
//			while (n % i == 0)
//			{
//				n = n / i;
//			}
//		}
//	}
//	if (n > 1)
//	{
//		printf("%d", n);
//	}
//	else
//	{
//		printf("\n");
//	}
//}
//int main(void)
//{
//	int n;
//	scanf_s("%d", &n);
//	function(n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n, c, d, x, i;
//	scanf_s("%d" & n);
//	int a[n];
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &a[i]);
//	int b[n];
//	for (i = 0; i < n; i++)
//	{
//		for (c = i + 1, x = 0; c < n; c++)
//		{
//			if (a[i] == a[c])
//				x++;
//		}
//		b[i] = x;
//	}
//	for (i = 0, x = 0, d = a[0]; i < n; i++)
//	{
//		if (b[i] > x)
//		{
//			x = b[i];
//			d = a[i];
//		}
//		else if (b[i] == x)
//		{
//			d = a[i] < d ? a[i] : d;
//		}
//	}
//		printf("%d", d);
//		return 0;
//	
//}

//众数题
//#include<stdio.h>
//using namespace std;
//
//const int N = 101;
//int n, m, cnt, a[N];
//int max(int a, int b)
//{
//	if (a > b)return a;
//	return b;
//}
//
//int main()
//{
//	scanf_s("%d", &n);
//	for(int i = 1; i <= n; i++)
//	{
//		int k;
//		scanf_s("%d", &k);
//		a[k]++;
//	}
//	for (int i = 1; i <= 100; i++)m = max(m, a[i]);
//	for (int i = 1; i <= 100; i++)
//		if (m == a[i])
//			cnt++;
//	printf("%d\n", cnt);
//	for (int i = 1; i <= 100; i++)
//		if (m == a[i])
//			printf("%d ", i);
//	return 0;
//}


//多维数组的访问
#include<math.h>
#include<stdio.h>
#include<iostream>
#define ll long long

using namespace std;

const int N = 15;

int n, q;
int a[N], b[N];
ll ans[10010];

ll solve()
{
	for (int i = 1; i <= n; i++) scanf_s("%d", &b[i]);

		ll res = 0;

	for (int i = 0; i <= n; i++)
	{
		if (i
	return res;
}

int main()
{
	scanf("%d%d", &n, &q);


	for (int i = 1; i <= n; i++)scanf("%d", &a[i]);
	a[0] = 1;

	while (q--)cout << solve() << '\n';
	for (int i = 0; i < q; i++)ans[i] = solve();
	for (int i = 0; i < q; i++)cout << ans[i] << '\n';
	return 0;
}


//#include<stdio.h>
//#include<string.h>
//
//const int N = 10010;
//
//char s[N], t[N];
//
//int main()
//{
//	scanf_s("%s%s", s, t);
//
//	int d = strlen(s) + strlen(t);
//	for (int i = 1, si = 0, ti = 0; i <= d; i++)
//	{
//		if (i % 2) printf("%c", s[si++]);
//		else printf("%c", t[ti++]);
//	}
//	return 0;
//}