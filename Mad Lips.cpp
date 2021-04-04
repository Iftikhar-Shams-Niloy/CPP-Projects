#include <iostream>

using namespace std;

int main()
{
    string color, plural_noun, celebrity;

    cout<<"Enter a color : ";
    getline(cin,color);
    cout<<"Enter a plural noun : ";
    getline(cin,plural_noun);
    cout<<"Enter a celebrity name : ";
    getline(cin,celebrity);

    cout<<"\n\n***Here Goes Your Mad Lips***\n"<<endl;

    cout<<"Roses are "<<color<<endl;
    cout<<plural_noun<<" are blue"<<endl;
    cout<<"My heart is "<<color<<endl;
    cout<<"I am such a fool"<<endl;
    cout<<"I loved "<<celebrity<<endl;
    cout<<"But "<<celebrity<<" did not loved me back too"<<endl;
    cout<<"Now I love "<<plural_noun<<endl;
    cout<<"I am such a fool"<<endl;
    cout<<"I gave it all for "<<celebrity<<endl;
    cout<<"But ,"<<plural_noun<<", now I want you too"<<endl;

    return 0;
}
