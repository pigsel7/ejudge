int main() {
    
    string x, y;
    cin >> x >> y;
    
    int n = (int)x.size(), m = (int)y.size();
    
    if(m > n){
        printf("0\n");
        return 0;
    }
    
    
    int count = 0;
    
    
    for(int i = m; i <= n; i++){
        
        int l = i - m;
        
        int p = 0;
        
        for(int j = 0; j < m; j++){
            if(x[j + l] != y[j]){
                p++;
                if(p > 1) break;
            }
            if(j + 1 == m) count++;
        }
                
    }
    
    
    printf("%d\n", count);
    
    
    return 0;
}
