#include <stdlib.h>
#include "binart_trees.h"

/**
 * binary_tree_delete - fiction that deletes a tree.
 * @tree: pointer to root of tree.
 * Return: NULL if tree is NULL.
 */

void binary_tree_delete(binary_tree_t *tree);
{
if (tree == NULL)
return;
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
