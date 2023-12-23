#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @t: root node to be checked
 * Return: 1 if full or 0 if failed or not full
 */
int binary_tree_is_full(const binary_tree_t *t)
{
	if (t == NULL && t->parent != NULL)
		return (1);
	if (t->left == NULL && t->right == NULL)
		return (1);
	if ((t->left) && (t->right))
		return (binary_tree_is_full(t->left) && binary_tree_is_full(t->right));
	return (0);
}
