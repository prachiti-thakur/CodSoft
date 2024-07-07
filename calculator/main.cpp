#include "cal.h"

int main(){
	int choice;
	calculator cal;
	do{
		cout<<"\n\n******************-Simple Arithmetic Calculator-*************************\n\n";
		cout<<"\tEnter any two numbers:\n";
		int a,b;
		cout<<"\tEnter the number 1: ";
		cin>>a;
		cout<<"\tEnter the number 2: ";
		cin>>b;
		
		cout<<"_________________________________________________________________________\n";
		cout<<"\tselect  the operation:\n";
		
		cout<<"0.Exit:\n";
		cout<<"1.Addition\n";
		cout<<"2.substraction\n";
		cout<<"3.multiplication\n";
		cout<<"4.Division\n";
		cout<<"_________________________________________________________________________\n";
		cout<<"Enter the choice:";
		cin>>choice;
		
		switch(choice)
		{
			case 0:{
				cout<<"Exit!!\n";
				cout<<"Thank you for visit!!";
				break;
			}
			case 1:{
				int result=cal.add(a,b);
				cout<<"\nAddition :"<<result<<"\n";
				break;
			}
			case 2:{
				int result=cal.sub(a,b);
				cout<<"\nSubstraction :"<<result<<"\n";
				break;
			}
			case 3:{
				int result=cal.mul(a,b);
				cout<<"\nMultiplication:"<<result<<"\n";
				break;
			}
			case 4:{
				int result=cal.div(a,b);
				cout<<"\n Division :"<<result<<"\n";
				break;
			}
		}
		
		
	}while(choice!=0);
	
	return 0;
}