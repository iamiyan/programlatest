#include <iostream>

using namespace std;

int main(){

    int num1, ulang = 0, total = 0;
    

    do
    {

    cout<<"\nplease enter number : ";
    cin>>num1;

    total = total + num1 ;
    cout<<"new total is : "<<total<<endl<<endl;

    ulang++;

    }while(ulang < 5);

    cout<<"your final total is : "<<total<<endl;
    return 0;

}
    
