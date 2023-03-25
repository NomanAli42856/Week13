#include<iostream>
using namespace std;

int cars[5][5] = {
        {10,7,12,10,4},
        {18,11,15,17,2},
        {23,19,12,16,1},
        {7,12,16,0,2},
        {3,5,6,2,1}
    };


main()
{

    for(int i = 0; i<5 ;i++)
    {
        for(int j = 0; j < 5 ;j++)
        {
            cout << cars[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << endl;


    int sum = 0;
    int sum1 = 0;
    for(int j = 0; j < 5 ;j++)
    {
        sum = sum + cars[1][0];
    }

    cout << "Red cars  : " << sum;
    cout << endl << endl;
    for(int i = 0; i<5 ;i++)
    {
        for(int j = 0; j < 5 ;j++)
        {
            sum1 = sum1 + cars[j][i];
        }
    }
    cout << "Total cars  : " << sum1;
    cout << endl << endl;

}
