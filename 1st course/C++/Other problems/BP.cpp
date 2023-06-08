int main(){
    
    string s1, s2;
    cin >> s1 >> s2;
    string s3 = s1, s4 = s2;
    sort(all(s3)); sort(all(s4));
    
    if(s3 != s4){
        printf("-1\n");
        return 0;
    }
    
    int n = (int)s1.size();
    int count = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(s1[i] == s2[j]){
                for(int k = j; k > i; k--){
                    swap(s2[k], s2[k - 1]);
                    count++;
                }
                break;
            }
        }
    }
    
    printf("%d\n", count);
    
    
    
    return 0;
}
