from TreeNode import TreeNode
from collections import deque

def bfs(root: TreeNode ) -> None: 
    queue = deque([root])
    
    while queue: 
        node = queue.popleft()
        print(node.val)
        if not node.left is None: 
            queue.append(node.left)
        if not node.right is None: 
            queue.append(node.right)
            
def inorder(node: TreeNode | None) -> None:
    if node is None: 
        return
    
    inorder(node.left)
    print(node.val)
    inorder(node.right)
    
def preorder(node: TreeNode | None) -> None:
    if node is None: 
        return
    
    print(node.val)
    inorder(node.left)
    inorder(node.right)
    
def postorder(node: TreeNode | None) -> None:
    if node is None: 
        return
    
    inorder(node.left)  
    inorder(node.right)
    print(node.val)
    