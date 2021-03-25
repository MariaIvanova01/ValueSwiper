#include <iostream>

using namespace std;

int main()
{
    int m, n, temp;
    cout << " n = ";
    cin >> n;
    cout << " m = ";
    cin >> m;

    temp = n;
    n = m;
    m = temp;

  
    cout << " after swapping n = " << n << endl;
    cout << " after swapping m = " << m << endl;

    system("PAUSE");
    return 0;

}

