#include "binary_trees.h"

/**
 * binary_tree_height_recursion - measures the height of a binary tree
 * @tree: root node of the tree to measure
 *
 * Return: the height or 0 if fail
 */
size_t binary_tree_height_recursion(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);
	lheight = binary_tree_height_recursion(tree->left);
	rheight = binary_tree_height_recursion(tree->right);
	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}

/**
 * binary_tree_height2 -- a height function that doesn't -1 at the end
 * @tree: root node to find height of
 * Return: height of given node
 */
size_t binary_tree_height2(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_recursion(tree));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node of tree to be measured
 * Return: returns the difference between the balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height2(tree->left) -  binary_tree_height2(tree->right));
}
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

