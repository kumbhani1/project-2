#include<stdio.h>


main()
{
	char day;
	printf("M for monday.\n");
	printf("t for tuesday.\n");
	printf("W for wednesday.\n");
    printf("T for Thursday.\n");
    printf("F for Friday.\n");
    printf("S for Saturday.\n");
    printf("s for sunday.\n");
    
    scanf("%c", &day);
    
    switch(day)
    {
    	case'M':
    		printf("monday");
    		break;
		
		
		case't':
    		printf("tuesday");
    		break;
			
			
			case'W':
    		printf("wednesday");
    		break;
			
			case'T':
    		printf("thursday");
    		break;
			
			case'F':
    		printf("friday");
    		break;
			
			case'S':
    		printf("Saturday");
    		break;
			
			
			case's':
    		printf("sunday");
    		break;
			
			default:
			printf("enter value"); 
    
	}
  
}
  
  
