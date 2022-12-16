#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node as left child
 * @parent: pointer to the node to insert left child in
 * @value: value to be stored in the new node
 *
 * Return: pointer to new node, NULL on failure of if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *current;

	if (parent == NULL)
		return (NULL);
	new = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		parent->left = new;
	}
	else
	{
		current = parent->left;
		current->parent  = new;
		new->n = value;
		new->parent = parent;
		new->left = current;
		new->right = NULL;
		parent->left = new;
	}

	return (new);
}
