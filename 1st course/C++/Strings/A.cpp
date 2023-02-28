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
    
    for(int i = 0; i < n; i++){
        if(p(s, n, i)){
            for(int j = 0; j < n; j++){
                if(j == i) continue;
                printf("%c", s[j]);
            }
            printf("\n");
            return 0;
        }
    }
    
    
    
    return 0;
}
