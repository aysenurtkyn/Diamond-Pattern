#include<stdio.h>
#include<string.h>

void printdiamondPattern(char[]);
int main()
{
	char inputString[51];
	printf("Fill the string:");
	scanf("%s",inputString);
	
	printdiamondPattern(inputString);
	
	return 0;
}

void printdiamondPattern(char str[])
{
	int length = strlen(str);
	if(length %2==0)
	{
		printf("the length must be an odd number");
		return;
	}
	
	int upperLength,lowerLength;
	upperLength = lowerLength = length/2;;
	int i,j;
	for(i=0 ; i<upperLength ; i++)
	{
		for(j=0 ; j<upperLength-i ; j++)
		{
			printf(" ");
		}
	
	    int k;
    	for(k=0 ; k<2*i+1 ; k++)
	    {
		printf("%c",str[k]);
	
	   
     	}
	    for(j=upperLength +1+i ; j< upperLength +(length-i) ; j++)
		{
			printf(" ");
				
		}
		for(k=0 ; k<2*i+1 ; k++)
		{
				printf("%c",str[k]);
				
		}		
       
	    printf("\n");		
		
    }
	printf("%s%s",str,str);
	printf("\n");
	
	for(i=0 ; i<lowerLength ;i++)
	{
		for(j=0 ; j<=i ; j++)
		{
		printf(" ");	
		}
		int k;
		for(k=0 ; k<length-2 * (i+1) ; k++)
		{
			printf("%c",str[k]);
		}
		for(j=length -1-i ; j<length +1+i ; j++)
		{
			printf(" ");
		}
		for(k=0 ; k< length -2*(i+1) ; k++)
		{
			printf("%c",str[k]);
			
		}
		printf("\n");
	}
	
	
}
	
	
	 
	
	
	
	
	
	
	
	
	

