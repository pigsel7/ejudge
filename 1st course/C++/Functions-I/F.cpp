void powerMod(long long a, long long n, long long m, long long &ans){
    while(n){
        if(n % 2){
            n--;
            ans = (ans * a) % m;
            continue;
        }
        n /= 2;
        a = (a * a) % m;
    }
}



char *s;

int main() {
    
    size_t sz = 100;
    
    while (getline(&s,&sz, stdin) != EOF){
        
        int len = (int)strlen(s);
        len--;
        
        string s1 = "", s2 = "", s3 = "";
        
        int number = 1;
        
        for(int i = 0; i < len; i++){
            if(s[i] == ' '){
                number++;
                continue;
            }
            if(number == 1) s1 += s[i];
            if(number == 2) s2 += s[i];
            if(number == 3) s3 += s[i];
        }
        
        long long a = (ll)stoi(s1), n = (ll)stoi(s2), m = (ll)stoi(s3);
        long long ans = 1;
        
        powerMod(a, n, m, ans);
        
        printf("%lld\n", ans);
    }
        
    
    return 0;
}
