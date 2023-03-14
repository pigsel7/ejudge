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
    
    int n, k;
    scanf("%d", &n);
    
    
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    scanf("%d%s", &k, direction);
    
    bool dir = true;
    if(direction[0] == 'r') dir = false;
    
    remove(a, n, k, dir);
    
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    
    printf("\n");
    
    
    return 0;
}
