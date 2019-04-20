#include<stdio.h>
#include<stdlib.h>
//杨氏矩阵
//有一个二维数组
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N)
//杨氏矩阵的特点是左边的比右边的小，上边的比下边的小
//用row表示行，col表示列
int zhao_shu(int arr[][3],int a, int row, int col)
{
	while (row <= 2 && col >= 0)
	{
		if (arr[row][col] > a)
		{
			col -= 1;
		}
		else if (arr[row][col] < a)
		{
			row += 1;
		}
		else if (arr[row][col] == a)
		{
			return 1;
			break;
		}

	}
	return 0;
}
int main()
{
	int arr[][3] = { {1,2,3},{4,5,6},{7,8,9}};
	int a = 12, row = 0, col = 2,c=0;
	c=zhao_shu(arr,a, row, col);
	if (c == 1)
	{
		printf("找到了\n");
	}
	else
		printf("没找到\n");
	system("pause");
	return 0;
}