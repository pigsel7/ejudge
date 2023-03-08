char a[1001][1001];

int cnt(bool u, bool d, bool l, bool r){
    int result = 0;
    if(u && l) result++;
    if(u && r) result++;
    if(r && d) result++;
    if(d && l) result++;
    
    return result;
}

int main(){
    
    int n, m;
    scanf("%d%d", &n, &m);
    
    for(int i = 0; i < n; i++){
        scanf("%s", a[i]);
    }
    
    int count = 0;
    bool u = 0, d = 0, l = 0, r = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] != '.') continue;
            if(i - 1 >= 0){
                if(a[i - 1][j] == '.') u = 1;
            }
            if(i + 1 < n){
                if(a[i + 1][j] == '.') d = 1;
            }
            if(j - 1 >= 0){
                if(a[i][j - 1] == '.') l = 1;
            }
            if(j + 1 < m){
                if(a[i][j + 1] == '.') r = 1;
            }
            
            count += cnt(u, d, l, r);
            u = 0; d = 0; l = 0; r = 0;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
