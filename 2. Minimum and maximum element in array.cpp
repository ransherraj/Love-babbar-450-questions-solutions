#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> res;
    long long int maxx, minn;
    maxx = minn = a[0];
    for(long long int i = 0; i<n; i++){
        if(maxx<a[i]) maxx = a[i];
    }
    
    for(long long int i = 0; i<n; i++){
        if(minn>a[i]) minn = a[i];
    }
    
    res.first = minn;
    res.second = maxx;
    return res;
}
