#include "binary_trees.h"
/**
 *binary_tree_sibling - find sibling and hope it exits.
 * @node: the node to find sibling of
 * Return: the sibling
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
