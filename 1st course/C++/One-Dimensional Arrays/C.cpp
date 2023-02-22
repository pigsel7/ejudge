int main() {
    
    int t;
    
    scanf("%d", &t);
    
    int tmp;
    vector<int> f, s;
    int n = 0, m = 0;
    
    for(int i = 0; i < t; i++){
        scanf("%d", &tmp);
        if(tmp % 2){
            f.pb(tmp);
            n++;
        }
        else{
            s.pb(tmp);
            m++;
        }
    }
    
    for(int i = 0; i < n; i++) printf("%d ", f[i]);
    printf("\n");
    
    for(int i = 0; i < m; i++) printf("%d ", s[i]);
    printf("\n");
    

    return 0;
}
