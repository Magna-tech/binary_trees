#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: pointer to the root of the tree
 *
 * Return: number of nodes, 0 if tree is null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = 1;

	return (count);
}
