#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "BSTree.h"
#include "Queue.h"

typedef struct BSTNode *BSTLink;

typedef struct BSTNode {
	int value;
	BSTLink left, right;
} BSTNode;

// delete root of tree
static
BSTree deleteRoot(BSTree t) {
    if (t == NULL) {
        return NULL;
    } 
    if (t->left == NULL && t->right == NULL) {
        free(t);
        return NULL;
    } else if (t->left != NULL && t->right == NULL) {
        BSTree tmp = t->left;
        free(t);
        return tmp;
    } else if (t->left == NULL && t->right != NULL) {
        BSTree tmp = t->right;
        free(t);
        return tmp;    
    } else {
        BSTree p = t;
        BSTree succ = t->right;
        while (succ->left != NULL) {
            p = succ;
            succ = succ->left;
        }
        t->value = succ->value;
        free(succ);
        if (p = t) {
            p->right = succ->right;
        } else {
            p->left = succ->right;
        }
        
        
        return t;
    }
    
}

// delete a value from a BSTree
BSTree BSTreeDelete(BSTree t, int v) {
    if (t == NULL) {
        return NULL;
    } else if (v < t->value) {
        t->left = BSTreeDelete(t->left, v);
    } else if (v > t->value) {
        t->right = BSTreeDelete(t->right, v);
    } else {
        t = deleteRoot(t);
    }
    return t;
}

// make a new node containing a value
static
BSTLink newBSTNode(int v) {
    BSTLink new = malloc(sizeof(BSTNode));
    new->value = v;
    return new;
}

// free memory associated with BSTree
void dropBSTree(BSTree t) {
    if (t==NULL) return;
    dropBSTree(t->left);
    dropBSTree(t->right);
    free(t);
}

// count #nodes in BSTree
int BSTreeNumNodes(BSTree t) {
    if (t==NULL) {
        return 0;
    } else {
        return 1 + BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right);
    }
}

// count #leaves in BSTree
int BSTreeNumLeaves(BSTree t) {
    if (t == NULL) { 
        return 0;
    } else if (t->left==NULL && t->right==NULL) {
        return 1;
    } else {
         return BSTreeNumLeaves(t->left) + BSTreeNumLeaves(t->right);
    }
}

// insert a new value into a BSTree
BSTree BSTreeInsert(BSTree t, int v) {
    if (t==NULL) {
        t = newBSTNode(v);
    } else if (v < t->value) {
        t->left = BSTreeInsert(t->left, v);
    } else if (v > t->value) {
        t->rigth = BSTreeInsert(t->right, v);
    } 
    return t;
}

// check whether a value is in a BSTree
int BSTreeFind(BSTree t, int v) {
    if (t==NULL) {
        return 0;
    } else if (v < t->value) {
        t->left = BSTreeFind(t->left, v);
    } else if (v > t->value) {
        t->rigth = BSTreeFind(t->right, v);
    } else {
        return 1;
    }
}

/** Returns the height of a tree. */
int btree_height (BSTree t) {
    if (t==NULL) return 0;
    int left = btree_height(t->left);
    int right = btree_height(t->right);
    return 1 + ((left > right) ? left : right);
}

int isBST(BSTree t) {
    if (t==NULL) return 1;
    if (t->left != NULL && t->left->value > t->value) {
        return 0;
    }
    if (t->right != NULL && t->right->value < t->value) {
        return 0;
    }
    if (!isBST(t->left) || !isBST(t->right)) {
        return 0;
    }
    return 1;
}
















