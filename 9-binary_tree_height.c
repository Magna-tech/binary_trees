#include "binary_trees.h"

/**
 * binary_tree_height - find height of a tree
 * @tree: pointer to the root of the tree
 *
 * Return: height, 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (b_height(tree) - 1);
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
		return (0);

	size_t left = b_height(tree->left);
	size_t right = b_height(tree->right);

	return (1 + (left > right ? left : right));
}
