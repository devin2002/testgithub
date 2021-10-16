#include<stdio.h>
int main(void){
	int row , col;
	//first star line
	for(row = 1;row <= 7;row++)
	{
		for(col = 1;col<=row;col++)
		{
			printf("*");
		    
		      
	    } 
	  printf("\n");
	}
	//second star line
	int z = 7;
	for(row = 0;row <= 4;row++)
	{
		for(col = 1; col<=z;col++)
		{
			
			printf("*");
			
			
		}
	  printf("\n");
	  z=z-2;
	}
	return 0;
}
