#include<stdio.h>

main()
{

  char k;
  printf("enter your value =");
  scanf("%c",&k);
  
  if (k>='a'&&k<='z')
  {
  	printf("value is character");
  }
  	
  else if (k>='0' && k<='9')	
  {
  	
  	printf("value is digit print ");
  	
  	
  }
  
  else 
  {
  	
  	 printf ("value is special character");
  }
  
}
