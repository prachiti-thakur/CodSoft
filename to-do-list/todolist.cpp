#include"task.h"
#include"todolist.h"


TodoList::TodoList(int s){
	this->size=s;
	this->index=-1;
	this->list=new Task[this->size];
}

void TodoList::setIndex(int i){
	this->index=i;
}
int TodoList::getIndex(){
	return this->index;
}
void TodoList::addTask(){
	
	this->index++;
	
	char tsk[30];
	cout<<"\nEnter the Task:";
	cin.ignore();
	cin.getline(tsk,30);
	Task t(tsk);//obj
	
	t.display();
	
	list[index]=t;
	
}

void TodoList::viewTask(){
	
	cout<<"\n____________________________________________\n";
	cout<<"\n|__Sr_No__|________TASK________|___Status___|\n";
	for(int i=0;i<=index;i++){
		list[i].displayTask();
	}
}
void TodoList::MarkTask(){
	
	int mark,no,flag=0;
	cout<<"Enter the sr_no";
	cin>>no;
	for(int i=0;i<=index;i++){
		if(list[i].getTno()==no){
			flag=1;
			cout<<"\nEnter the choice:\n";
			cout<<"\t1.completed\n";
			cout<<"\t2.Pending\n";
			cin>>mark;
			
			if(mark==1){
				this->list[i].setStatus("complete");
				cout<<"update successfully!\n";
				this->list[i].display();
			}else if(mark==2){
				this->list[i].setStatus("Pending");
				cout<<"update successfully!\n";
				this->list[i].display();
			}
			else{
				cout<<"Invalid Input\n";
			}
		return;
		}
	}//out of for loop
	
	if(flag==0){
		cout<<"Task not found\n";
	}
	
	}
void TodoList::removeTask(){
	int no,flag=0;
	cout<<"Enter the sr_no of task to Remove:";
	cin>>no;
	
	for(int i=0;i<=index;i++){
		if(list[i].getTno()==no){
			flag=1;
			//shifting
			list[i].display();
			for(int j=i;j<index;j++){
				list[j]=list[j+1];
			}
			//decrese the size of index
			this->index--;
			cout<<"\nSuccessfully delete !!\n";
		}
	}//out of for loop
	
	if(flag=0){
		cout<<"Task not found!!\n";
	}
}
