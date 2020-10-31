#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Digit(int array, int cout[10]);
int main()
{
	int count[10] = {};
	int begin;
	int end;
	printf("Enter start number : ");
	scanf("%d",begin);
	printf("Enter stop number : ");
	if(begin<0 || begin > end || end< 0)
	{
		printf("Error");
		return 0;
	}
	int* array;
	array = (int*)malloc(end * sizeof(*array));
	for (int i = 0; i < end; i++)
	{
		array[i] = i+1 ;
	}
	for (int i = 0; i < end; i++)
	{
		Digit(array[i],count);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d : %d\n",i,count[i]);
	}
	return 0;
}
void Digit(int array,int cout[10])
{
	while (array > 0)
	{
		int a = array % 10;
		switch (a)
		{
		case 0:
			cout[a]++;
			array /= 10;
			break;
		case 1:
			cout[a]++;
			array /= 10;
			break;
		case 2:
			cout[a]++;
			array /= 10;
			break;
		case 3:
			cout[a]++;
			array /= 10;
			break;
		case 4:
			cout[a]++;
			array /= 10;
			break;
		case 5:
			cout[a]++;
			array /= 10;
			break;
		case 6:
			cout[a]++;
			array /= 10;
			break;
		case 7:
			cout[a]++;
			array /= 10;
			break;
		case 8:
			cout[a]++;
			array /= 10;
			break;
		case 9:
			cout[a]++;
			array /= 10;
			break;
		}
	}
}
