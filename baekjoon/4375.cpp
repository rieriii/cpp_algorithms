/*
2022.8.29 4375. 1
int N is given (N%2, N%5 =! 0)
find the lowest multiple of N that consists of only 1s
return the number of places of such multiple (ex. 111 = 3 1111111 = 7)
*/

#include <iostream>

using namespace std;

int main()
{
    int N;
    while(cin >> N)
    {
        int a = 1;
        int ans = 1;
        while(true)
        {
            if(ans % N == 0)
            {
                cout << a << endl;
                break;
            }
            else
            {
                ans = (ans * 10) + 1;
                ans%= N;
                a++;
            }
        }
    }

    return 0;
}