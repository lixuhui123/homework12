#include<stdio.h>
#include<stdlib.h>
//���Ͼ���
//��һ����ά����
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N)
//���Ͼ�����ص�����ߵı��ұߵ�С���ϱߵı��±ߵ�С
//��row��ʾ�У�col��ʾ��
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
		printf("�ҵ���\n");
	}
	else
		printf("û�ҵ�\n");
	system("pause");
	return 0;
}