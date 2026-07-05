from TreeNode import TreeNode
from collections import deque

def buildTree(arr: list[int | None]) -> TreeNode | None:
    if not arr: 
        return None
    
    root = TreeNode(arr[0])
    queue = deque([root])
    i = 1
    
    while i < len(arr) and queue: 
        node = queue.popleft()
        
        if i < len(arr) and arr[i] is not None: 
            node.left = TreeNode(arr[i])  
            queue.append(node.left)
        i += 1
        
        if i < len(arr) and arr[i] is not None: 
            node.right = TreeNode(arr[i])
            queue.append(node.right)
        i += 1
        
    return root