#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as right child
 * @parent: pointer to the node to insert the right child in
 * @value: the value to be stored in the new node
 *
 * Return: pointer to the created node, NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *current;

	if (parent == NULL)
		return (NULL);
	new = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		parent->right = new;
	}
	else
	{
		current = parent->right;
		current->parent = new;
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = current;
		parent->right = new;
	}

	return (new);
}
