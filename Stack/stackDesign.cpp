#include"bits/stdc++.h"
using namespace std;



class Stack
{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int [size];
    }
    void push(int x)
{
    if(size - top > 1)
    {
        top++;
        arr[top] = x;
    }
    else
    {
        cout<<"memory overflow"<<endl;
    }
}
bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    return false;
}
void pop()
{
    if(!isEmpty())
    {
        top--;
    }
    else{
        cout<<"memory underflow"<<endl;
    }

}
int peek()
{

    if(top>=0)
    {
        return arr[top];
    }
    cout<<"stack is Empty"<<endl;
    return -1;
}
};





int main()
{
    Stack st(5);
    st.push(22);
    st.push(34);
    st.push(36);
    st.push(67);
    st.push(89);
    st.push(89);
    for(int i=0;i<6;i++)
    {
        st.pop();

    }
    cout<<st.isEmpty()<<endl;



}
