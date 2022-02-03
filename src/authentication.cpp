#include <iostream>
using namespace std;

void checkDays(int days[] ,int day, int month);

int main(){
    int day,year;
    int month;
    string months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int days[] = {31,28,30,31,30,31,30,30,31,30,31,30};
    cout << "Enter year: "; cin >> year;
  cout << "Enter month: "; cin >> month;

    
   
   checkDays(days,day,month);
    
     
}

void checkDays(int days[],int day, int month){
     cout << "Enter day: "; cin >> day;
    int temp = days[month-1];
    if (day>temp){
        
       cout << "Invalid nigga";
       return checkDays(days,day,month);
    }else {
        cout << "Day Month:"<< day << " " << month;
    }
}