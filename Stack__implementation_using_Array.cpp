#include <iostream>
using namespace std;
#define n 100

class stack{
int*arr;
int upper;
public:
stack(){
arr=new int[n];
upper=-1;
}
void push(int x){
    if(upper==n-1)
    {
    cout<<"Stack overflow"<<endl;
    return;
    }
    upper++;
    arr[upper]=x;
}
void pop(){
    if(upper==-1)
    {
        cout<<"No element to pop"<<endl;
        return;
    }
    upper--;
}
int top(){
    if(upper==-1)
    {
        cout<<"No element in Stack"<<endl;
        return -1;
    }
    return arr[upper];
}
bool is_empty(){
    return 
    upper==-1;
}
};
int main()
{
    stack ob;
    ob.push(10);
    ob.push(20);
    ob.push(30);
    ob.push(40);
    cout<<ob.top()<<endl;
    ob.pop();
    cout<<ob.top()<<endl;
    ob.pop();
    ob.pop();
    // ob.pop();
    cout<<ob.is_empty()<<endl;              //return 0 if empty else return 1
return 0;
}