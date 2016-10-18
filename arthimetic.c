/*
Student Name : Kabir D Shrestha\
Subject : bProgramming Fundamental
Lab No. : 05
Program : Write a program to add to numbers
Date :2016-10-18
*/
#include<stdio.h>
	int main(){
		float a,b,sum,diff,mul,div;
		printf("Enter the first number:");
		scanf("%f",&a);
		
		printf("Enter the second number:");
		scanf("%f",&b);
		
		sum=a+b;
		printf("The sum of two numbers is:%f",sum);
		
		diff=a-b;
		printf("The differnce of two numbers is:%f",diff);
		
		mul=a*b;
		printf("The multiplication of two numbers is:%f",mul);
		
		div=a/b;
		printf("The division of two numbers is:%f",div);
		
	}
