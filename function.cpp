#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

int main(){

    char name1[20], character;
    int length;

    cout<<"\nenter your name : ";
    cin>>name1;

    length = strlen(name1);
    cout << "\nthe length of the name is : "<< length<<endl;

    cout << "\nyour name in uppercase is : ";

    for(int i = 0; i < length; i++)
    {  
        character = toupper(name1[i]);
        cout << character;
    }
    cout<<endl;


    return 0;

}