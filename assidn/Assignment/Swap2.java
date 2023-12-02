package com.Assignment;

import java.util.Scanner;

class swapp
{
	int temp;
	Scanner sc=new Scanner(System.in);
	
	public void swap()
	{
		System.out.println("Enter m value");
		int m=sc.nextInt();
		System.out.println("Enter n value");
		int n=sc.nextInt();
		temp=m;
		m=n;
		n=temp;
		System.out.println("m is.."+ m + " n is..."+  n);
	}
}
public class Swap2 
{
public static void main(String[] args) 
{
	swapp obj=new swapp();
	obj.swap();
}
}
