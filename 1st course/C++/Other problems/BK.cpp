vector<int> c;



void sum_long(vector<int> a, vector<int> b){
    c.clear();
    
    if(b.size() > a.size()) swap(a, b);
    int p = 0, n = (int)a.size(), m = (int)b.size();
    
    for(int i = 0; i < n; i++){
        int num = a[n - i - 1] + (i < m ? b[m - i - 1] : 0) + p;
        c.pb(num % 10);
        p = num / 10;
    }
    if(p) c.pb(p);
    reverse(c.begin(), c.end());
}

int main(){
    
    int n;
    scanf("%d", &n);
    
    if(n == 1 || n == 2){
        printf("1\n");
        return 0;
    }
    vector<int> a = {1};
    vector<int> b = {1};
    
    n -= 2;
    
    while(n--){
        sum_long(a, b);
        a = b;
        b = c;
    }
    
    for(auto i : c){
        cout << i;
    }
    printf("\n");
    
    return 0;
}
