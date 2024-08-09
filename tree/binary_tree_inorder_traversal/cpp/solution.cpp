#include <vector>
#include <stack>
#include "solution.hpp"
using std::vector;
using std::stack;

vector<int> Solution::inorderTraversal(TreeNode *root)
{
    if (root == nullptr) return {};
    vector<int> result;
    stack<TreeNode *> stack;
    TreeNode *current = root;

    // Think of the stack as a way to remember where we are in the tree.
    // Think of each node as a small tree.
    // We traverse the leftmost node first, then the right node.

    while (current != nullptr || !stack.empty())
    {
        // Find the leftmost node
        while (current != nullptr)
        {
            stack.push(current);
            current = current->left;
        }

        // At this point we have a nullptr, so we use the stack to get the last node
        current = stack.top();
        stack.pop();
        result.push_back(current->val);

        // Move to the right node
        current = current->right;
    }
    return result;
}

