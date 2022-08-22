//18.Writeaprogram ofto find outthe Area of Triangle,RectangleandCircle using If Condition.(Must Be 
//MenuDriven)
#include<stdio.h>
main()
{
	int l,w,b,h,r,p=3.14,a;
	float area;
	printf("\n option of area :");
	printf("\n 1. area of triangle :");
	printf("\n 2. area of rectangle :");
	printf("\n 3. area of circle :");
		scanf("%d",&a);
		if(a==1)
    {	
    printf("\n area of triangle :%d",a);
   	scanf("%d%d",&b,&h);
   	area=1/2*b*h;
    } 
	 if(a==2)
	{
	printf("\n area of rectangle :%d",a);
	 scanf("%d%d",&l,&w);
	 area=l*w;
}
	 if(a==3)
	{
	printf("\n area of circle :%d",a);
	 scanf("%d",&r);
	 area= 3.14*r*r;
    }
    printf("\n the area is :%f",area);

}

