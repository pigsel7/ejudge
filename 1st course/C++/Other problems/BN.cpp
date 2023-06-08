int main(){
    
    int t;
    scanf("%d", &t);
    
    char m[1000], n[1000];
    while(cin >> m >> n){
        bool flag = 0;
    
        for(int i = 0; i < strlen(m); i++){
            if(m[i] == 'T'){
                flag = 1;
                break;
            }
        }
        
        if(!flag || strlen(m) < strlen(n)){
            printf("N\n");
            continue;
        }
        
        for(int i = 0; i < strlen(m) - strlen(n) + 1; i++){
            flag = 1;
            for(int j = i; j - i < strlen(n); j++){
                if(m[j] != n[j - i]){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                printf("Y\n");
                break;
            }
            if(i == (int)strlen(m) - strlen(n)) printf("N\n");
        }
        
    }
    
    
    
    return 0;
}
