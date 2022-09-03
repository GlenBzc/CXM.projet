#include <bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(false), cin.tie(nullptr);
#define endl '\n';
#define int long long
using namespace std;
const int maxn=1e6+5;
char a[maxn],b[maxn];
int kmp[maxn];
signed main()
{
    scanf("%s",a+1);
    scanf("%s",b+1);
    int la,lb;
    la=strlen(a+1),lb=strlen(b+1);
    int tot=0;
    for(int i=2;i<=lb;i++)
    {
        while(tot&&b[tot+1]!=b[i]){tot=kmp[tot];}
        if(b[tot+1]==b[i])
        {
            tot++;
        }
        kmp[i]=tot;
    }
    for(int i=1;i<=lb;i++)
    {
        cout<<kmp[i]<<" ";
    }
    return 0;
}
