#include "binaryNode.h"
#include <queue>

class BinarySearchTree {
private:
    BinaryNode* root;
public:
    BinarySearchTree();
    void setRoot(BinaryNode* node);
    BinaryNode* getRoot();
    bool isEmpty();

    void inorder(BinaryNode* node);
    void preorder(BinaryNode* node);
    void postorder(BinaryNode* node);
    void levelorder(BinaryNode* node);

    BinaryNode* search(BinaryNode* node, int key);
    void insert(BinaryNode* node);
    void insertRecur(BinaryNode* root, BinaryNode* node);
};