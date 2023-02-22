int counter[10001];
 
int main() {
    
    int n, m = 0;
    
    scanf("%d", &n);
    vector<int> a(n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        m = max(m, ++counter[a[i]]);
    }
    
    printf("%d\n", m);
    
    
    
    return 0;
}
