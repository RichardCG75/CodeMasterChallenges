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
}