#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaves in a tree
 * @tree: pointer to the root of the tree
 *
 * Return: number of leaves, 0 if tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = 1;

	return (count);
}
