#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the node is a root
 * @node: pointer to a given node
 *
 * Return: 1 if node is a root, 0 otherwise of if null
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
