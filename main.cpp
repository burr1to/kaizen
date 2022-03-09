#include <iostream>
#include <windows.h>
#include <mysql.h>


using namespace std;

const char* hostname    = "localhost";
const char* username    = "root";
const char* password    = "";
const char* database    = "kaizen";
unsigned int port       = 3306;
const char* unixsocket  = NULL;
unsigned long clientflag = 0;

MYSQL* connectdatabase(){
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, hostname, username, password, database, port, unixsocket, clientflag);
    if(conn){
        cout<<"connected to database "<<endl;
        return conn;
    }
    else{
        cout<<"Failed to connect to database"<<endl;
        return conn;
    }
}





int main()
{

    connectdatabase();

    return 0;
}
