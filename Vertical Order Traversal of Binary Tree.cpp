/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <map>
#include <set>
void traversal(TreeNode<int>*root,map<int,map<int,multiset<int>>> &map,int row,int col){
    if(root == nullptr) return;
    map[col][row].insert(root->data);
    traversal(root->left,map,row+1,col-1);
    traversal(root->right,map,row+1,col+1);
}
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
	map<int,map<int,multiset<int>>> mp;
    traversal(root,mp,0,0);
    vector<int> result;
    for(auto &p: mp){
            for(auto &q: p.second){
                for(auto &k:q.second){
                    result.push_back(k);
                }
            }
        }
    return result;
}
