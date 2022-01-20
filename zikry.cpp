#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
    char Name[20];
    int lenght1, a;
    char character;

    cout<< "\nenter your name: ";
    cin.getline (Name, 20);

    lenght1 = strlen(Name);
    cout << "the lenght of the name is: " << lenght1 << endl;
    
    cout << "\nyour name in uppercase: ";

    for(int a = 0; a < lenght1; a++)
    {
        character = toupper (Name[a]);
        cout << character;
    }
    cout<<endl;
    
    return 0;
    
}