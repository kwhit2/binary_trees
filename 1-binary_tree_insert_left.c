#include "binary_trees.h"

/**
* binary_tree_insert_left - function that inserts a node as the...
* ...left-child of another node
* @parent: is a pointer to the node to insert the left-child in
* @value: is the value to store in the new node
*
* Return: a pointer to the created node, or NULL on failure or if...
* ...parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_child; /* declare left child node variable */

    if (parent == NULL) /* if parent is NULL, return NULL, as per task desc. */
        return (NULL);

    left_child = binary_tree_node(parent, value); /* create left child node */
    /* may need NULL check here? */

    left_child->left = parent->left; /*set lftchild 2 same position as parent*/

    if (left_child->left != NULL) /* check if left child node exists */
        left_child->left->parent = left_child;
    /*
    * ^ If parent already has a left-child, the new node must take its place,
    * and the old left-child must be set as the left-child of the new node.
    */
    parent->left = left_child;
    /*
    * if parent didn't have left child already,
    * then add our left-child on
    */
return (left_child);
}
