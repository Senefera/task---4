#include "calcom.h"

int main() {

	int s=0 ;
	while(s != 4)
	{
		printf("1=add\n");
    	printf("2=subtract\n");
    	printf("3=multiply\n");
    	printf("4=divide\n");
    	printf("select operation: ");
		scanf("%d", &s);
		
		switch(s)
		{
		case 1: 
				printf("Input a and b\n");
                scanf("%lf %lf %lf %lf", &a->real, &a->img, &b->real, &b->img);
				add( a->real, a->img, b->real, b->img );
				printf("(%lf, %lf)\n", c->real, c->img);
				break;

		case 2: 
				printf("Input a and b\n");
                scanf("%lf %lf %lf %lf", &a->real, &a->img, &b->real, &b->img);
				sub( a->real, a->img, b->real, b->img );
				printf("(%lf, %lf)\n", c->real, c->img);
				break;
		case 3: 
				printf("Input a and b\n");
                scanf("%lf %lf %lf %lf", &a->real, &a->img, &b->real, &b->img);
				mult( a->real, a->img, b->real, b->img );
				printf("(%lf, %lf)\n", c->real, c->img);
				break;
		case 4: 
			    printf("Input a and b\n");
                scanf("%lf %lf %lf %lf", &a->real, &a->img, &b->real, &b->img);
				divide( a->real, a->img, b->real, b->img );
				printf("(%lf, %lf)\n", c->real, c->img);
				break;
		default:
                break;
		}
    
      
}
	return 0;
	
	
}
