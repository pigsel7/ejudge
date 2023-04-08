bool possible(int l, int r, int n);
void put(int i, int j, int n);
void del(int i, int j, int n);
int f(int n, int pos_j);

char bord[30][30];
char bord_tmp[30][30];
int vertical[30] = {0};
int horizontal[30] = {0};
int d1[100] = {0};
int d2[100] = {0};


int main(){

    int n, p;
    scanf("%d%d", &n, &p);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            bord[i][j] = '.';
        }
    }
    bord[p - 1][0] = 'Q';
    
    put(p - 1, 0, n);
    
    if(f(n, 1)){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%c", bord[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}

void put(int i, int j, int n){
    vertical[j]++;
    horizontal[i]++;
    if(i >= j) d1[i - j]++;
    else d1[j - i + n]++;
    d2[i + j]++;
    bord[i][j] = 'Q';
}

void del(int i, int j, int n){
    if(vertical[j]) vertical[j]--;
    if(horizontal[i]) horizontal[i]--;
    if(i >= j){
        if(d1[i - j]) d1[i - j]--;
    }
    else{
        if(d1[j - i + n]) d1[j - i + n]--;
    }
    if(d2[i + j]) d2[i + j]--;
    bord[i][j] = '.';
}

bool possible(int l, int r, int n){
    if(vertical[r] || horizontal[l] || d2[l + r]) return false;
    return (l >= r) ? !d1[l - r] : !d1[r - l + n];
}

int f(int n, int pos_j){
    
    if(pos_j == n - 1){
        for(int i = 0; i < n; i++){
            if(possible(i, pos_j, n)){
                put(i, pos_j, n);
                return 1;
            }
        }
    }
    else{
        for(int i = 0; i < n; i++){
            if(possible(i, pos_j, n)){
                put(i, pos_j, n);
                if(f(n, pos_j + 1) == 1){
                    return 1;
                }
                else del(i, pos_j, n);
            }
        }
    }
    
    return 0;
}
