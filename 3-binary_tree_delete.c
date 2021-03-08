#include "binary_trees.h"

/**
* binary_tree_delete - function that deletes an entire binary tree...
* ...If tree is NULL, do nothing
* @tree: a pointer to the root node of the tree to delete
*
* Return: None
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
