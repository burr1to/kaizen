#include <iostream>
#include <fstream>
#include <ctime>
#include  <bits/stdc++.h>
#include "classes.h"
using namespace std;


void storeInFile(char*,string,int,int,int);
string createPlan();
void showAllPlans();


int main(){
    char reply;
    int day,year;
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

string createPlan(){
    string temp;
    cout << "Enter plan: ";
    getline(cin >> ws,temp);

    return temp;
    
    
}



void storeInFile(char* date, string plan, int year, int month,int day){
            string months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
            fstream output;
            output.open("data.txt", ios::out | ios::app);
            
            output << date;
            output << plan<< endl; 
            output << "Plan date: " << months[month-1]<< " " <<  day << ", "<< year<< endl;
            output << "-\n";
            output.close();         
} 


void showAllPlans(){
    ifstream input("data.txt");
    string data;

    while(!input.eof()){
        getline(input,data,'-');
        cout<< data;
        
    }
    input.close();

}









