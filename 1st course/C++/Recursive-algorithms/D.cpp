void f(char *a, int l, int r, int k){
    
    if(k > 0){
        int n = r - l + 1;
        int m = l + n / 3;
        
        for(int i = m; i < m + (n / 3); i++){
            a[i] = ' ';
        }
        
        f(a, l, m - 1, k - 1);
        f(a, m + (n / 3), r, k - 1);
    }
}


char a[15000000];

int main(){
    
    int n, k;
    scanf("%d%d", &n, &k);
    
    for(int i = 0; i < n; i++){
        a[i] = '#';
    }
    
    int l = 0, r = n - 1;
    
    f(a, l, r, k);
    
    for(int i = 0; i < n; i++){
        printf("%c", a[i]);
    }
    
    printf("\n");
    

    return 0;
}
