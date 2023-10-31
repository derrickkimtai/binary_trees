#include "binary_trees.h"
/**
*binary_tree_node - function that creates a binary tree node
*@parent: pointer to the parent node
*@value:value to put in the new node
*Return:pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_node_t *node = (binary_tree_tnode_t *)malloc(sizeof(binary_tree_t));
    if (node == NULL)
    {
        return (NULL);
    }
    node->value = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    return (node);
}