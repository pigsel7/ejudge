int book[30];
int book_tmp[30];

int main() {
    
    string x, y;
    cin >> y >> x;
    
    int n = (int)x.size(), m = (int)y.size();
    
    if(m > n){
        printf("0\n");
        return 0;
    }
    
    for(int i = 0; i < m; i++){
        book[(int)y[i] - 'a']++;
        book_tmp[(int)x[i] - 'a']++;
    }
    
    int count = 0;
    
    for(int j = 0; j < 30; j++){
        if(book[j] != book_tmp[j]) break;
        if(j == 30 - 1) count++;
    }
    
    for(int i = m; i < n; i++){
        book_tmp[(int)x[i - m] - 'a']--;
        book_tmp[(int)x[i] - 'a']++;
        for(int j = 0; j < 30; j++){
            if(book[j] != book_tmp[j]) break;
            if(j == 30 - 1) count++;
        }
    }
    
    printf("%d\n", count);
    

    
    
    return 0;
}
