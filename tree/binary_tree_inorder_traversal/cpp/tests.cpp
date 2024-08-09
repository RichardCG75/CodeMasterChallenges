#include <gtest/gtest.h>
#include <vector>
#include <gtest/gtest-matchers.h>
#include "solution.hpp"

int main(int argc, char const *argv[])
{
    // Run all the tests that were declared with TEST()
    testing::InitGoogleTest(&argc, (char **)argv);
    return RUN_ALL_TESTS();
}


// Test case 1
TEST(BinaryTreeInorderTraversal, Test1)
{
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution solution;
    vector<int> expected = {1, 3, 2};
    EXPECT_EQ(solution.inorderTraversal(root), expected);

    // Free memory
    delete root->right->left;
    delete root->right;
    delete root;
}

// Test case 2
TEST(BinaryTreeInorderTraversal, Test2)
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);

    Solution solution;
    vector<int> expected = {4, 2, 5, 1, 3};
    EXPECT_EQ(solution.inorderTraversal(root), expected);

    // Free memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;
}

// Test case 3
TEST(BinaryTreeInorderTraversal, Test3)
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution solution;
    vector<int> expected = {4, 2, 5, 1, 6, 3, 7};
    EXPECT_EQ(solution.inorderTraversal(root), expected);

    // Free memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;
}

// Test case 4
TEST(BinaryTreeInorderTraversal, Test4)
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(8);
    root->right->right->right = new TreeNode(9);

    Solution solution;
    vector<int> expected = {4, 2, 5, 1, 6, 3, 8, 7, 9};
    EXPECT_EQ(solution.inorderTraversal(root), expected);

    // Free memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right->left;
    delete root->right->right->right;
    delete root->right->right;
    delete root->right;
    delete root;
}

// Test case 5
TEST(BinaryTreeInorderTraversal, Test5)
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(8);
    root->right->right->right = new TreeNode(9);
    root->right->right->right->left = new TreeNode(10);
    root->right->right->right->right = new TreeNode(11);

    Solution solution;
    vector<int> expected = {4, 2, 5, 1, 6, 3, 8, 7, 10, 9, 11};
    EXPECT_EQ(solution.inorderTraversal(root), expected);

    // Free memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right->left;
    delete root->right->right->right->left;
    delete root->right->right->right->right;
    delete root->right->right->right;
    delete root->right->right;
    delete root->right;
    delete root;
}