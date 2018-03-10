#include <stdio.h>

int main(void)
{	int cnt=0,n;
	float egpa,gpts,gpa,pts;
	
	printf("Hi dude,your gpa will be computed.:D\nYou can find relative data on jwglxt.buct.edu.cn");
	printf("\nHow many courses do you have in the term?");
	scanf("%d",&n);
	while (n<=0){
		printf("\nERROR:Positive integer required,\n\n");
		printf("How many courses do you have in the term?");
		scanf("\n%d",&n);
}
	while (cnt++<n){
		printf("\nEnter the points of your course %d\n",cnt);
		scanf("%f",&pts);
		printf("\nEnter the gpa of the course you input.\n");
		scanf("%f",&gpa);
		gpts= gpts+pts ;
		gpa=(egpa*(gpts-pts)+gpa*pts)/gpts ;
		egpa=gpa;
	}
	printf("\nYour gpa is %.2f.",gpa);
	if (gpa>=4)
		printf("Elcellent!");
	else if (gpa>=3)
		printf("Good job!");
	else if (gpa>=2)
		printf("You should work hard next term!");
	else
		printf("What have you done...");
	return 0;
}
