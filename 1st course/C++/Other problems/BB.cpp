int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);

        long long d1 = 0, d2 = 0;
        int tmp;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &tmp);
                if(i == j) d1 += tmp;
                if(i == n - j - 1) d2 += tmp;
            }
        }
        
        printf("%lld %lld\n", d1, d2);
    }
    
    return 0;
}
