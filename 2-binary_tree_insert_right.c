#include "binary_trees.h"

/**
* binary_tree_insert_right - function that inserts a node as the...
* ...right-child of another node
* @parent: is a pointer to the node to insert the right-child in
* @value: is the value to store in the new node
*
* Return: a pointer to the created node, or NULL on failure or if...
* ...parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child; /* declare right child node variable */

	if (parent == NULL) /* if parent is NULL, return NULL, as per task desc. */
		return (NULL);

	right_child = binary_tree_node(parent, value); /* create right child node */
	if (right_child == NULL)
		return (NULL);

	right_child->right = parent->right;
	/* ^ set right_child into same position as parent */

	if (right_child->right != NULL) /* check if right child node exists */
		right_child->right->parent = right_child;
	/*
	* ^ If parent already has a right-child, the new node must take its place,
	* and the old right-child must be set as the right-child of the new node.
	*/
	parent->right = right_child;
	/*
	* if parent didn't have right child already,
	* then add our right-child on
	*/
return (right_child);
}
