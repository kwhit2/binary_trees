#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds LCA of two nodes
 * @first: the first node pointer
 * @second: the second node pointer
 * Return: LCA
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *fg = first->parent;
	binary_tree_t *sg = second->parent;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	if (fg == NULL || first == sg || (fg->parent == NULL && sg == NULL))
		return (binary_trees_ancestor(first, sg));
	else if (sg == NULL || fg == second || (sg->parent == NULL && fg == NULL))
		return (binary_trees_ancestor(fg, second));
	return (binary_trees_ancestor(fg, sg));
}
