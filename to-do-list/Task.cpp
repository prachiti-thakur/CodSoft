#include"task.h"
#include<string.h>
int Task::sr_no=0;

Task::Task(){
	this->tno=0;
	strcpy(this->task,"NULL");
	strcpy(this->status,"NULL");
}
Task::Task(char* tsk){
	
	int no=Task::sr_no;
	sr_no=++no;
	this->tno=sr_no;
	strcpy(this->task,tsk);
	strcpy(this->status,"incomplete");//initial incomplete
}


int Task::getTno(){
	return this->tno;
}

void Task::setSr_no(int no){
	sr_no= no;
}
void Task::setTask(char* tsk){
	strcpy(this->task,tsk);
}
void Task::setStatus(char* c){
	strcpy(this->status,c);
}
int Task::getSr_no(){
	return sr_no;
}
char* Task::getTask(){
	return this->task;
}
char* Task::getStatus(){
	return this->status;
}

void Task::display(){
	cout<<"Task:\n";
	cout<<"sr_no:"<<this->tno<<"\n";
	cout<<"Task:"<<this->task<<"\n";
	cout<<"Status:"<<this->status<<"\n";
}

void Task::displayTask(){
	cout<<"\n____________________________________________\n";
	printf("|%9d|%20s|%12s|",this->tno,this->task,this->status);
	cout<<"\n____________________________________________\n";
}