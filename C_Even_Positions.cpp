#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int mod = 1000000007;

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
        stack<int> st;
        st.push(0);
        ll ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '_')
            {
                if (!st.empty())
                {
                    int idx = st.top();
                    st.pop();
                    ans += i - idx;
                }
                else
                {
                    st.push(i);
                }
            }
            else if (s[i] == '(')
            {
                st.push(i);
            }
            else if (s[i] == ')')
            {
                if (!st.empty())
                {
                    int idx = st.top();
                    st.pop();
                    ans += i - idx;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}