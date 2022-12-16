#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to the parent node
 * @value: value to be inserted
 *
 * Return: pointer to the new node, NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent == NULL)
	{
		new->n = value;
		new->parent = NULL;
		new->left = NULL;
		new->right = NULL;
		parent = new;
	}
	else
	{
		if (parent->left == NULL)
		{
			new->n = value;
			new->parent = parent;
			new->left = NULL;
			new->right = NULL;
			parent->left = new;
		}
		else if (parent->right == NULL)
		{
			new->n = value;
			new->parent = parent;
			new->left = NULL;
			new->right = NULL;
			parent->right = new;
		}

	}

	return (new);
}
