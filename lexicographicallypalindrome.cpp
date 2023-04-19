#include <bits/stdc++.h>
using namespace std;

bool ispali(string s)
{
    int st = 0, e = s.length() - 1;
    while (st < e)
    {
        if (s[st] != s[e])
            return false;
        st++;
        e--;
    }
    return true;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        string s;
        cin >> s;
        string front_str = "", rear_str = "", odd_str = "";

        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
                front_str += s[i];

            for (int j = n / 2; j < n; j++)
                rear_str += s[j];

            sort(front_str.begin(), front_str.end());
            sort(rear_str.begin(), rear_str.end());
            reverse(rear_str.begin(), rear_str.end());

            string res = front_str + rear_str;
            if (ispali(res))
                cout << "Yes it is." << endl;
            else
                cout << "No it is not." << endl;
        }
        else
        {

            for (int i = 0; i < n / 2; i++)
                front_str += s[i];

            odd_str = s[n / 2];

            for (int j = (n / 2) + 1; j < n; j++)
                rear_str += s[j];

            sort(front_str.begin(), front_str.end());
            sort(rear_str.begin(), rear_str.end());
            reverse(rear_str.begin(), rear_str.end());

            string res = front_str + odd_str + rear_str;
            if (ispali(res))
                cout << "Yes it is." << endl;
            else
                cout << "No it is not." << endl;
        }
    }

    return 0;
}