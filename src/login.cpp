#include <iostream>
using namespace std;

typedef struct User{
    string username;
    string password;
    string f_name;
    string l_name;
    int age;
}us;

string login(User);
void reg(User);
void display(string a, string b);
int main(){
    us user1;
    int button;
    cout << "Welcome\n"<<endl;
    cout << "1) Login"<<endl;
    cout << "2) Register\n"<< endl;
    cout <<"Enter: "; cin >> button;
    if (button == 1) {
        login(user1);
    }
    else if (button == 2) {
        reg(user1);
    };

}

void display (string a, string b){
    cout << "Username is: " << a << endl;
    cout << "Passowrd is: " << b << endl;
}

string login(us user1){
    cout << "Username: "; cin >> user1.username;
    cout << "Password: "; cin >> user1.password;
    /*if (database ma bhete){
        goto next page.
    }
    else{
        cout << "Invalid username or password, please try again.";
        system("CLS");
        login();
    };*/
    return "Successful login";
    }

void reg(us user1){
    string temp;
    cout << "Username: "; cin >> user1.username;
    cout << "First Name: "; cin >> user1.f_name;
    cout << "Last Name: "; cin >> user1.l_name;
    cout << "Age: "; cin >> user1.age;
     
    cout << "Password: "; cin >> user1.password;
    cout << "Re-enter password"; cin >> temp;
    
    if (temp == user1.password){
        cout << "Successfully created account.";
    } else {
        cout << "Passwords don't match. Please try again." << endl;
        reg(user1);
        
    }

}

