
#pragma once
#include<iostream>
using namespace std;
class Task{
	static int sr_no;
	int tno;
	char task[30];
	char status[20];
	
	public:
	Task();
	Task(char*);
	
	void setTask(char*);
	void setStatus(char*);
	int getTno();
	char* getTask();
	char* getStatus();
	
	void display();
	static void setSr_no(int);
	static int getSr_no();
	void displayTask();
	
};