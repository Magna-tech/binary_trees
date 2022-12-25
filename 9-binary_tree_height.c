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
	else
		return (1);
}
