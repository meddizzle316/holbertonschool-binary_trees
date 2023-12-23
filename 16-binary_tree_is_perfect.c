#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks to see if a binary tree is perfect
 * @t: given root node of binary tree
 * Return: 1 if true, 0 if false or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *t)
{

	if (t == NULL)
		return (1);
	if ((binary_tree_balance(t)) != 0)
		return (0);
	return (binary_tree_is_perfect(t->right) && binary_tree_is_perfect(t->left));
}

