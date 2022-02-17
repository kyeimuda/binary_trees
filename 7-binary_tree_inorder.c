#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree
 * using inorder traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: function that goes through a binary tree using inorder traversal
 * Return: Nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if ((tree == NULL) || (func == NULL))
return;

binary_tree_preorder(tree->left, func);
func(tree->);
binary_tree_preorder(tree->right, func);
}
