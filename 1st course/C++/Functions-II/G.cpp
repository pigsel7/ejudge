long long strToL(string s){
    int n = (int)s.size();
    
    long long result = 0;
    long long d = 1;
    
    for(int i = 0; i < n; i++){
        result += ((ll)s[i] - '0') * d;
        if(i != n - 1) d *= 10;
    }
    
    return result;
}


long long p(long long num){
    
    num++;
    
    string s = to_string(num);
    int n = (int)s.size();
    
    bool flag = false;
    
    for(int i = n - 1; i >= n / 2; i--){
        if(s[i] > s[n - i - 1]) flag = true;
        if(s[i] < s[n - i - 1]) flag = false;
        s[i] = s[n - i - 1];
    }
    
    if(flag){
        for(int i = (n - 1) / 2; i >= 0; i--){
            if(s[i] != '9'){
                s[i]++;
                s[n - i - 1] = s[i];
                for(int j = i + 1; j <= (n - 1) / 2; j++) s[n - j - 1] = s[j] = '0';
                flag = false; break;
            }
        }
        
        if(flag){
            for(int i = 0; i < n; i++) s[i] = '0';
            s[n - 1] = 1;
            s = '1' + s;
        }
    }
    
    return (ll)strToL(s);
}


int main(){
    
    ll n;
    
    scanf("%lld", &n);
    printf("%lld\n", p(n));
    
    
    return 0;
}
