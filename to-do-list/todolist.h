#include"task.h"
class TodoList{
//array of Tasks
	int size;	
	Task* list;
	int index;
	public:
	TodoList(int);
	int getIndex();
	void addTask();
	void viewTask();
	void MarkTask();
	void removeTask();
	void setIndex(int);
	
	
	

};