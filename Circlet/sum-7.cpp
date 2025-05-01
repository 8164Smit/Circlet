#include <iostream>
using namespace std;

int main()
{
    int height = 7;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0 ||
                (i == 0 && j < 4) ||
                (i == 3 && j < 4) ||
                (i > 0 && i < 3 && j == 4))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
