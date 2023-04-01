char a[250][250];
char b[3][3];


void f(char a[][250], char b[][3], int n, int m, int k, int len){
    if(k > 0){
        int b1 = 0, b2 = 0;
        
        for(int i = 0; i < n; i += len){
            for(int j = 0; j < n; j += len){
                if(b[b1 % m][b2 % m] == '*'){
                    for(int l = i; l < i + len; l++){
                        for(int r = j; r < j + len; r++){
                            a[l][r] = '*';
                        }
                    }
                }
                b2++;
            }
            b1++;
        }
        
        f(a, b, n, m, k - 1, len / m);
    }
}


int main(){
    
    int m, k;
    
    scanf("%d%d", &m, &k);
    int n = pow(m, k);
    
    for(int i = 0; i < m; i++){
        scanf("%s", b[i]);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = '.';
        }
    }

    f(a, b, n, m, k, n / m);
    
    for(int i = 0; i < n; i++){
        printf("%s\n", a[i]);
    }
    
    return 0;
}
