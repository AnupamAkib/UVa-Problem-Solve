/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<endl;
#define PI acos(-1.0)
#define nl cout<<"\n"
#define mem(ar, val) memset(ar, val, sizeof(ar))
#define point(x) fixed<<setprecision(x)
#define printcase(c, n) cout << "Case " << c << ": " << n <<endl
#define printcaseii(c, n, m) cout << "Case " << c << ": " << n << " " << m <<endl
#define aInput(ar, n) for(int i=0; i<n; i++)cin>>ar[i];
#define vInput(v, n) for(int i=0; i<n; i++){lli x;cin>>x;v.push_back(x);}
#define input2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> ar[i][j];}}
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << " ";}cout<<"\n";}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time nl;int z=30;while(z--){cout<<'-';}nl;print(point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs");
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
#define yo(x) cerr<<(#x)<<" = "<<(x)<<endl;
using namespace std;
const lli inf = INT_MAX;
const int mod = 1000000007;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
bool cmp(int a, int b){ return a>b;}

double compliance(int rm, int r){
    double res = ((double)rm / r);
    return res;
}

void solve(int n, int m){
    string s, x, ans;
    double price, dam = inf, cmpln = 0;
    int rm;
    cin.ignore();
    for(int i=0; i<n; i++){getline(cin, s);}
    while(m--){
        getline(cin, x);
        cin >> price >> rm;
        cin.ignore();
        for(int i=0; i<rm; i++){getline(cin, s);}
        if((compliance(rm, n) > cmpln) || (compliance(rm, n) == cmpln && price < dam)){
            dam = price;
            ans = x;
            cmpln = compliance(rm, n);
        }
    }
    print(ans)
}

int main(){
    ANUPAM_AKIB;
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        INPUT;
        OUTPUT;
    #endif

    int tc = 1;
    //cin >> tc; //TEST CASE
    /*for(int i=1; i<=tc; i++){
        solve(i);
    }*/
    int n, m, t=1;
    while(cin >> n >> m){
        if(n+m == 0) break;
        if(t!=1) nl;
        print("RFP #"<<t)
        solve(n, m);
        t++;
    }

    #ifndef ONLINE_JUDGE
        execution_time;
    #endif
    return EXIT_SUCCESS;
}
