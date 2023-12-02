package com.Assignment;
import java.util.Scanner;

public class P1 {	
	   public static void main(String[] args) 
	   {
		  Scanner sc=new Scanner(System.in);
		System.out.println("Enter 3 numbers");
		System.out.println("enter number 1...");
		int num1=sc.nextInt();
		System.out.println("enter number 2...");
		int num2=sc.nextInt();
		System.out.println("enter number 3...");
		int num3=sc.nextInt();
		int max =num1;
		if(num2>max)
		{
			max=num2;
		}
		if(num3>max)
		{
			max=num3;
		}
		System.out.println("The greatest number is..."+max);
	   }
	}



