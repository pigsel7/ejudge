int main(){
    
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int a[3];
        scanf("%d%d%d", a, a + 1, a + 2);
        
        sort(a, a + 3);
        
        printf("%d\n", *a == *(a + 2) ? 1 : *a == *(a + 1) || *(a + 2) == *(a + 1) ? 2 : 3);
        
    }
    
    
    return 0;
}
