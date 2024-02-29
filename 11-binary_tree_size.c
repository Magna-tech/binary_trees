#include "binary_trees.h"
/**
 * binary_tree_size - find the size of the tree
 * @tree: pointer to the root of the tree
 *
 * Return: size, 0 if tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t left = binary_tree_size(tree->left);
		size_t right = binary_tree_size(tree->right);

		return (1 + left + right);
	}
}
