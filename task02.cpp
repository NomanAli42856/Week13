#include<iostream>
using namespace std;
void checkSeenry(string);
char seen[5][5] = {
        {'.','.','.','*','*'},
        {'.','*','.','.','.'},
        {'.','*','.','.','.'},
        {'.','*','.','.','.'},
        {'.','.','*','*','.'},
    };


main()
{

    for(int i = 0; i<5 ;i++)
    {
        for(int j = 0; j < 5 ;j++)
        {
            cout << seen[i][j] << "\t";
        }
        cout << endl;
    }
    string index;
    cout << "Enter index :";
    cin >> index;
    checkSeenry(index);

}


void checkSeenry(string index)
{
    int x;
    char tempx = index[0];
    if(tempx == 'A')
        x = 0;
    else if(tempx == 'B')
        x = 1;
    else if(tempx == 'C')
        x = 2;
    else if(tempx == 'D')
        x = 3;
    else if(tempx == 'E')
        x = 4;
    char temp = index[1];
    int y = char(temp) - '0';
    if(seen[x][y]=='.')
        cout << "Splash";
    else if(seen[x][y]=='*')
        cout << "Boom";
}
