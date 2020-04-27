#include<stdio.h>


struct books
{
	char bname[20];
	int pages;
	float price;
}bk[2];

void main()
{
	int i;	
	printf("\n enter book name,pages, price=\n");
	
	for(i=0;i<2;i++)
	{
	scanf("%s %d %f", bk[i].bname, &bk[i].pages, &bk[i].price);
	}
	
	for(i=0;i<2;i++)
	{
	printf("%s %d %f", bk[i].bname, bk[i].pages, bk[i].price);
	printf("\n");
	}
	
}
