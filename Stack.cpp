// stack program using pointers concept
#include <bits/stdc++.h>

using namespace std;

void add(int s[],int *t,int *mx){
    int num;
    if(*t==*mx-1){
        cout<<"stack is full"<<endl;
    }
    else{
        *t=*t+1;
        cout<<"*t="<<*t<<endl;
        cout<<"enter a number:";
        cin>>num;
        s[*t] = num; 
        cout<<"s[*t]="<<s[*t]<<endl;
    }
}
void del(int s[],int *t){
    if(*t==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        int pop_ele = s[*t];
        *t=*t-1;
        cout<<"the popped element is:"<<pop_ele<<endl;
    }
}

int main()
{
    int top = -1;
    int max_size;
    cout<<"enter the stack size:";
    cin>>max_size;
    int *stack = new int[max_size-1];
    while(true){
        int opt;
        cout<<"Press-1: to add , Press 2: to delete , Press-3: to display, Press-0: to exit:";
        cin>>opt;
        if(opt==0){
            break;
        }
        else if(opt==1){
            add(stack,&top,&max_size);
        }
        else if(opt==2){
            del(stack,&top);
        }
        else if(opt==3){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                
                for(int i=0;i<=top;i++){
                cout<<stack[i]<<" ";
            }
            cout<<endl;
                
            }
            
        }
        else{
            cout<<"Incorrect input"<<endl;
        }
    }
    delete []stack;
    return 0;
}
