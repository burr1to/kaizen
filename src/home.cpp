#include <iostream>
#include <fstream>
#include <ctime>
#include  <bits/stdc++.h>
#include "classes.h"
using namespace std;


void storeInFile(char*,string,int,int,int);
string createPlan();
void showAllPlans();


string Planner::createPlan(){
    string temp;
    cout << "Enter plan: ";
    getline(cin >> ws,temp);

    return temp;   
}

int main(){
    char reply;
    int day,year;
    string months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int month;
    Planner id1;
    
    while (reply != 'y'){
        cout << "Create a new plan? : ";
        cin >> &reply;
    }
    
    if (reply == 'y' || reply == 'Y'){

        char* currentDateTime = id1.dateTime();
        string planCreated = createPlan();
        
       cout << "\n" << "When should I remind you of this plan?\n\n";
       while (month > 0 && month <=12){cout << "Enter month: "; cin >> month;};
       while (day > 0 && day <=30){ cout << "Enter day: "; cin >> day;};
       while (year > 2021){ cout << "Enter year: "; cin >> year;};
       
       int a;
       cout<<"Store in file?"<<endl;
       cin >> a; 
       if (a == 1){storeInFile(currentDateTime,planCreated,year,month,day);}
       else {cout << "Thank you for using this program. bye!";}
       cout << "\n";
       showAllPlans();
       
        
    }


}












