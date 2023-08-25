#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char name[50]; 
	char bir1[]="Chicken" ,bir2[]="Vegetable" ,bir3[]="Paneer" ,bir4[]="Egg";
	char cake1[]="Vanilla",cake2[]="Butterscotch",cake3[]="Chocolate",cake4[]="Blueberry";
	char bur1[]="Chicken", bur2[]="Double Cheese", bur3[]="Vegetable",bur4[]="Paneer";
	char gotobeginning ;
	int choice=0,b,pizzaoption1, qty;// time=40;
	starting:
	system("cls");
	
	cout<<"Welcome to Food Court Restaurant"<<endl;;
	
	cout<<"May I know your good name please: ";
	cin.getline(name, 50);
	cout<<"Nice to meet you "<<name<<endl<<"What would you like to order?"<<endl;

	cout<<"1.Biriyani\t" "2.Cake\n" "3.Burger\t ";
	cout<<"Please select your prefered dish: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"1) "<<bir1<<"\n";
		cout<<"2) "<<bir2<<"\n";
		cout<<"3) "<<bir3<<"\n";
		cout<<"4) "<<bir4<<"\n";
		cout<<"Please choose your prefered biriyani: "<<endl;
		cin>>b;
		if(b>=1 && b<=4)
		{
			
			cout<<"Please Enter Quantity: ";
			cin>>qty;
			switch(b)
			{
			case 1: choice = 600.00*qty;
			break;

			case 2: choice = 300.00*qty;
			break;

			case 3: choice = 500.00*qty;
			break;
            
            case 4: choice=450.00*qty;
            break;

			      }
			system("cls");
			switch (b)
			{
			 case 1:
			 cout<<"Your Bill: "<<endl;
			 cout<<" "<<qty<<" "<<bir1<<" "<<endl;
			 cout<<"Your Total Bill is:  "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant "<<endl;
			 break;
			 case 2:
			 cout<<"Your Bill: "<<endl;
			 cout<<" "<<qty<<" "<<bir2<<" "<<endl;
			 cout<<"Your Total Bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant "<<endl;
			 break;
			 case 3:
			 cout<<"Your Bill: "<<endl;
			 cout<<""<<qty<<" "<<bir3<<" "<<endl;
			 cout<<"Your Total Bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant "<<endl;
			 break;
			 case 4:
			 cout<<"Your Bill: "<<endl;
			 cout<<""<<qty<<" "<<bir4<<" "<<endl;
			 cout<<"Your Total Bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant "<<endl;
			 break;

			}
			cout<<"Do you want to continue?Press Y / N:"<<endl;
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  
			}



		}

	 }


	 else if(choice==2)
	 {
		cout<<"1. "<<cake1<<endl;
		cout<<"2. "<<cake2<<endl;
		cout<<"3. "<<cake3<<endl;
		cout<<"4 "<<cake4<<endl;
		cout<<"Please choose your prefered flavour for cake: ";
		cin>>b;
		if(b>=1 && b<=4)
		{
			cout<<"Please Enter Quantity: ";
			cin>>qty;
			switch(b)
			{
			case 1: choice = 600.00*qty;
			break;

			case 2: choice = 900.00*qty;
			break;

			case 3: choice = 1000.00*qty;
			break;
			
			case 4: choice = 1200.00*qty;
			break;

			}
			system("cls");
			switch (b)
			{
			 case 1:
			 cout<<"Your Bill: "<<endl;
			 cout<<" "<<qty<<" "<<cake1<<" "<<endl;
			 cout<<"Your Total Bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant"<<endl;
			 break;
			 case 2:
			 cout<<"Your Bill: "<<endl;
			 cout<<" "<<qty<<"  "<<cake2<<" "<<endl;
			 cout<<" Your Total Bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant"<<endl;
			 break;
			 
			 case 3:
			 cout<<"Your Bill: "<<endl;
			 cout<<" "<<qty<<" "<<cake3<<" "<<endl;
			 cout<<"Your Total Bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant"<<endl;
			 break;
             case 4:
			 cout<<"Your Bill: "<<endl;
			 cout<<" "<<qty<<" "<<cake4<<" "<<endl;
			 cout<<"Your Total Bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant"<<endl;
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  //return 0;
			}

 }
}
	else if(choice==3)
	 {
		cout<<"1.  "<<bur1<<endl;
		cout<<"2.  "<<bur2<<endl;
		cout<<"3.  "<<bur3<<endl;
		cout<<"4. "<<bur4<<endl;
		cout<<"Please chooose your favourite burger: "<<endl;
		cin>>b;
		if(b>=1 && b<=4)
		{
			cout<<"Please Enter Quantity: ";
			cin>>qty;
			switch(b)
			{
			case 1: choice = 160.00*qty;
			break;

			case 2: choice = 200.00*qty;
			break;

			case 3: choice = 100.00*qty;
			break;
			
			case 4: choice = 250.00*qty;
			break;

			}
			system("cls");
			switch (b)
			{
			 case 1:
			 cout<<"Your Bill: "<<endl;
			 cout<<" "<<qty<<" "<<bur1<<" "<<endl;
			 cout<<"Your total bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant"<<endl;
			 break;
			 case 2:
			 cout<<"Your Bill: "<<endl;
			 cout<<" "<<qty<<"  "<<bur2<<" "<<endl;
			 cout<<"Your Total Bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant"<<endl;
			 break;
			 case 3:
			 cout<<"Your Bill: "<<endl;
			 cout<<""<<qty<<" "<<bur3<<" "<<endl;
			 cout<<"Your Total Bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant"<<endl;
			 break;
             case 4:
			 cout<<"Your Bill: "<<endl;
			 cout<<""<<qty<<" "<<bur4<<" "<<endl;
			 cout<<"Your Total Bill is: "<<choice<<endl;
			 cout<<"Thank you for choosing food court restaurant"<<endl;
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  
			}
			}
			}

			else
			{
				system("cls");
				cout<<"Please choose proper choice";
				cout<<"Do you want to continue? Y / N: " ;
				cin>>gotobeginning;

				if(gotobeginning=='Y' || gotobeginning=='y')
				{
				  goto starting;
			  
			}
			}

     getch();
}