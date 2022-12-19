#include "binary_trees.h"
/**
 * binary_tree_uncle - find the uncle of a node
 * @node: a pointer to the node to find the uncle for
 *
 * Return: pointer to the uncle node, NULL otherwise or if node is null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	grand = node->parent->parent;
	if (grand->left == node->parent)
		return (grand->right);
	return (grand->left);
}
