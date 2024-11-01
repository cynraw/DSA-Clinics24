#include <iostream>
#define MAX 4
using namespace std;
int stack_arr[MAX];
int top = -1;


void push(int n){
    if(top==(MAX-1)){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    else{
        top = top + 1;
        stack_arr[top] = n;
    }
    

}

void printStack(){
    if (top == -1){
        cout<<"The stack is empty";
        return;
    }
    for(int i = top; i>=0; i--){
        cout<<stack_arr[i];
    }
}



int main(){
    push(1);
    push(3);
    push(5);
    push(6);

    printStack();
    
    return 0;
}

