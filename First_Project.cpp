#include <iostream>

using namespace std;

int main(){
    string fullname;
    int birthyear;
    char gender;

    cout << "Enter your name here: " << endl;
    getline(cin,fullname);

    cout << "Enter year of birth here: " << endl;
    cin >> birthyear ; 

    cout << "Enter M for Male and F for Female: " << endl;
    cin >> gender;

    int current_year=2025;
    int age= current_year-birthyear;

    cout << "Creating profile for new user" << endl;
    
    cout << "Names: " << fullname << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;

    return 0;


}