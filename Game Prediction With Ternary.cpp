#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;




int main(){
	int predict;string status;srand(time(0));cout<<"Enter 1 for home win, 0 for draw, 2 for away win, 3 for GG, 4 for Over2.5 goals, 5 for Over3.5 goals."<<endl;	
	cout<<endl<<"Enter your prediction for the Chelsea vs Manchester United match: ";cin>>predict;int score1=rand()%4;
	int score2=rand()%4;status = (score1>score2 && predict == 1) ?   " WOW!!!!  You win" : ((score1<score2 && predict ==2) ? "WOW!!!!  You win" : ((score1==score2 && predict ==0) ? "WOW!!!!  You win" : ((score1>0 && score2>>0 && predict ==3) ? "WOW!!!!  You win" : ((score1+score2>2 && predict ==4)?"WOW!!!!  You win" : ((score1+score2>3 && predict ==5) ? "WOW!!!!  You win":"Sorry buddy, try again")))));cout<<status<<endl;cout<<endl<<"Chelsea   "<<score1<<" "<<score2<<" Man United"<<endl;system("pause");
	return 0;
	};
	
	

