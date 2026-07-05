from TreeNode import TreeNode
from BuildTree import buildTree
from Traversal import bfs
from Traversal import inorder
from Traversal import preorder
from Traversal import postorder

if __name__ == "__main__": 
    arr: list = [1,2,3,4,5,6, 7]
    root: TreeNode | None = buildTree(arr)
    
    if root is not None:
        bfs(root)
        inorder(root)
        preorder(root)
        postorder(root)
        
    else:
        print("Tree could not be built.")