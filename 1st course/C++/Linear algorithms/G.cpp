int main(){
    
    string s;
    
    getline(cin, s);
    
    ll ans = 0;
    
    for(int i = 0; i < 4; i++){
        ans += (ll)s[i] - 48;  
    }
    
    printf("%lld\n", ans);
    
    
    return 0;
}
