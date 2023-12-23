#include "binary_trees.h"
int binary_tree_is_full2(const binary_tree_t *t);

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @t: root node to be checked
 * Return: 1 if full or 0 if failed or not full
 */
int binary_tree_is_full(const binary_tree_t *t)
{
	if (t == NULL)
		return (0);
	return (binary_tree_is_full2(t));
}
/**
 * binary_tree_is_full2 - checks if a binary tree is full
 * @t: root node to be checked
 * Return: 1 if full or 0 if failed or not full
 */
int binary_tree_is_full2(const binary_tree_t *t)
{
	if (t == NULL)
		return (1);
	if (t->left == NULL && t->right == NULL)
		return (1);
	if ((t->left) && (t->right))
		return (binary_tree_is_full2(t->left) && binary_tree_is_full2(t->right));
	return (0);
}
