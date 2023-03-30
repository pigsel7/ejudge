int main(){
    
    vector<ll> a(41, 0);
    a[1] = 1;
    
    for(int i = 2; i < 41; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    
    int t;
    scanf("%d", &t);
    
    short n;
    
    while(t--){
        scanf("%hd", &n);
        printf("%lld\n", a[n]);
    }
    
    
    return 0;
}
