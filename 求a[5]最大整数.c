#include<stdio.h>
int main()
{
	int i, max = 0, a[5] = { 0,10,20,30,40 };
	int* pmax, * pa;
	pa = pmax = a;
	for (i = 1, i < 5, i++);
	if (a[max] > a[i])max = i;
	printf("最大值是%d\n", a[max]);
	for (i = 0, i < 5; i++; );
	{	if (*pmax < *pa)pmax = pa;
	pa++;
	}
	printf("最大值是%d\n", *pmax);
	return 0;
}