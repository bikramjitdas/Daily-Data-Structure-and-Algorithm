// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> topView(struct Node *root);


int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,i,k;
        cin>>n;
        i=n;

        Node* root=NULL;
        queue <Node*> q;
        while(i>0)
        {
            int a,b;
            char c;
            cin>> a >> b >> c;
            if(!root){
                root = new Node(a);
                q.push(root);
            }
            Node* pick = q.front();
            q.pop();

            if(c == 'L'){
                pick->left = new Node(b);
                q.push( pick->left );
            }
            cin>> a >> b >> c;
            if(c == 'R'){
                pick->right = new Node(b);
                q.push( pick->right );
            }
            i-=2;
        }
//        inorder(root);
//        cout<<endl;
        vector<int> res = topView(root);
        
        for(int i=0; i<res.size(); i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}




// } Driver Code Ends


//Structure of binary tree
/*struct Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
// function should print the topView of the binary tree
vector<int> topView(struct Node *root)
{
   // int hd=0;
    map<int,int> m;
    vector<int> r;
    if(root==NULL)
    {
        return r;
    }
    
    queue <pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
       // pair<Node*,int> temp=q.front();
        Node* t=q.front().first;
        int hd=q.front().second;
        q.pop();
        if(m.count(hd)==0)
            m[hd]=t->data;
        if(t->left!=NULL)
        {
         q.push(make_pair(t->left,hd-1));
        }
        if(t->right!=NULL)
        {
            q.push(make_pair(t->right,hd+1));
        }
    }
        
    for(auto i:m) r.push_back(i.second);
    return r;
}


