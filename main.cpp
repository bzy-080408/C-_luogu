

#include <bits/stdc++.h>

using namespace std;

#define MAXN 6
// debug:
#define cin infile

string &replace_string(string &str, const string &old_value, const string &new_value)
{
    while (true)
    {
        string::size_type pos(0);
        if ((pos = str.find(old_value)) != string::npos)
        {
            str.replace(pos, old_value.size(), new_value);
            return str;
        }
        else
        {
            break;
        }
    }
}

int sum = 6; //规则个数
string A, B;
// string a[MAXN + 1], b[MAXN + 1]; //规则
int out = 0x7ff; // set the max
// rule:
string a1, a2, a3, a4, a5, a6, b1, b2, b3, b4, b5, b6;

void DFS(int num, string Make)
{
    if (num == MAXN)
        return;
    if (Make == B)
    {
        out = min(out, num);
    }
    switch (sum)
    {
    case 6:
        DFS(num + 1, replace_string(Make, a1, b1));
        DFS(num + 1, replace_string(Make, a2, b2));
        DFS(num + 1, replace_string(Make, a3, b3));
        DFS(num + 1, replace_string(Make, a4, b4));
        DFS(num + 1, replace_string(Make, a5, b5));
        DFS(num + 1, replace_string(Make, a6, b6));
        break;
    case 5:
        DFS(num + 1, replace_string(Make, a1, b1));
        DFS(num + 1, replace_string(Make, a2, b2));
        DFS(num + 1, replace_string(Make, a3, b3));
        DFS(num + 1, replace_string(Make, a4, b4));
        DFS(num + 1, replace_string(Make, a5, b5));
        break;
    case 4:
        DFS(num + 1, replace_string(Make, a1, b1));
        DFS(num + 1, replace_string(Make, a2, b2));
        DFS(num + 1, replace_string(Make, a3, b3));
        DFS(num + 1, replace_string(Make, a4, b4));
        break;
    case 3:
        DFS(num + 1, replace_string(Make, a1, b1));
        DFS(num + 1, replace_string(Make, a2, b2));
        DFS(num + 1, replace_string(Make, a3, b3));
        break;
    case 2:
        DFS(num + 1, replace_string(Make, a1, b1));
        DFS(num + 1, replace_string(Make, a2, b2));
        break;
    case 1:
        DFS(num + 1, replace_string(Make, a1, b1));
        break;
    default:
        break;
    }
}

int main()
{
    ifstream infile("P1032.in");
    cin >> A >> B;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4 >> a5 >> b5 >> a6 >> b6;
    // set rule's sum
    if (a6[0] == '\0')
        sum--;
    if (a5[0] == '\0')
        sum--;
    if (a4[0] == '\0')
        sum--;
    if (a3[0] == '\0')
        sum--;
    if (a2[0] == '\0')
        sum--;
    DFS(0, A);
    cout << out << endl;
    return 0;
}