
class TreeNode():
    def __init__(self,value=None,leftNode=None,rightNode=None):
        self.value = value
        self.leftNode = leftNode
        self.rightNode = rightNode

class Tree:
    def __init__(self,root=None):
        self.root = root

    def midOrder(self):
        if not self.root:
            return
        stackNode = []
        node = None
        node = self.root
        while stackNode or node:
            while node:
                stackNode.append(node)
                node = node.leftNode
            if stackNode:
                node = stackNode.pop()
                print node.value
                node = node.rightNode



if __name__ == '__main__':
    n10 = TreeNode(10, 0, 0)
    n9 = TreeNode(9, 0, 0)
    n3 = TreeNode(3, n9, n10)
    n8 = TreeNode(8, 0, 0)
    n14 = TreeNode(14, 0, 0)
    n7 = TreeNode(7, 0, 0)
    n16 = TreeNode(16, n7, 0)
    n2 = TreeNode(2, n14, n8)
    n1 = TreeNode(1, n2, n16)
    root = TreeNode(4, n1, n3)
    tree = Tree(root)
    tree.midOrder()


