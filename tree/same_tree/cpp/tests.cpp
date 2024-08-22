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

TEST(SameTree, Example1)
{
    Solution s;
    TreeNode *p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    TreeNode *q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    EXPECT_EQ(s.isSameTree(p, q), true);

    // free memory
    delete p->left;
    delete p->right;
    delete p;
    delete q->left;
    delete q->right;
    delete q;
}

TEST(SameTree, Example2)
{
    Solution s;
    TreeNode *p = new TreeNode(1);
    p->left = new TreeNode(2);
    TreeNode *q = new TreeNode(1);
    q->right = new TreeNode(2);
    EXPECT_EQ(s.isSameTree(p, q), false);

    // free memory
    delete p->left;
    delete p;
    delete q->right;
    delete q;
}

TEST(SameTree, Example3)
{
    Solution s;
    TreeNode *p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(1);
    TreeNode *q = new TreeNode(1);
    q->left = new TreeNode(1);
    q->right = new TreeNode(2);
    EXPECT_EQ(s.isSameTree(p, q), false);

    // free memory
    delete p->left;
    delete p->right;
    delete p;
    delete q->left;
    delete q->right;
    delete q;
}

TEST(SameTree, Example4)
{
    Solution s;
    TreeNode *p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(1);
    TreeNode *q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(1);
    EXPECT_EQ(s.isSameTree(p, q), true);

    // free memory
    delete p->left;
    delete p->right;
    delete p;
    delete q->left;
    delete q->right;
    delete q;
}

TEST(SameTree, Example5)
{
    Solution s;
    TreeNode *p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(1);
    TreeNode *q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(1);
    q->right->right = new TreeNode(3);
    EXPECT_EQ(s.isSameTree(p, q), false);

    // free memory
    delete p->left;
    delete p->right;
    delete p;
    delete q->left;
    delete q->right->right;
    delete q->right;
    delete q;
}

// Null trees
TEST(SameTree, Example6)
{
    Solution s;
    TreeNode *p = nullptr;
    TreeNode *q = nullptr;
    EXPECT_EQ(s.isSameTree(p, q), true);
}

// Empty trees
TEST(SameTree, Example7)
{
    Solution s;
    TreeNode *p = new TreeNode();
    TreeNode *q = new TreeNode();
    EXPECT_EQ(s.isSameTree(p, q), true);

    // free memory
    delete p;
    delete q;
}