#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least 1 child
 * @tree: pointer to the root
 *
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	return ((tree->left || tree->right) + left_nodes + right_nodes);
}
