#include "binary_trees.h"
/**
 * binary_tree_height - find height of a tree
 * @tree: pointer to the root of the tree
 *
 * Return: height, 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}
