#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
// my solution:
// add the below line
// then change every type (e.g. int, double, ...) in the function to `T`
template <class T>
T arraysum(vector<T> &v)
{
    T rnt = 0;
    for (T a : v)
    {
        rnt += a;
    }
    return rnt;
}

// answer:
template <class summable>
// summable is the generic type
summable sum(const summable data[], int size, summable s = 0)
{
    for (int i = 0; i < size; ++i)
    {
        s += data[i];
        // += must work for summable
    }
    return s;
}

int main()
{
    cout << "Hello World" << endl;
    // works for my solution
    vector<int> arr{1, 2, 3};
    cout << arraysum(arr) << endl;

    // given answer
    int brr[5] = {1, 2, 3, 4, 5};
    cout << sum(brr, 2) << endl;

    return 0;
}