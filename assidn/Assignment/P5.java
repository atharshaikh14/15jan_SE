package com.Assignment;

import java.util.Scanner;

public class P5 
{
  public static void main(String[] args) 
  {
	 Scanner sc=new Scanner(System.in);
	 int sum=0;
	 
	 for(int i=0;i<5;i++)
	 {
		 System.out.println("Enter a number");
         int num=sc.nextInt();
         sum +=num;
         
	 }
	 double average=(double)sum/5.0;
	 System.out.println("The sum is.."+sum);
	 System.out.println("The average is.."+average);
  }
}
