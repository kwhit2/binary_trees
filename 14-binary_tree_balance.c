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

	l_depth = binary_tree_height(tree->left);
	r_depth = binary_tree_height(tree->right);

	if (l_depth > r_depth)
		return (l_depth + 1);
	else
		return (r_depth + 1);
}

/**
* binary_tree_balance - function that measures the balance factor of a...
* ...binary tree. If tree is NULL, return 0
*
* @tree:is a pointer to the root node of the tree to measure the balance factor
*
* Return: the balance factor of a binary tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
