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


char s[10000];
int A[10000];

int main() {
    
    scanf("%s", s);
    
    ReadLong(s, A);
    
    for(int i = 0; i <= A[0]; i++){
        printf("%d\n", A[i]);
    }
    
    
    return 0;
}
