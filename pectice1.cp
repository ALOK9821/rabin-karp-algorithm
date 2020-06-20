//Alok
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define MOD 1000000007
#define pie 3.141592653
#define ll long long
#define lli long long int
#define ulli unsigned long long int
#define vi vector<int>
#define vvi vector<vi>
#define vlli vector<lli>
#define pb push_back
#define uset unordered_set
#define useti unordered_set<int>
#define umap unordered_map<int,int>
#define loop(i,n) for(int i=0;i<n;i++)
#define clr(a,x) memset(a,x,sizeof(a))
#define all(a) a.begin(),a.end()
#define mp make_pair
#define Pi pair<int, int>
#define ppi pair<ll,ll>
#define d 256
int q = 101;
void search(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
    int i, j;
    int p = 0;
    int t = 0;
    int h = 1;


    for (i = 0; i < M - 1; i++)
        h = (h * d) % q;


    for (i = 0; i < M; i++)
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }


    for (i = 0; i <= N - M; i++)
    {


        if ( p == t )
        {

            for (j = 0; j < M; j++)
            {
                if (txt[i + j] != pat[j])
                    break;
            }


            if (j == M)
                cout << "found at index " << i << endl;
        }


        if ( i < N - M )
        {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;


            if (t < 0)
                t = (t + q);
        }
    }

}

int main() {
    fastio
#ifndef ONLINE_JUDGE
    freopen("tin.txt", "r", stdin);
    freopen("tout.txt", "w", stdout);
#endif










    int t;
    cin >> t;
    while (t--) {
        string txt, pat;
        cin >> txt >> pat;
        search(pat, txt);
    }




























#ifndef ONLINE_JUDGE
    cout << "\nTime lap: " << 1.0 * clock() / CLOCKS_PER_SEC << " sec\n";
#endif
    return 0;
}
