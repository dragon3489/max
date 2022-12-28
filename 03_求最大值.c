#include<stdio.h>
#include<process.h>
int main()
{
	int a[10],i;
	int max;
	for(i=0;i<10;i++)							//输入10个数求最大值
	{
		scanf("%d",&a[i]);
	}
	max=a[0];

	for(i=1;i<10;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("%d\n",max);
	system("pause");
	return 0;
}