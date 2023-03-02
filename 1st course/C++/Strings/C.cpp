int main() {
    
    string s;
    int k;
    
    cin >> k >> s;
    
    int n = (int)s.size();
    unsigned long long ans = 0;
    
    for(int i = 0; i < n; i++){
        int tmp;
        
        if((int)s[i] >= 'A') tmp = (int)s[i] - 'A' + 10;
        else tmp = (int)s[i] - '0';
        
        ans *= k;
        ans += tmp;
        ans %= 1000000007;
        
    }
    
    printf("%lld\n", ans % 1000000007);
    
    
    return 0;
}
