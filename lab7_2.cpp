#include<bits/stdc++.h>
using namespace std;

int main(){
    string name, movie, date, message, ID;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline (cin,name);
    cout << "Fahsai: Wow!!! " << name <<  " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> ID;
    cin.ignore();
    int twodigits = stoi(ID.substr(0,2))-12;
    cout << "Fahsai: I think you may be GEAR " << twodigits << "." << " I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline (cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline (cin,date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << name << ": ";
    getline (cin,message);
    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/";
}
