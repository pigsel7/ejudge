int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int k, n;
        scanf("%d%d", &k, &n);
        
        printf("%d %d\n", (n - 1) / k + 1, (n - 1) % k + 1);

    }
    
    
    return 0;
}
