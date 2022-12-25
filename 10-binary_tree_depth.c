#include "binary_trees.h"
/**
 * binary_tree_depth - find tree depth
 * @tree: pointer to the node to measure depth
 *
 * Return: depth, 0 if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left = binary_tree_depth(tree->left);
	size_t right = binary_tree_depth(tree->right);
	
	return (left > right) ? (left + 1) : (right + 1);
}
