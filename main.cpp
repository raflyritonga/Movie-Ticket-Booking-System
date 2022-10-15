#include <iostream>
#include <stdio.h>
#include <string.h>
#include <windows.h> // for delay
using namespace std;

struct DataUser {
     string userName, userEmail, userUsername, userPassword;
};

struct DataFilm {
     string tittle, studio, time;
};


DataUser user;
void welcomingPage();
void loginPage();
void signUpPage();
void customerHomePage();
void adminHomePage();

int main (){
     system("cls");
     welcomingPage();
     Sleep(1500);
     loginPage();

     return 0;
}

void welcomingPage(){
     cout << "================================" << endl;
     cout << "|          WELCOME TO          |" << endl;
     cout << "|  MOVIE TICKET BOOKING SYSTEM |" << endl;
     cout << "================================" << endl << endl;
}

void loginPage(){
// constants
     const string
          ADMIN_USERNAME = "myadmin",
          ADMIN_PASSWORD = "myadmin322",
          DEFAULT_CUSTOMER_USERNAME = "mycustomer",
          DEFAULT_CUSTOMER_PASSWORD = "mycustomer223";

// Variables
     int loginOption;
     string inputUsername, inputPassword;

startLoginPage:
     cout << "1. Login" << endl;
     cout << "2. Sign Up" << endl;
     cout << " What do you refer to choose? --> "; cin >> loginOption;

     if (loginOption == 1){
     startLoginForm:
          cout << "Login Form" << endl;
          cout << "==========" << endl;
          cout << "username: "; cin >> inputUsername;
          cout << "password: "; cin >> inputPassword;

               if (inputUsername == ADMIN_USERNAME && inputPassword == ADMIN_PASSWORD){
                    adminHomePage();
               }
               else if (inputUsername == DEFAULT_CUSTOMER_USERNAME && inputPassword == DEFAULT_CUSTOMER_PASSWORD){
                    customerHomePage();
               }
               else if (inputUsername == user.userUsername && inputPassword == user.userPassword){
                    customerHomePage();
               }
               else {
                    cout << "Please input your username or password correctly!" << endl;
                    Sleep(1000);
                    goto startLoginPage;
               }

     }
     else if (loginOption == 2){
          signUpPage();
     }
     else{
          cout << "Option is not available!";
          system("cls");
          goto startLoginPage;
     }

}

void signUpPage(){
     cout << "Sign Up Form" << endl;
     cout << "==========" << endl;
     cout << "Name       : "; cin >> user.userName;
     cout << "Email      : "; cin >> user.userEmail;
     cout << "Username   : "; cin >> user.userUsername;
     cout << "Password   : "; cin >> user.userPassword;
     cout << "Sign Up Succeed!" << endl;
     loginPage();

}

void customerHomePage(){
     cout << "selamat datang di costumer home page";
};

void adminHomePage(){
     cout << "selamat datang di admin home page";

};

/*
Task:
     1. design a data communication
     2. connect with sql

*/
