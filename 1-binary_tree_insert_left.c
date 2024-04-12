#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as a left-child of
 *                           of another in binary tree.
 * @parent: A pointer to node that insert the left-child in.
 * @value: value to store in new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to new node.
 *
 * Description: If parent already has a left-child, new node
 *              takes it's place and the old left-child is set as
 *              the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
