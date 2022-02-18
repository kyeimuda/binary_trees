#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of a tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

size_t h1, h2;
if (tree->left == NULL && tree->right == NULL)
return (0);

h1 = binary_tree_height(tree->left);
h2 = binary_tree_height(tree->right);
if (h1 < h2)
return (h2 + 1);
return (h1 + 1);
}
