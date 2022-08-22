//16. Write Program use switch statement. Display Monday toSunday
#include<stdio.h>
main()
{
	int num;
	printf("enter a num:");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
	printf("sunday");
	break;
	case 2:
    printf("monday");
    break;
    case 3:
    printf("tuesday");
    break;
    case 4:
    printf("wednesday");
    break;
    case 5:
    printf("thursday");
    break;
    case 6:
    printf("friday");
    break;
    case 7:
    printf("saturday");
}
}

