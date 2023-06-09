// Here the given data is in form of Level order data
// so we have to create a tree
#include"Basic.cpp"
void MakeTree(node* root){
    cout<<"enter the data:";
    int data;
    cin>>data;
    root = new node(data);

    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* curr = q.front();
        q.pop();

        cout<<"enter the data for left of "<<curr->data<<":";
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            root->left = new node(leftdata);
        q.push(root->left);
        }
        cout<<endl;

         cout<<"enter the data for right of "<<curr->data<<":";
        int rightdata;
        cin>>rightdata;
        root->right = new node(rightdata);
        q.push(root->right);
        cout<<endl;


    }





}
