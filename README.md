# C - Binary trees
<h2>Binary Tree</h2>
<p>A binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child.</p>
<p>A Binary Tree is a non-linear data structure in which a node can have 0, 1 or 2 nodes. Individually, each node consists of a left pointer, right pointer and data element.</p>
<p>There is no required organization structure of the nodes in the tree.</p>
<p>The operations that can be performed are deletion, insertion and traversal</p>
<ul>Types</ul>
<p>There are several types. Most common ones are:</p>
<li>Complete Binary Tree</li>
<li>Full Binary Tree</li>
<li>Extended Binary Tree</li>
<p>When comparing binary trees to linked lists in terms of time complexity, it's important to note that the specific characteristics of the binary tree and the linked list will influence the performance of various operations. Here's a comparison of the time complexities for some common operations between these data structures:

1. Searching:
   - Binary Tree: In a binary tree, searching for a specific element can be more efficient than in a linked list. The average and best-case time complexity for searching in a binary tree is O(log n), where 'n' is the number of elements in the tree. This is because the binary tree's structure allows for efficient elimination of half the remaining elements with each comparison.
   - Linked List: In a singly linked list, searching for an element involves traversing the list from the beginning to the end, which takes O(n) time in the worst case.

2. Insertion:
   - Binary Tree: Insertion in a binary tree, if the tree remains balanced, takes O(log n) time on average. This is because you follow the tree structure to find the insertion point, and the tree remains relatively balanced.
   - Linked List: Inserting an element at the end of a linked list takes O(1) time (constant time). However, inserting an element at a specific location in a singly linked list requires traversing the list to find the insertion point, which can take O(n) time in the worst case.

3. Deletion:
   - Binary Tree: Deletion in a binary tree, if the tree remains balanced, has an average time complexity of O(log n). You follow the tree structure to find and remove the element. The worst-case time complexity can be O(n) if the tree becomes highly unbalanced.
   - Linked List: Deleting an element from a linked list can take O(n) time in the worst case, as you may need to traverse the list to find and remove the element.

In summary, binary trees can provide significant time complexity gains over linked lists, especially for search, insert, and delete operations when the tree remains balanced. The binary tree structure allows for efficient elimination of half the elements with each comparison, which results in an average time complexity of O(log n) for these operations. However, it's important to ensure the binary tree remains balanced to maintain these efficiencies. Self-balancing binary tree structures like AVL trees and Red-Black trees are used to automatically maintain balance during insertions and deletions. In contrast, linked lists do not have the inherent structural advantages of binary trees and can have higher time complexity for these operations, especially for large datasets.</p>
<h2>Binary Search Tree</h2>
<p>Binary Search Tree is a node-based binary tree data structure which has the following properties:
		<li>The left subtree of a node contains only nodes with keys lesser than the node’s key.</li>
		<li>The right subtree of a node contains only nodes with keys greater than the node’s key.</li>
		<li>The left and right subtree each must also be a binary search tree.</li>
</p>
<p>As these are sorted binary trees, they are used for fast and efficient binary search, insertion and deletion.</p>
<ul>Types</ul>
<p>The most popular ones are:</p>
<li>AVL Trees</li>
<li>Splay Trees</li>
<li>Tango Trees</li>
<li>T-Trees</li>
<p>The main advantage of Binary Search Trees (BSTs) over linked lists in terms of time complexity is the efficiency of searching, inserting, and deleting elements. Here's a comparison of these two data structures:

1. Searching:
   - Linked List: In a singly linked list, searching for a specific element involves traversing the list from the beginning (or end) until the target element is found. In the worst case, this requires checking every node, resulting in a time complexity of O(n), where 'n' is the number of elements in the list.
   - Binary Search Tree (BST): In a balanced BST, searching for an element is highly efficient. The average and best-case time complexity for searching in a balanced BST is O(log n), where 'n' is the number of elements. This is because the tree's structure allows you to eliminate a significant portion of the tree with each comparison.

2. Insertion:
   - Linked List: In a singly linked list, inserting an element at a specific location typically requires traversing the list to find the insertion point, which can take O(n) time in the worst case.
   - Binary Search Tree (BST): Insertion in a balanced BST also takes O(log n) time on average since you follow the tree structure to find the insertion point. However, if the tree becomes unbalanced, the worst-case time complexity for insertion may degrade to O(n).

3. Deletion:
   - Linked List: Deleting an element from a singly linked list can take O(n) time in the worst case, as you may need to traverse the list to find and remove the element.
   - Binary Search Tree (BST): Deletion in a balanced BST has an average time complexity of O(log n). Similar to insertion, the worst-case time complexity can be O(n) if the tree becomes unbalanced.

It's important to note that the efficiency of a BST heavily depends on its balance. If the BST is well-balanced, it can maintain efficient O(log n) time complexity for search, insert, and delete operations. However, if it becomes highly unbalanced, it may degenerate into a linked list-like structure, causing worst-case time complexities similar to those of linked lists.

To address this issue, self-balancing binary search tree variants like AVL trees and Red-Black trees are used. These structures automatically maintain balance during insertions and deletions, ensuring that the tree remains efficient for these operations. When dealing with self-balancing BSTs, you can expect the same O(log n) average-case time complexity for these operations regardless of the input data's order.</p>
