#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// create tree and return root node of tree
Node *createTree()
{
    cout << "enter the val" << endl;
    int data;
    cin >> data;

    if (data == -1)
        return NULL;

    // 1 create node
    Node *root = new Node(data);
    // 2 left sub tree
    root->left = createTree();
    // 3 right sub tree
    root->right = createTree();

    return root;
}

// pre order traversal NLR
void preOrder(Node *root)
{
    // base case
    if (root == NULL)
        return;

    // N L R
    //  N
    cout << root->data << " ";
    // L
    preOrder(root->left);
    // R
    preOrder(root->right);
}

// pre order traversal NLR
void inOrder(Node *root)
{
    // base case
    if (root == NULL)
        return;

    //  L N  R
    //  L
    inOrder(root->left);
    // N
    cout << root->data << " ";
    // R
    inOrder(root->right);
}

// post order traversal LRN
void postOrder(Node *root)
{
    // base case
    if (root == NULL)
        return;

    //  L R N
    //  L
    postOrder(root->left);
    // R
    postOrder(root->right);
    // N
    cout << root->data << " ";
}

// level order traversal
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    // traversal
    while (q.size() > 1)
    {
        Node *front = q.front();
        q.pop();
        if (front == NULL)
        {
            cout << endl;
            q.push(NULL);
        }
        else
        {
            // valid node
            cout << front->data << " ";

            // if left exist then push in queue
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            // if right exist then push in queue
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int maxDepth(Node *root)
{
    // base case
    if (root == NULL)
        return 0;
    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);
    int height = max(leftHeight, rightHeight) + 1;
    return height;
}

int diameter(Node *root)
{
    // base case
    if (root == NULL)
        return 0;
    int option1 = diameter(root->left);
    int option2 = diameter(root->right);
    int option3 = maxDepth(root->left) + maxDepth(root->right);
    int dia = max(option1, max(option2, option3));

    return dia;
}

int heightTree(Node *root)
{
    if (root == NULL)
        return 0;

    int left = heightTree(root->left);
    int right = heightTree(root->right);
    int ans = max(left, right) + 1;

    return ans;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;

    // current node balance ?
    int leftHeight = heightTree(root->left);
    int rightHeight = heightTree(root->right);
    int diff = abs(leftHeight - rightHeight);

    bool currNode = (diff <= 1);

    // left tree balance ?
    bool leftAns = isBalanced(root->left);
    bool rightAns = isBalanced(root->right);

    if (currNode && leftAns && rightAns)
        return true;
    else
        return false;
}

Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{
    // base case
    if (root == NULL)
        return NULL;
    if (root->data == p->data)
        return p;
    if (root->data == q->data)
        return q;

    // left ans
    Node *leftAns = lowestCommonAncestor(root->left, p, q);
    // right ans
    Node *rightAns = lowestCommonAncestor(root->right, p, q);

    // now it leads to 4 cases
    // 1 :
    if (leftAns == NULL && rightAns == NULL)
        return NULL;
    // 2:
    if (leftAns == NULL && rightAns != NULL)
        return rightAns;
    // 3:
    if (leftAns != NULL && rightAns == NULL)
        return leftAns;
    // 4:
    else
        return root;
}

bool solve(Node *root, int targetSum, int sum)
{
    // base case
    if (root == NULL)
        return false;

    sum += root->data;

    // leaf node case
    if (root->left == NULL && root->right == NULL)
    {
        if (sum == targetSum)
            return true;
        else
            return false;
    }

    // left ans
    bool leftAns = solve(root->left, targetSum, sum);
    //  right ans
    bool rightAns = solve(root->right, targetSum, sum);

    return leftAns || rightAns;
}

bool hasPathSum(Node *root, int targetSum)
{
    int sum = 0;
    bool ans = solve(root, targetSum, sum);
    return ans;
}

void solve2(Node *root, int targetSum, vector<vector<int>> &ans, vector<int> tmp, int sum)
{
    //  base case
    if (root == NULL)
        return;
    //  one case solve
    sum += root->data;
    tmp.push_back(root->data);
    //  leaf node
    if (root->left == NULL && root->right == NULL)
    {
        if (sum == targetSum)
        {
            ans.push_back(tmp);
        }
        else
        {
            return;
        }
    }
    // recursion carry on
    solve2(root->left, targetSum, ans, tmp, sum);
    solve2(root->right, targetSum, ans, tmp, sum);
}

vector<vector<int>> pathSum(Node *root, int targetSum)
{
    vector<vector<int>> ans;
    vector<int> tmp;
    int sum = 0;
    solve2(root, targetSum, ans, tmp, sum);
    return ans;
}

int searchInOrder(int inorder[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (inorder[i] == target)
            return i;
    }
    return -1;
}

Node *
makeFromPreIn(int preOrder[], int inOrder[], int &preIndex, int inOrderStart, int inOrderEnd, int size)
{
    // base case
    if (preIndex >= size)
        return NULL;
    if (inOrderStart > inOrderEnd)
        return NULL;
    //  one case solve
    int element = preOrder[preIndex];
    preIndex++;
    Node *root = new Node(element);
    //  search element in in order
    int position = searchInOrder(inOrder, size, element);
    //  recursion
    root->left = makeFromPreIn(preOrder, inOrder, preIndex, inOrderStart, position - 1, size);
    root->right = makeFromPreIn(preOrder, inOrder, preIndex, position + 1, inOrderEnd, size);

    return root;
}

int main()
{
    // ----------------------------------------------
    // Node *root = createTree();
    // cout << "root node data : " << root->data << endl;

    // ----------------------------------------------

    // cout << "pre order traversal " << endl;
    // preOrder(root);
    // cout << endl;

    // ----------------------------------------------

    // cout << "in order traversal " << endl;
    // inOrder(root);
    // cout << endl;

    // ----------------------------------------------

    // cout << "post order traversal " << endl;
    // postOrder(root);
    // cout << endl;

    // ----------------------------------------------

    // cout << "level order traversal " << endl;
    // levelOrderTraversal(root);
    // cout << endl;

    // ----------------------------------------------

    // 104  max depth of binary tree
    // Node *root = createTree();
    // int ans = maxDepth(root);
    // cout << ans << endl;

    // ----------------------------------------------

    // 543 diameter of binary tree
    // Node *root = createTree();
    // int ans = diameter(root);
    // cout << ans << endl;

    // ----------------------------------------------

    // 110 balance tree
    // Node *root = createTree();
    // bool ans = isBalanced(root);
    // cout << ans << endl;

    // ----------------------------------------------

    // 236 lowest common ancestor
    // Node *root = createTree();
    // Node* ans = lowestCommonAncestor(root , p , q);
    // cout << ans << endl;

    // ----------------------------------------------

    // 112 path sum
    // Node *root = createTree();
    // bool ans = hasPathSum(root , 25);
    // cout << ans << endl;

    // ----------------------------------------------

    //  113 path sum - II
    // Node *root = createTree();
    // 2d vector ans = pathSum(root , 25 );
    // cout<<ans;

    // ----------------------------------------------

    // contruct a tree from in and pre order traversal
    // int in[] = {10, 8, 6, 2, 4, 12};
    // int pre[] = {2, 8, 10, 6, 4, 12};
    // int size = 6;
    // int preIndex = 0;
    // int inStart = 0;
    // int inEnd = 5;
    // Node *root = makeFromPreIn(pre, in, preIndex, inStart, inEnd, size);
    // cout << "printing tree " << endl;
    // levelOrderTraversal(root);

    // ----------------------------------------------

    return 0;
}