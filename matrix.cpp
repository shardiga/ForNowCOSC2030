#include <iostream>
#include <iomanip>

using namespace std;

//Comment

int main()
{
    int choice;
    cout << "How large do you want your square to be?" << endl;
    cin >> choice;

    char fill;
    cout << "what letter do you want the square to be filled with?" << endl;
    cin >> fill;

    char square[choice][choice];

    for (int i = 0; i < choice; i++)
    {
        for (int j = 0; j < choice; j++)
        {
            square[i][j] = fill;
        }
    }

	//Comment
	
    for (int i = 0; i < choice; i++)
    {
        for (int j = 0; j < choice; j++)
        {
            cout << square[i][j];
        }
	cout << endl;
    }
 

    return 0;
}
