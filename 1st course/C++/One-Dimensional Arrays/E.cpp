int main() {
    
    int n;
    
    scanf("%d", &n);
    
    int tmp;
    vector<int> v;
    
    scanf("%d", &tmp);
    v.pb(tmp);
    scanf("%d", &tmp);
    v.pb(tmp);
    
    int q = v[1] - v[0];
    
    for(int i = 0; i < (n - 2); i++){
        scanf("%d", &tmp);
        v.pb(tmp);
        if(v[i + 2] - v[i + 1] != q){
            printf("0\n");
            return 0;
        }
    }
    
    
    printf("%d\n", q);
    

    return 0;
}
