//Created by Raja Shah
#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main()
{
        long n;
        printf("Enter a number smaller than 100000 to search\n");
        scanf("%ld",&n);

        FILE *fp=fopen("rand_list.txt","r");
        int foundFlag=0;
	
        #pragma omp parallel
        for (char buff[255]; fgets(buff,255,fp)!=NULL; )
        {
                if(atoi(buff)==n)
                        foundFlag=1;
        }
                
        if(foundFlag==1)
                printf("Found");
	    else
		        printf("Not Found");
}

