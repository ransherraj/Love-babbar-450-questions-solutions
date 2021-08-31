
// **********************************************   Union  code  ********************************
// time: O(max(m,n)) space: O(m+n)

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> mp(m+n);
        
        for(int i = 0; i< n; i++){
            mp.insert(a[i]);
        }
        for(int i = 0; i< m; i++){
            mp.insert(b[i]);
        }
        return mp.size();
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
} 


//   ******************************     intersection  code       ****************************************************
// time: O(n) where n>m    space: o(n)

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        set<int> s,t;
        
        int res = 0;
        for(int i = 0; i<n; i++){
            s.insert(a[i]);
        }
        
        for(int i = 0; i<m; i++){
            t.insert(b[i]);
        }
        
        int c[t.size()], j=0;
        for(auto k = t.begin(); k!=t.end(); k++){
            c[j++] =*k;
        }
        
        for(int i = 0; i<t.size(); i++){
            if(s.find(c[i]) != s.end()){
                res++;
            }
        }
        return res;
        
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
} 

