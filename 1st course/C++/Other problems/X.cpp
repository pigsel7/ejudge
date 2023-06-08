int a[10001];


int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
    
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        sort(a, a + n);
        
        int ans = 1, tmp = 1;
        
        for(int i = 1; i < n; i++){
            if(a[i] != a[i - 1]){
                ans = max(tmp, ans);
                tmp = 1;
            }
            else tmp++;
        }
        
        printf("%d\n", max(ans, tmp));
    }
    
    
    return 0;
}
