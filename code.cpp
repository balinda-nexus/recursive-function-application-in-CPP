#include <iostream>
#include <cstdlib>

using namespace std;

    int i=0;/// holds data for first class seats
    int j = 6;///// holds data for economy seats
    int seats [10] = {0,0,0,0,0,0,0,0,0};
   // int seatCheaker = 0;


    void programStart(){




    char x;

    cout << "------------Air line seat-Assigning algorithm------\n\n" << endl;
    cout <<
     "1. First class" << endl;
    cout << "2.economy class" << endl;
     // read from keyboard
    cin>>x;

    if (x=='1'){

     if (i<6){
     seats[i] = 1;
        cout <<" You have been added to first class"<< i << endl;
        cout <<" please add another passenger"<< endl;

     i++;
        programStart();
     }else{
          cout <<" first class is full"<< endl;
                 for(int x = 0; x<=10;x++){
            cout << seats[x] <<endl;
        }
        programStart();

     }

    }else if(x=='2'){



    if (j>5 && j<10){
    seats[j] = 1;
     cout <<" You have been added to economy class class"<< endl;
    cout <<" please add another passenger"<< j << endl;
         j++;

     programStart();
    }else{
        cout <<" economy class is full"<< endl;
                for(int x = 0; x<=10;x++){

                cout << seats[x] <<endl;
        }
        programStart();
    }
     }

  //  }
   // else{
   //         cout <<" plane is full and about to take off in 3 hours"<< j << endl;

   // }

    }




int main()
{

    /// initialising the major function
programStart();
cout <<"next flight leaves in 3 hours "<<endl;
return 0;}









