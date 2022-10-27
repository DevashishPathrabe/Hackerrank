""" Node is defined as
class node:
  def __init__(self, data):
      self.data = data
      self.left = None
      self.right = None
"""
def check_binary_search_tree_(root):
    def is_BST(root):
        if(root == None):
            return True, None, None
        boolLeft, minLeft, maxLeft = is_BST(root.left)
        boolRight, minRight, maxRight = is_BST(root.right)
        if(boolLeft and boolRight):
            if(root.left == None and root.right == None):
                return True, root.data, root.data
            elif(root.left == None and not root.right == None):
                if(minRight > root.data):
                    return True, root.data, root.right
            elif(not root.left == None and root.right == None):
                if(maxLeft.data < root.data):
                    return True, minLeft, root.data
            elif(not root.left == None and not root.right == None):
                if(maxLeft < root.data and minRight > root.data):
                    return True, minLeft, maxRight
        return False, None, None
    result, _, _ = is_BST(root)
    return result