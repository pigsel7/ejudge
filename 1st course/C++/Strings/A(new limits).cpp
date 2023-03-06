 bool p(string s, int n, int del){
    int l = 0, r = n - 1;
    while(l < r){
        if(l == del){
            l++;
            continue;
        }
        if(r == del){
            r--;
            continue;
        }
        if(s[l] != s[r]) return false;
        r--;
        l++;
    }
    return true;
}


int main() {
    
    string s;
    cin >> s;
    
    int n = (int)s.size();
    
    int l = 0, r = n - 1;
    
    int ans = n/2;
    
    while(l <= r){
        if(s[l] != s[r]){
            if(p(s, n, l)) {
                ans = l;
                break;
            }
            else{
                if(p(s, n, r)){
                    ans = r;
                    break;
                }
            }
        }
        l++;
        r--;
    }
        
    for(int i = 0; i < n; i++){
        if(!(i == ans)) cout << s[i];
    }
    
    cout << endl;
    
    
    
    return 0;
}
