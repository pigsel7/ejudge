void remove(vector<int> &a, int k, bool left){
    int n = (int)a.size();
    
    if(left){
        for(int i = k; i < n; i++){
            printf("%d ", a[i]);
        }
        for(int i = 0; i < k; i++){
            printf("%d ", a[i]);
        }
    }
    else{
        for(int i = n - k; i < n; i++){
            printf("%d ", a[i]);
        }
        for(int i = 0; i < n - k; i++){
            printf("%d ", a[i]);
        }
    }
    
    printf("\n");
}

char direction[100];

int main(){
    
    int n, k;
    scanf("%d", &n);
    
    vector<int> a(n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    scanf("%d%s", &k, direction);
    
    bool dir = true;
    if(direction[0] == 'r') dir = false;
    
    remove(a, k, dir);
    
    
    return 0;
}
