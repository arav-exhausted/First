#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    string s;
	    int cnt00=0,cnt11=0;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i] == '0' && s[i+1] == '0') cnt00++;
            if(s[i] == '1' && s[i+1] == '1') cnt11++;
	    }
	    
	    if(cnt11 >= cnt00) {
            cout << 0 << "\n";
        }
        else {
            int diff = cnt00 - cnt11;
            cout << ( (diff + 1) / 2 ) << endl;   
        }
	}

}
