#include<iostream>
#include<vector>
using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d):data(d),left(nullptr),right(nullptr){}
};

TreeNode* build(TreeNode* root,int arr[], int i,int n){
    
    if(i<n  && arr[i]>=0){
        root = new TreeNode(arr[i]);
        
        root->left = build(root->left,arr,2*i+1,n);
        root->right = build(root->right,arr,2*i+2,n);
    }
    return root;

}
vector<int> preorder(TreeNode* root, vector<int> &pre){
    if (root == nullptr)
    {   
        
        return pre;
    }

    pre.push_back(root->data);
    preorder(root->left,pre);
    preorder(root->right,pre);


    return pre;
    
}

vector<int> postorder(TreeNode* root, vector<int> &post){   
     if (root == nullptr)
    {
        return post;
    }

    
    postorder(root->left,post);
    postorder(root->right,post);
    post.push_back(root->data);


    return post;
}


int main()
{
    int arr1[]={1,2,3,4,5,-1,-1};
    int arr2[]={1,2,3,4,5,-1,-1};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    TreeNode *root1 = nullptr;
    TreeNode *root2 = nullptr;
    root1 = build(root1,arr1,0,n1);
    root2 = build(root2,arr2,0,n2);
    vector<int> pre1,pre2;

    pre1=preorder(root1,pre1);
    pre2=preorder(root2,pre2);

    vector<int> post1, post2;

    post1=postorder(root1,post1);
    post2=postorder(root2,post2);

    if(pre1==pre2 && post1==post2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}