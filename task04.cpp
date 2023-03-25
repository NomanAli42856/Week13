#include<iostream>
using namespace std;
int countIdenticalRows();
int array[4][3] = {
        {1,0,0},
        {0,1,0},
        {1,0,0},
        {1,0,1}
    };


main()
{

    for(int i = 0; i<4 ;i++)
    {
        for(int j = 0; j < 3 ;j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    

    countIdenticalRows();

}


int countIdenticalRows()
{
    int row[3];
    for(int i = 0; i<4 ;i++)
    {
        for(int j = 0; j < 3 ;j++)
        {
            int temp = array[i][j];
        }
        cout << endl;
    }
}
