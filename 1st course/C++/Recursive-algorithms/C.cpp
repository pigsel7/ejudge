ll a[100][100];

ll f(ll m, ll n){
    if(a[m][n] != -1) return a[m][n];
    if(a[m - 1][n - 1] == -1) a[m - 1][n - 1] = f(m - 1, n - 1);
    if(a[m][n - 1] == -1) a[m][n - 1] = f(m, n - 1);
    
    return a[m - 1][n - 1] + a[m][n - 1];
}


int main(){
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(i == 0 || i == j){
                a[i][j] = 1;
                continue;
            }
            a[i][j] = -1;
        }
    }
    
    ll n, m;
    scanf("%lld%lld", &n, &m);
    
    ll answer = f(m, n);
    
    printf("%lld\n", answer);
    
    return 0;
}
