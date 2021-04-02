#include <iostream>
using namespace std;

typedef enum days
{
    SUN,
    MON,
    TUE,
    WEB,
    THU,
    FRI,
    SAT
} days;
inline days operator++(days &d)
{
    // &d: call by reference so we can increment d
    return d = static_cast<days>((static_cast<int>(d) + 1) % 7);
}
ostream &operator<<(ostream &out, const days &d)
{
    // &d is call-by-reference to d
    // we don't need to copy d
    switch (d)
    {
    case SUN:
        out << "SUN";
        break;
    case MON:
        out << "MON";
        break;
    case TUE:
        out << "TUE";
        break;
    case WEB:
        out << "WEB";
        break;
    case THU:
        out << "THU";
        break;
    case FRI:
        out << "FRI";
        break;
    case SAT:
        out << "SAT";
        break;
    }
    return out;
}
int main()
{
    days currentDay = SAT;
    for (int i = 0; i < 14; i++)
    {
        cout << ++currentDay << '\t';
    }
}