//7382 - Simplicity

#include <stdlib.h>
#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    map<char,int> m;
    set<char> s;

    string str;
    int out;
    string::iterator it;
    set<char>::const_iterator pos;

    while(cin >> str)
    {
        int l = str.length();
        for(int i = 0; i < l; i++)
        {
            if(m.count(str[i]) <= 0)
            {
                m[str[i]] = 1;
            }

            else
            {
                m[str[i]] += 1;
            }
            s.insert(str[i]);
        }
        if(s.size() <= 2)
        {
            cout << 0 << endl;
            //break;
        }

        else
        {
            char max = *s.begin();
            for(pos = s.begin(); pos != s.end(); ++pos)
            {
                if(m[*pos] > m[max])
                {
                    max = *pos;
                }
            }
            l -= m[max];
            s.erase(max);
            max = *s.begin();
            for(pos = s.begin(); pos != s.end(); ++pos)
            {
                if(m[*pos] > m[max])
                {
                    max = *pos;
                }
            }
            l -= m[max];
            cout << l << endl;
        }
        s.clear();
        m.clear();
    }
    return 0;
}