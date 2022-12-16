#include "binary_trees.h"
/**
 * binary_tree_size - find the size of the tree
 * @tree: pointer to the root of the tree
 *
 * Return: size, 0 if tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = 1;

	return (size);
}
