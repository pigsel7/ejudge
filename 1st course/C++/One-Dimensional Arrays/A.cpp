int main() {
    
    int n;
    
    scanf("%d", &n);
    
    stack<int> stk;
    int tmp;
    
    while(n--){
        scanf("%d", &tmp);
        stk.push(tmp);
    }
    while(!stk.empty()){
        printf("%d ", stk.top());
        stk.pop();
    }
    
    printf("\n");
    
  
    return 0;
}
