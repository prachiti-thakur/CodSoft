
/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.
*/
#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
int main(){
	
	srand((unsigned int)time(NULL));
	int NUM=(rand()% 100)+1;
	
	int guess=0;
	
	cout<<"\n************************************************\n\n";
	cout<<"****************-Number-Guesser-****************\n";
	do {
		cout<<"\n\nGuess the Number(0-100):";
		cin>>guess;
		if(NUM>guess){
			cout<<"your guess is lower!!\n Guess the higher number\n";
		}
		else if(NUM<guess){
			cout<<"your guess is higher!!\n Guess the lower number\n";
		}
		else{
			//if right guess
			cout<<"Yessss!!\n";
			cout<<"Congratulations\n";
			cout<<"You win the Game\n";
		}
	}while(guess!=NUM);
	return 0;
}