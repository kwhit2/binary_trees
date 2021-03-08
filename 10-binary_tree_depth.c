#include "binary_trees.h"

/**
* binary_tree_depth - function that measures the depth of a node in a binary...
* ...tree. If tree is NULL, your function must return 0
*
* @tree: is a pointer to the node to measure the depth
*
* Return: depth of tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int my_depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	my_depth = (1 + binary_tree_depth(tree->parent));
		return (my_depth);
}
