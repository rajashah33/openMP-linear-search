//Created by Raja Shah
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	fp = fopen("rand_list.txt","w");

	for( long i=1; i<10000000; i++)
	{
		long n=(rand()%(10000000 +1)) +0;
		fprintf(fp,"%ld\n",n);
	}
	
	fclose(fp);
}
