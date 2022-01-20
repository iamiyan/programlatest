#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

int main(){

    char name1[20],name2[20];
    double p = 3.142, r, area;
    
    cout<<"\nplease enter your first name : ";
    cin>>name1;

    cout<<"\nplease enter your second name : ";
    cin>>name2;

    cout<<"\nplease enter your radius : ";
    cin>>r;

    area = p*pow(r ,2);
    strcat(name1, name2);

    cout<<"\nyour circle area for " << name1 << " is : "<<area<<endl;
    cout<<"\nyour circle area rounded up is : "<<floor(area);
    cout<<endl;
    cout << "Lapar" << endl;

    
    return 0;
}
