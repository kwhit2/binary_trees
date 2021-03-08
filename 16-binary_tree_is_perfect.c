#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree...
* ...If tree is NULL, your function must return 0
*
* @tree: is a pointer to the root node of the tree to measure the height.
*
* Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_depth;
	int r_depth;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	l_depth = binary_tree_height(tree->left);
	r_depth = binary_tree_height(tree->right);

	if (l_depth > r_depth)
		return (l_depth + 1);
	else
		return (r_depth + 1);
}

/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect...
* ...If tree is NULL, your function must return 0
* @tree: is a pointer to the root node of the tree to check
*
* Return: true or false if it is a perfect binary tree
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
