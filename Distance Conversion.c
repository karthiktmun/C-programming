/*Conversion of distance*/

#include<stdio.h>
int main()
{
	float km,m,cm,ft,inch;
	printf("Enter the distance in Kilometer:");
	scanf("%f", &km);
	m=km*1000;
	cm=m*100;
	inch=cm/2.54;
	ft=inch/12;

	printf("Distance in meters=%f\n",m);
	printf("Distance in Centimeter=%f\n",cm);
	printf("Distance in Feet=%f\n", ft);
	printf("Distance in Inches=%f\n",inch);
	return 0;
}
