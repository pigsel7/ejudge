int main() {
    
    int n;
    
    scanf("%d", &n);
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    int ans = 1, tmp = 1;
    
    for(int i = 1; i < n; i++){
        if(a[i] != a[i - 1]){
            ans = max(ans, tmp);
            tmp = 1;
        }
        else tmp++;
    }
    
    printf("%d\n", max(tmp, ans));

    
    return 0;
}
