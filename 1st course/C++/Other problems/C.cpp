int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        stack<int> stk;
        int tmp;
        scanf("%d", &tmp); stk.push(tmp);
        scanf("%d", &tmp); stk.push(tmp);
        
        printf("%d ", stk.top()); stk.pop();
        printf("%d\n", stk.top());
    }
    
    
    return 0;
}
