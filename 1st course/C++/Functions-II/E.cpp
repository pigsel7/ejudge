void ReadLong(char *s, int *A){
    int n = (int)strlen(s);
    A[0] = (n + 3) / 4;
    
    int index = 1;
    
    for(int i = n - 1; i >= 0; i -= 4){
        string tmp = "";
        for(int j = 0; j < 4; j++){
            if(i - j < 0) break;
            tmp = s[i - j] + tmp;
        }
        
        int item = stoi(tmp);
        A[index++] = item;
    }
}


void SumLong(int *A, int *B, int *C){
    
    if(A[0] < B[0]) swap(A, B);
    
    int n = A[0], m = B[0];
    
    int index = n;
    int p = 0;
    
    for(int i = 1; i <= n; i++){
        if(i <= m){
            C[index--] = (A[i] + B[i] + p) % 10000;
            p = (A[i] + B[i] + p) / 10000;
        }
        else{
            C[index--] = (A[i] + p) % 10000;
            p = (A[i] + p) / 10000;
        }
    }
    
    C[0] = p;
}




char s1[10000];
int A1[10000];
char s2[10000];
int A2[10000];
int C[10000];

int main() {
    
    scanf("%s", s1);
    ReadLong(s1, A1);
    
    scanf("%s", s2);
    ReadLong(s2, A2);
    
    SumLong(A1, A2, C);
    
    int d = 0;
    if(C[0] == 0) d = 1;
    
    for(int i = 0 + d; i <= max(A1[0], A2[0]); i++){
        if (i) {
            string ss = to_string((int)C[i]);
            int xx = 4 - (int)ss.size();
            for (int j = 0; j < xx; j++) {
                cout << "0";
            }
        }
        printf("%d", C[i]);
    }
    
    printf("\n");
    
    
    return 0;
}
