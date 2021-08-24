/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */


node * insert(node * root,int val)
{
	if (root == NULL){
        root = (node*)malloc(sizeof(node));
        root->val = val;
        root->left = NULL;
        root->right = NULL;
    }
    else if (val > root->val){
        root->right = insert_hidden(root->right, val);
        if (BF_hidden(root) == -2){
            if (val > root->right->val){
                root = RR_hidden(root);
            }
            else{
                root = RL_hidden(root);
            }
        }
    }
    else if (val < root->val){
        root->left = insert_hidden(root->left, val);
        if (BF_hidden(root) == 2){
            if (val < root->left->val){
                root = LL_hidden(root);
            }
            else{
                root = LR_hidden(root);
            }
        }
    }
    root->ht = ht_hidden(root);
    return(root);
}