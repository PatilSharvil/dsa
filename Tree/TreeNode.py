from __future__ import annotations

class TreeNode:
    def __init__(self, data: int | None) -> None:
        self.val = data 
        self.left: TreeNode | None = None
        self.right: TreeNode | None = None