#include <iostream>

using namespace std;

int main()
{
    int  throw1, throw2, sum;

    //Get  the  die readings
    cout << "Enter die readings" << endl;
    cin >> throw1 >> throw2;
    //Adding  first  two  numbers
    sum = throw1 + throw2;
    //checking  if sum  of  first  and  second  number  add  up  to  7 or  11
    if (sum == 7 || sum ==11 )
        cout << "YOU WIN!" << endl;
    else if (sum == 2)
        cout << "Snake eyes!" << endl;
    else if (sum == 12)
        cout << " Good shot!" << endl;
    else
        cout << " Try again nono" << endl;
    return 0;
}
