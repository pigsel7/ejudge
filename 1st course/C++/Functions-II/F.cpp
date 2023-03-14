bool NextPermutation(int *p, int n){
    for(int i = n - 2; i >= 0; i--){
        for(int j = n - 1; j > i; j--){
            if(p[i] < p[j]){
                swap(p[i], p[j]);
                
                for(int l = i + 1; l < n - 1; l++){
                    for(int r = l + 1; r < n; r++){
                        if(p[l] > p[r]) swap(p[l], p[r]);
                    }
                }
                return true;
            }
        }
    }
    
    return false;
}

int p[1001];

int main() {
    
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &p[i]);
    }
    
    if(NextPermutation(p, n)){
        for(int i = 0; i < n; i++){
            printf("%d ", p[i]);
        }
    }
    else printf("Not exist");
    
    printf("\n");
    
    
    
    
    return 0;
}
