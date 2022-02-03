#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

class newUser{
    private:
        string name,username,email;
        char password[100];
        int age;
    public:
        void createAccount(string usr,char pass[100], string em, string nme, int a){
            name = nme;
            username = usr;
            email = em;
            age = a;
            password[100] = pass[100];

        }

        void storeData(){

        }
};

int main(){
    newUser user1;
    string name,username,password,email;
    int age;

    cout<< "Register you fag"<<endl;
    cout<<"Username: ";
    //Check in database if username already exists or not
    cin >> username;
    fstream
    
   
}

//class Profile{};