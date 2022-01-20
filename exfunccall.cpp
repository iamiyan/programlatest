// function exercise
#include<iostream>

using namespace std;

void show_sign(char sign_type,int num)//function header/function definition
{
    cout << "the sign is : " << sign_type << endl;
    cout << "the number is : " << num << endl;
}

int main()
{
    show_sign('x' , 4);//function call
    show_sign('3' , 8);//function call
    show_sign(0 , 5);//function call

    cout<<"\n +++++TAMAT+++++";
    cout<<endl;

}
