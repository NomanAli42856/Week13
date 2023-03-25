#include<iostream>
using namespace std;

bool identityCheck();

int cars[3][3] = {
        {1,0,0},
        {0,1,0},
        {1,0,1}
    };


main()
{

    cout << identityCheck();

}


bool identityCheck()
{
    int countdiagonal = 0;
    int count = 0;
    bool flag = true;
    for(int i = 0; i<3 ;i++)
    {
        for(int j = 0; j < 3 ;j++)
        {
            if(cars[i][i]!=1)
                flag = false;
            if(cars[i][j]!=0 && i!=j)
                flag = false;

        }

    }
    return flag;
}
