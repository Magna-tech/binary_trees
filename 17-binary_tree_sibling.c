#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to the node
 *
 * Return: pointer to the sibling, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *par;
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	else
		par = node->parent;
	if (par->left == node && par->right != NULL)
		sibling = par->right;
	else if (par->right == node && par->left != NULL)
		sibling = par->left;
		
	return (sibling);
}
