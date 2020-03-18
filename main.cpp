#include "LinkedBST.cpp"
#include "ArrayBST.cpp"
int main()
{

    std::cout << "Linked List Implementation:" << std::endl;
    LinkedBST tree;
    tree.add(tree.root, 35);
    tree.add(45);
    Node *newNode = new Node();
    newNode->data = 50;
    tree.add(tree.root, newNode);
    tree.preorderTraversal(tree.root);
    tree.deleteBST(tree.root, 45);
    std::cout << std::endl
              << tree.search(tree.root, 50) << std::endl;
    std::cout << tree.min() << std::endl;
    std::cout << tree.max() << std::endl;
    tree.preorderTraversal(tree.root);
}
