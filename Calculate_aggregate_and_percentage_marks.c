/*Calculate of aggregate and percentage of marks*/
#include<stdio.h>
int main()
{
	int m1, m2,m3,m4, m5, arrg;
	float per;
	printf("\n Enter marks for the 5 subjects.");
	scanf("%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
	arrg=m1+m2+m3+m4+m5;
	per=arrg/5;

	printf("Aggregrate Marks=%d\n", arrg);
	printf("Percentage Marks=%f\n", per);
	return 0;
}
