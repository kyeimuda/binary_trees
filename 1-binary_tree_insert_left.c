#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_left - function that inserts at left
 * @parent:pointer to the node to insert the left-child in.
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or if
 * parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
binary_tree_t *current, *temp;
new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
if (parent == NULL)
return (NULL);
if (parent->left == NULL)
{
current = new_node;
parent->left = current;
}
else
{
temp = parent->left;
parent->left = NULL;
parent->left = new_node;
current = parent->left;
current->left = temp;
temp->parent = current;
temp->left = NULL;
temp->right = NULL;
}
return (new_node);
}
