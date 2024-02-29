#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaves in a tree
 * @tree: pointer to the root of the tree
 *
 * Return: number of leaves, 0 if tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t l_leaves = binary_tree_leaves(tree->left);
	size_t r_leaves = binary_tree_leaves(tree->right);

	return (l_leaves + r_leaves);
}
