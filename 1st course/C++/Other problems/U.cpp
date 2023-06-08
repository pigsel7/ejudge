void remove(int *a, int n, int k, bool left){
    
    if(left){
        while(k--) for(int i = 0; i < n - 1; i++) swap(a[i], a[i + 1]);
        return;
    }
    
    while(k--) for(int i = n - 1; i > 0; i--) swap(a[i], a[i - 1]);
}

char direction[100];
int a[1001];


int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n, k;
        scanf("%d%d", &n, &k);
    
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        remove(a, n, k, false);
    
        for(int i = 0; i < n - 1; i++) printf("%d ", a[i]);
        printf("%d\n", a[n - 1]);
    }
    
    
    return 0;
}
