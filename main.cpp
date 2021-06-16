#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec(4);
    int num{0};
    int count{0};

    cout << "Enter four numbers: ";
    cin >> vec.at(0);
    cin >> vec.at(1);
    cin >> vec.at(2);
    cin >> vec.at(3);

    while (num < vec.size())
    {
        if (vec.at(num) != -99)
        {
            count++;
        }
        else
        {
            num = vec.size();
        }
        num++;
    }

    cout << "Count: " << count;

    return 0;
}