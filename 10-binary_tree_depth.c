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
	else
		return (1);
}
