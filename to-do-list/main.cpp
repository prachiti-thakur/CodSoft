#include"task.h"
#include"todolist.h"
int main(){

//Array of tasks
	TodoList todo(20);
	
	int choice;
	
	do{
		cout<<"\n\n********************************************************\n";
		cout<<"___________________To-Do-List___________________________\n";
		cout<<"\t0.Exit\n";
		cout<<"\t1.Add Task\n";
		cout<<"\t2.View Task\n";
		cout<<"\t3.Mark as completed / Pending\n";
		cout<<"\t4.Remove Task\n";
		cout<<"\n********************************************************\n";
		cout<<"Enter the choice:";
		cin>>choice;
		
		switch(choice){
			case 0:
				{
					cout<<"Exit!!\n";
					cout<<"Thank you for visiting!!\n";
					break;
				}
			case 1:{
				todo.addTask();
				break;
			}
			case 2:{
				
				todo.viewTask();
				break;
			}
			case 3:{
				todo.MarkTask();
				break;
			}
			case 4:{
				todo.removeTask();
				break;
			}
			default:{
				cout<<"\nInvalid Input\n";
				break;
			}
		}
		
	}while(choice!=0);
	return 0;
}