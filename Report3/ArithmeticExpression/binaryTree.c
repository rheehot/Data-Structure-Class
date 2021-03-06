#include <stdio.h>
#include <stdlib.h>
#include "binaryTree.h"
#include "queue.h"

BinaryNode makeNode(char elem, BinaryNode left, BinaryNode right) {
    BinaryNode node = (BinaryNode)malloc(sizeof(struct binaryNode));
    node->value = elem;
    node->left = left;
    node->right = right;

    return node;
}

BinaryTree makeTree(BinaryNode root) {
    BinaryTree tree = (BinaryTree)malloc(sizeof(struct binaryTree));

    return tree;
}

bool isTreeEmpty(BinaryTree tree) {
    if (tree->root == NULL) {
        return true;
    } else {
        return false;
    }
}

void setRoot(BinaryTree tree, BinaryNode root) {
    tree->root = root;
}

void inorder(BinaryNode node) {
    if (node != NULL) {
        inorder(node->left);
        printf("[%c] ", node->value);
        inorder(node->right);
    }
}

void preorder(BinaryNode node) {
    if (node != NULL) {
        printf("[%c] ", node->value);
        preorder(node->left);
        preorder(node->right);
    }
}

void postorder(BinaryNode node) {
    if (node != NULL) {
        postorder(node->left);
        postorder(node->right);
        printf("[%c] ", node->value);
    }
}

void levelorder(BinaryNode node) {
    Queue queue = makeQueue();
    enqueue(queue, node);
    while (!isQueueEmpty(queue)) {
        BinaryNode temp = dequeue(queue);
        if (temp != NULL) {
            printf("[%c] ", temp->value);
            enqueue(queue, temp->left);
            enqueue(queue, temp->right);
        }
    }
}