#include "binary_trees.h"
/**
 * binary_tree_uncle - find the uncle of a node
 * @node: a pointer to the node to find the uncle for
 *
 * Return: pointer to the uncle node, NULL otherwise or if node is null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	binary_tree_t *par;
	binary_tree_t *grand;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	par = node->parent;
	if (par->parent == NULL)
		return (NULL);
	grand = par->parent;
	if (grand->left == par && grand->right != NULL)
		uncle = grand->right;
	else if (grand->right == par && grand->left != NULL)
		uncle = grand->left;

	return (uncle);
}
