#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to the node
 *
 * Return: pointer to the sibling, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
