#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Тут не учитываются отрицательные числа, но в целом, в коде просто появятся пару лишних строк для этого

    string str{}, p = "";
    int sum = 0;

    cin >> str;

    for (int i = 0; i < str.size(); i++) {

        if ((47 < (int)str[i]) && ((int)str[i] < 58)) {
            p.push_back(str[i]);
        }

        else {
            sum += atoi(p.c_str());;
            p = "";

        };

    };

    cout << sum;

    return 0;
}


