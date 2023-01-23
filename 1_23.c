#include <stdio.h>
#include <string.h>
#include <assert.h>
#define CRT_SECURE_NO_WARNINGS
//int digit(int n, int k)
//{
//	int count = 1;
//	while (n / 10)
//		count++;
//	if (count >= k)
//	{
//		while (--k)
//		{
//			n = n / 10;
//		}
//		return n % 10;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int n, k;
//	scanf_s("%d%d", &n, &k);
//	printf("%d", digit(n, k));
//	return 0;
//}
/*void fun(char arr[],int n)
{
	int i;
	for (i = 0; i < n; i++)
		arr[n - i - 1] = arr[i];
}
int main()
{
	char arr[100];
	gets(arr);
	int n = strlen(arr);
	fun(arr,n)*///;
	//printf("%s",arr);
//	return 0;
//}
//void delspace(char* t)
//{
//	int m, n;
//	char c[100];
//	for (m = 0, n = 0; t[m]; m++)
//	{
//		if (*(t+m)!=' ')
//		{
//			c[n] = t[m];
//			n++;
//		}
//	}
//	c[n] = '\0';
//	strcpy_s(t, 80, c);
//}
//void main()
//{
//	char s[100];
//	gets(s);
//	delspace(s);
//	puts(s);
//}
//int count(char* p, char* q)
//{
//	int num=0;
//	int m,n,k;
//	for (m = 0; p[m]; m++)
//	{
//		for (n = m, k = 0; q[k] == p[n]; k++, n++)
//		{
//			if (q[k + 1] == '\0')
//			{
//				num++;
//				break;
//			}
//		}
//	}
//	return num;
//}
//void main()
//{
//	char s[80], sub[80];
//	int n;
//	gets(s);
//	gets(sub);
//	printf("%d\n", count(s, sub));
//}
void fun_max(int arr[])
{
	int* p, * max, * min, k, l;
	max = min = arr;
	for (p = arr + 1; p < arr + 10; p++)
	{
		if (*p > *max)
			max = p;
		if (*p < min)
			min = p;
	}
	k = *max;
	l = *min;
	*max = arr[0];
	arr[0] = k;
	*min = arr[9];
	arr[9] = l;
}
void main()
{
	int arr[10];
	int i;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);
	int n = sizeof(arr) / sizeof(arr[0]);
	fun_max(arr);
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}