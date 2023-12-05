#include<stdio.h>

main()
{
	int i= 1;
	int n, sum=0;
	
	printf("Enter value =");
	scanf("%d" ,&n);
	
	do{
		printf("%d\n" ,i);
		sum = sum + i;
		i++;
	}while(i<=n);
	printf("sum = %d" ,sum);
}
