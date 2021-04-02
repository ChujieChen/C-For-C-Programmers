/*   Convert this program to C++
*   change to C++ io
*   change to one line comments
*   change defines of constants to const
*   change array to vector<>
*   inline any short function
*/

/* starter C code
#include <stdio.h>
#define N 40
void sum(int *p, int n, int d[])
{
    int i;
    *p = 0;
    for (i = 0; i < n; ++i)
        *p = *p + d[i];
}
int main()
{
    int i;
    int accum = 0;
    int data[N];
    for (i = 0; i < N; ++i)
        data[i] = i;
    sum(&accum, N, data);
    printf("sum is %d\n", accum);
    return 0;
}
*/

// BY LCC
#include <iostream>
#include <vector>

using namespace std;
const int N = 40;
template <class T>
T sum(const T arr[], int size, T s = 0)
{
    for (int i = 0; i < size; ++i)
        s += arr[i];
    return s;
}
int main()
{
    int accum = 0;
    int data[N];
    for (int i = 0; i < N; ++i)
        data[i] = i;
    cout << "sum is " << sum(data, N, accum) << endl;
    cout << "sum is " << sum(data, 23) << endl;
    cout << "sum is " << sum(data, 40, 220) << endl;
    return 0;
}