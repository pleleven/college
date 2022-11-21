#include<stdio.h>
#include<windows.h>
int main()
{
	float x, y, a;
	for (y = 1.5; y > -1.5; y -= 0.1)
	{
		for (x = -1.5; x < 1.5; x += 0.05)
		{
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
		}
		system("color 0c");
		putchar('\n');
	}
	int main();
	{
		char arr1[] = "   I must have said I loved you hundreds of years ago";
		char arr2[] = "   **************************************************";
		int left = 0;
		int right = strlen(arr1) - 1;
		printf("%s\r", arr2);
		Sleep(1000);
		while (left <= right)
		{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			right--;
			left++;
			printf("%s\r", arr2);
			Sleep(160);
		}
		printf("%s", arr2);
		return 0;
	}
}
