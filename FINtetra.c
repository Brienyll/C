#include <iostream>
#include<math.h>

//die function to exit with the message passed as argument!
int die(const char *msg){
    //gets character of msg till \0 (null character) is encountered
    while(*msg!='\0')
    {
        //print msg
        cout<<*msg;
        msg++;
    }
    //exits the program
    exit(0);
}
//tetrahedronVolume function takes side as parameter of double type
double tetrahedronVolume(double side)
{
    double volume;
    //calculates volume of tetra hedron
    volume = pow(side,3) / (6 * sqrt(26));
    //returns volume
    return volume;
}
//main function
int main() {
                double volume,side;
                int T;
                //gets the number of input user wants to give
                cout<<"Enter the number of input you want to give! \n";
                cin>>T;
                //Runs till T>0
                while(T){
                    //prompt user for input
                    cout<<"\nEnter side of Tetra Hedron : ";
                    cin>>side;
                    //if input other than double (input failure)
                    if(cin.fail())
                    die(NULL); //exit program
                    //if input less than 0
                    else if(side<0)
                    die("\n0 is okay, but negative numbers are bad."); //exit program with msg
                    // if valid input
                    else
                    {
                        // gets volume
                        volume= tetrahedronVolume(6.5);
                //print volume with message
                cout<<"\nVolume of Tetra Hedron for side = "<<side<<" is : "<<volume;
                    }
                    T--;
                }
                return 0;
}
