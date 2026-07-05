from TreeNode import TreeNode
from collections import deque
from BuildTree import buildTree


def bfs(root: TreeNode ) -> int: 
    queue = deque([root])
    height = 0
    while queue: 
        height += 1
        for _ in range(len(queue)): 
            node = queue.popleft()     
            if not node.left is None: 
                queue.append(node.left)
            if not node.right is None: 
                queue.append(node.right)
    return height

def solution(root: TreeNode): 
    height = bfs(root)
    print(height)


if __name__ == "__main__":
    arr: list = [1,2,3,4,5,6,7,None,None,None,None,8]
    root: TreeNode | None = buildTree(arr)
    
    if root is not None:
        solution(root)
    else:
        print("Tree could not be built.")
    
    
    