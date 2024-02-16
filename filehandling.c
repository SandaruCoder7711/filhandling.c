#include<stdio.h>
int main (){
    int num1,num2,num3;
	FILE *ip;
	ip = fopen("file.txt", "w");
	
	printf("enter the no1 :");
	scanf("%d",&num1);
	
	printf("enter the no2 :");
	scanf("%d",&num2);
	
	num3 = num1 + num2;
	
	fprintf(ip ,"%d + %d = %d",num1, num2, num3);
	
	fclose(ip);
	
	ip = fopen("file.txt", "r");
	fscanf(ip,"%d + %d = %d ",&num1,&num2,&num3);
	
	printf("%d + %d = %d",num1, num2, num3);
	
	fclose(ip);
   return 0;
}
