""" Node is defined as
class node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
"""

def checkBST(root):
    return(InOrder(root, [-1]))
def InOrder(root, prev):
    result = True
    if(root.left is not None):
        result &= InOrder(root.left,prev)
    if(prev[0] >= root.data):
        return False
    prev[0] = root.data
    if(root.right is not None):
        result &= InOrder(root.right,prev)
    return result