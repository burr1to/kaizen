#include <iostream>
#include <ctime>
using namespace std;

class Planner{
    protected:
        string username;
        string password;
        string first_name;
        string last_name;
        int age;

    public:
        string createPlan();

        int checkPassword(string a,string b){
                if(a == b){
                    return 1;
                } else{
                    return 0;
                }
        }

        void setInfo(){
            string reenter;
            
            cout << "First Name: "; cin >> first_name; cout << endl;
            
            cout << "Last Name: "; cin >> last_name; cout << endl;

                
            cout << "Age: "; cin >> age; cout << endl;
            
            cout << "Username: "; cin >> username; cout << endl;
            
            cout << "Password: "; cin >> password; cout << endl;

            cout <<"Reenter password: "; cin >> reenter;cout <<endl;

            int checkingpassword = checkPassword(password,reenter);

            if (checkingpassword == 1){
                cout << "Successfully registered.";
            } else if (checkingpassword == 0){
                cout << "Unsuccessful registration. Please try again.";
            }
        }

        void storeInfo(){
            //add info in database after registration.
        }


        char* dateTime(){
            time_t now = time(0);
            return ctime(&now);
        }
};

class Budget: public Planner{
    protected:
        int budget;
        int spending;
    public:

};

