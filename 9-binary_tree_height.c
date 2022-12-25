#include "binary_trees.h"
int height(const binary_tree_t *tree);
/**
 * binary_tree_height - find height of a tree
 * @tree: pointer to the root of the tree
 *
 * Return: height, 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int tree_height;

	tree_height = height(tree);
	if (tree_height == 0)
		return (tree_height);
	else
		return (tree_height - 1);
}


/**
 * height - function that return the height of a tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left_height = height(tree->left);
	int right_height = height(tree->right);

	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}
