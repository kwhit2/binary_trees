#include "binary_trees.h"

/**
* binary_tree_nodes - function that counts the nodes with at least 1 child...
* ...in a binary tree. If tree is NULL, the function must return 0 ...
* ...A NULL pointer is not a node.
*
* @tree: is a pointer to the root node of the tree to count the number of nodes
*
* Return: number of nodes in the tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int l_depth;
	int r_depth;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	l_depth = binary_tree_nodes(tree->left);
	r_depth = binary_tree_nodes(tree->right);

	return (l_depth + r_depth + 1);
}
