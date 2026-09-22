#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    cout << "Elements of the array are:" << endl;

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}