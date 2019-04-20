#include<stdio.h>
#include<stdlib.h>
//调整数组使奇数全部都位于偶数前面
int main()
{
	int arr1[10] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int left = 0, right = 9;
	for (int i = 0; i < 10; ++i)
	{
		if (arr[i] % 2 == 1)
		{
			arr1[left] = arr[i];
			left++;
		}
		else
		{
			arr1[right] = arr[i];
			right--;
		}
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", arr1[i]);
	}
	system("pause");
	return 0;
}