//	Ledesma, Adrian G03600578
//	Assignment 01 -- Jackrabbit Slim's
//	
//	Source(s): None.
//
//	Jackrabbit Slim's POS SYSTEM
//	
//	Does the Following:
//		Prompts User To:
//				Enter a Tab
//				View a Tab
//				Quit
//		Displays Totals for the Day when Quit
//		Displays Totals for Individual Tab
//		Enters and Records a Tab
//
//===================================================


#include <string>
#include <iostream>
#include <iomanip>
#include <ios>

using namespace std;

const int MAXCUSTOMERS = 200;

const double SPEEDBURGER = 11.75;
const double FRENCHFRIES = 3.49;
const double SHAKE = 5.65;
const double CHERRYCOKE = 2.99;
tab orders[MAXCUSTOMERS]
void displayMenu();
void displayTotal( tab orders[] );
void displayTab( tab orders[], int count );
void resetTabs( tab orders[] );
void newTab( tab orders[], int count );

int main(){
	
	struct tab{
		bool open = true;
		int burgerCount;
		int fryCount;
		int shakeCount;
		int cokeCount;
	}orders[MAXCUSTOMERS];

	int counter = 0;
	bool quit = false;

	resetTabs(orders);
	displayMenu();

	while(!quit){
	
		char option;	
	
		
		cout	<<	"(E)nter a new tab"	<<	endl
			<<	"(V)iew a previous tab"	<<	endl
			<<	"(Q)uit"	<<	endl
			<<	endl
			<<	"Please choose an option: ";
			
		cin	>>	option;
		
		option = tolower(option);
		
		switch(option){
	
			case 'e':	if( counter newTab( orders, counter );
					counter++;
					break;
			
			case 'v':	int tab;

					cout	<<	endl
						<<	endl
						<<	"Please enter a tab number: ";
					cin	>>	tab;
					
					tab = tab - 1;
				
					if( orders[tab].open = true ){
						displayTab( orders, i );
					}
					else
						cout	<<	"SORRY THAT TAB DOESNT EXIST"	<<	endl;
					

					break;

			case 'q':	displayTotal( orders );
					quit = true;
					break;

			default:	cout	<<	"ERROR"	
						<<	endl
						<<	endl;
					break;
		}
			
	
	}
	
			
return 0;

}

void displayMenu(){
	
	cout	<<	setw(54)	<<	setfill('=')	<<	"="	<<	endl
		<<	endl
		<<	endl
		<<	"Welcome to Jackrabbit Slim's"	<<	endl
		<<	endl
		<<	setw(26)	<<	setfill(' ')	<<	"MENU"	<<	endl
		<<	endl
		<<	setw(48)	<<	setfill('.')	<<	left	<<	"Slim's Famous Speedburger"	<<	"$11.75"	<<	endl
		<<	setw(49)	<<	setfill('.')	<<	"French Fries"	<<	"$3.49"	<<	endl
		<<	setw(49)	<<	setfill('.')	<<	"Five-Dollar Shake"	<<	"$5.65"	<<	endl
		<<	setw(49)	<<	setfill('.')	<<	"Cherry Coke"	<<	"$2.99"	<<	endl
		<<	endl
		<<	endl
		<<	setw(54)	<<	setfill('=')	<<	"="	<<	endl
		<<	endl
		<<	endl;
return;
}

void displayTotal( tab orders[] ){
	
	for

return;
}

void displayTab( tab orders[], int count ){
	
	double total;
	int items;
	
	items = orders[count].burgerCount
		+ orders[count].fryCount
		+ orders[count].shakeCount
		+ orders[count].cokeCount;

	total = (orders[count].burgerCount * SPEEDBURGER)
		+ (orders[count].fryCount * FRENCHFRIES)
		+ (orders[count].shakeCount * SHAKE)
		+ (orders[count].cokeCount * CHERRYCOKE);

	cout	<<	"ORDER #"	<<	count+1	<<	endl
		<<	endl
		<<	orders[count].burgerCount	<<	" BURGERS @ $"	<<	SPEEDBURGER	<<	endl
		<<	orders[count].fryCount	<<	" FRIES @ $"	<<	FRENCHFRIES	<<	endl
		<<	orders[count].shakeCount	<<	" SHAKES @ $"	<<	SHAKE	<<	endl
		<<	orders[count].cokeCount	<<	" COKES @ $"	<<	CHERRYCOKE	<<	endl
		<<	endl
		<<	"TOTAL NUMBER OF ITEMS: "	<<	items	<<	endl
		<<	"TOTAL COST: $"	<<	total
		<<	endl
		<<	endl;
return;
}

void resetTabs( tab orders[] ){

	for( int i = 0; i < MAXCUSTOMERS; i++ ){
		
		orders[i].burgerCount = 0;
		orders[i].fryCount = 0;
		orders[i].shakeCount = 0;
		orders[i].cokeCount = 0;
	}

return;
}

void newTab( tab orders[], int count ){

	cout	<<	"ORDER #"	<<	count+1	<<	endl
		<<	endl
		<<	"HOW MANY BURGERS WOULD YOU LIKE TO PURCHASE?: ";
	cin	>>	orders[count].burgerCount;

	cout	<<	endl
		<<	"HOW MANY FRENCH FRIES WOULD YOU LIKE TO PURCHASE?: ";
	cin	>>	orders[count].fryCount;

	cout	<<	endl
		<<	"HOW MANY FIVE DOLLAR SHAKES WOULD YOU LIKE TO PURCHASE?: ";
	cin	>>	orders[count].shakeCount;

	cout	<<	endl
		<<	"HOW MANY CHERRY COKES WOULD YOU LIKE TO PURCHASE?: ";
	cin	>>	orders[count].cokeCount;

	cout	<<	endl
		<<	endl;

	orders[count].open = false;
return;
}
