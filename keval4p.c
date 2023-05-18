#include<stdio.h>


main()
 
 {
 	int a,b,c,d;
 	printf("enter value  A=");
 	scanf("%d",&a);
 	printf("enter value B=");
 	scanf("%d",&b);
 	printf("enter value c=");
 	scanf("%d", &c);
	printf("enter value d=");
	scanf ("%d",&d);  	
	
	if(a>b)
	{
		if(a>c)
		{
		if(a>d)
		{
				printf ("A value is max");
		}
		else 
		{
		  	printf ("D value is max");
		}
		}
		else 
		{
			printf ("C value is max");
		}
	}
	else
    {
		if(b>c)
		{
		if(b>d)
		{
		   printf ("B value is max");
     	}
    	else
	    {
		   printf("D value  is max ");
	    }
       }
       else
       {
	   if (c>d)
	   {
		printf ("C value is max");
      	}
		else
	   {
			printf("D value is max");
	   }  
	   }
    }
		

}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	


	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 
 
 
 
 
 
 
 
 
