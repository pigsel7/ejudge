int a[1001] = {0};


int main(){
    
    for (int i = 1; i <= 1000; i++){
        int sum = 0;
        for (int j = 1; j <= i; j++){
            if(!(i % j)) sum += j;
        }
        if(sum <= 1000) a[sum] = i;
    }

    int c = 1;
    while (true){
        int s;
        scanf("%d", &s);
        if (!s) break;
        
        cout << "Case " << c++ << ": " << (a[s] ? a[s] : -1) << endl;
    }

    return 0;
}
