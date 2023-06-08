vector<int> a(1, 1);

void mul_long(int n){
    
    vector<int> b;
    while(n){
        b.pb(n % 10);
        n /= 10;
    }
    
    n = (int)a.size();
    int m =(int)b.size();
    
    vector<int> c(n + m);
    
    for(int i = 0; i < n; i++){
        for(ll j = 0, p = 0; j < m || p; j++){
            ll num = c[i + j] + a[i] * (j < m ? b[j] : 0) + p;
            c[i + j] = num % 10;
            p = num / 10;
        }
    }
    
    while(c.back() == 0) c.pop_back();
    
    a = c;
}

void factorial(int k, int n){
    if(k <= n){
        mul_long(k);
        factorial(k + 1, n);
    }
}


int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        a.clear(); a.resize(1); a[0] = 1;
        int n;
        scanf("%d", &n);
        
        factorial(2, n);
        reverse(a.begin(), a.end());
        
        for(int i = 0; i < (int)a.size(); i++){
            printf("%d", a[i]);
        }
        printf("\n");
    }
    
    
    return 0;
}
