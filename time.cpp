#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) 
{
    string md="PM";
    if((s.find(md)) >=0)
    {
        string modify=s.erase(8,0);
        int val=s[0]-'0'+1;
        int val2=s[1]-'0'+2;
        s[0]=val;
        s[1]=val2;

        return s;

    }

    else
    {
        string modify2= s.erase(8,0);
        return modify2;
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
