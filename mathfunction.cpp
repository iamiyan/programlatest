//Write a program to choose to calculate area of a square or volume of a cube. Or to repeat or to exit. Draw a flowchart before u write  program.

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    double sqr_area, cube_vol, w, l, h;
    char agree, ans;
    
    do
    {
        cout << "\nDO YOU WANT TO CALCULATE THE AREA OF A SQUARE OR THE VOLUME OF A CUBE?\n";
        cout << "\nIF YOU WANT TO CALCULATE THE AREA OF A SQUARE PLEASE ENTER 'A' , IF YOU WANT TO CALCULATE THE VOLUME OF A CUBE ENTER 'B' :";
        cin >> agree;


        if (agree == 'A' || agree == 'a')
        {
            cout << "\nPLEASE ENTER THE WIDTH OF THE SQUARE : ";
            cin >> w;

            cout << "\nPLEASE ENTER THE LENGTH OF THE SQUARE : ";
            cin >> l;

            sqr_area = w*l;

            cout << "\nTHE AREA OF THE SQUARE IS : " << sqr_area << endl;

        }

        else 
        {
            cout << "\nPLEASE ENTER THE WIDTH OF THE CUBE : ";
            cin >> w;

            cout << "\nPLEASE ENTER THE LENGTH OF THE CUBE : ";
            cin >> l;

            cout << "\nPLEASE ENTER THE HEIGHT OF THE CUBE : ";
            cin >> h;

            cube_vol = w*l*h;

            cout << "\nTHE VOLUME OF THE CUBE IS : " << cube_vol << endl;
        }

        cout << "\nIF YOU WANT TO REPEAT PLEASE ENTER 'Y', IF NOT PLEASE ENTER 'N' : ";
        cin >> ans;


    }while(ans == 'Y' || ans == 'y');

    cout << "\n++++++++++TAMAT++++++++++\n";

    return 0;
}