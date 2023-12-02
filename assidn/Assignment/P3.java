package com.Assignment;

import java.util.Scanner;

public class P3 
{
  public static void main(String[] args) 
  {
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter year to find out wheater it is leap year or not");
    int year=sc.nextInt();
    if(year%2==0)
    {
    	System.out.println("It's a leap year");
    }
    else
    {
    	System.out.println("Not a leap years");
    }
	
  }
}
