///This is and example of how to take an input in c++///
#include <iostream>

using namespace std;

int main()
{
    string name;
    cout<<"Enter Your Name : ";
    getline(cin,name);

    int age;
    cout << "Enter Your Age :";
    cin >> age ;

    cout<<"Hello " <<name<<". \nHave a nice day."<<endl;

    cout<< "So, you are " << age << " years old. \nHope you have a long life."<< endl;


    return 0;
}
