#include <vector>
#include "solution.hpp"
using std::vector;

bool Solution::isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == nullptr && q == nullptr) return true;
    if (p == nullptr || q == nullptr) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right) && p->val == q->val; 
}

