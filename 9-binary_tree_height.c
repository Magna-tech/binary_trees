#include "binary_trees.h"

/**
 * binary_tree_height - find height of a tree
 * @tree: pointer to the root of the tree
 *
 * Return: height, 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t dist = b_height(tree);

	if (dist == 0)
	{
		return (0);
	}
	return (dist - 1);
}


/**
 * b_height - returns the height of a function recursively
 * @tree: pointer to the root of the tree
 *
 * Return: height of the tree
 */
size_t b_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t left = b_height(tree->left);
		size_t right = b_height(tree->right);

		return (1 + (left > right ? left : right));
	}
}
