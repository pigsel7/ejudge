int counter[101];
 
int main() {
    
    int n;
    
    scanf("%d", &n);
    vector<int> a(n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(++counter[a[i]] > 1 || a[i] > n){
            printf("NO\n%d\n", a[i]);
            return 0;
        }
    }
    
    printf("YES\n");
    
    
    return 0;
}
