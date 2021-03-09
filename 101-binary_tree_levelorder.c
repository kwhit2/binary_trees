#include "binary_trees.h"

/* helper queue for levelorder */
typedef struct qnode_s
{
  struct qnode_s* next;
  const binary_tree_t value;
} *qnode;

void enqueue( const binary_tree_t queue* q, node n)
{
  qnode node = malloc(sizeof(struct qnode_s));
  node->value = n;
  node->next = 0;
  if (q->end)
    q->end->next = node;
  else
    q->begin = node;
  q->end = node;
}

int queue_empty(queue* q)
{
  return !q->begin;
}

/**
 * binary_tree_levelorder - traverse through the tree level order tree
 * @tree: the root of the tree
 * @func: function to call for each node
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
  queue nodequeue = {};
  enqueue(&nodequeue, tree);
  while (!queue_empty(&nodequeue))
  {
    next = dequeue(&nodequeue);
    func(next->value);
    if (next->left)
      enqueue(&nodequeue, next->left);
    if (next->right)
      enqueue(&nodequeue, next->right);
  }
}