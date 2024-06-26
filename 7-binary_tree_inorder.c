#include "binary_trees.h"

/**
 * binary_tree_inorder - go through a binary tree using in-order traversal.
 * @tree: A pointer to root node of the tree to traverse;
 * @func: A pointer to function to call for each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
