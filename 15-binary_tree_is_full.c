#include "binary_trees.h"


/**
 * binary_tree_height_recursion - measures the height of a binary tree
 * @t: root node of the tree to measure
 *
 * Return: the height or 0 if fail
 */
size_t binary_tree_height_recursion(const binary_tree_t *t)
{
	int lheight = 0, rheight = 0;

	if (t == NULL)
		return (0);
	lheight = binary_tree_height_recursion(t->left);
	rheight = binary_tree_height_recursion(t->right);
	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @t: root node to be checked
 * Return: 1 if full or 0 if failed or not full
 */
int binary_tree_is_full(const binary_tree_t *t)
{
	/**
	 * int lh, rh;

	if (t == NULL || (t->right != NULL && t->left != NULL))
		return (1);
	lh = binary_tree_height_recursion(t->left);
	rh = binary_tree_height_recursion(t->right);
	return (lh == rh && binary_tree_is_full(t->left)
		&& binary_tree_is_full(t->right));
	*/

	if (t == NULL)
		return (1);
	if (t->left == NULL && t->right == NULL)
		return (1);

	if ((t->left) && (t->right))
		return (binary_tree_is_full(t->left) && binary_tree_is_full(t->right));

	return (0);
}
