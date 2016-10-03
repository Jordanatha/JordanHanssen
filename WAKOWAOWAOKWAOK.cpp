#include <iostream>
using namespace std;

int Formula (float,float,float);
	
float Population (int, int, int);
int main (){
	float EarlyPopulation, 
		AnnualBirthRate,
		AnnualDeathRate,
		YearToDisplay,
		NewPopulation;
	
	do{
	
	cout<<"Enter the starting population size :";
	cin>>EarlyPopulation;
	cout<<"Enter the Birth Rate :";
	cin>>AnnualBirthRate;
	cout<<"Enter the Death Rate :";
	cin>>AnnualDeathRate;
	cout<<"Enter year to display:";
	cin>>YearToDisplay;
} while (EarlyPopulation<2 || YearToDisplay<1);
	

