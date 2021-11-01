class Node:
    def __init__(self, val=0, neighbors=None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []


class solution:
    def cloneGraph(self, node:'Node'):
        oldToNew = {}

        def clone(node):
            if node in oldToNew:
                return oldToNew[node]
            copy = Node(node.val)
            oldToNew[node] = copy
            for nei in node.neighbors:
                copy.neighbors.append(clone(nei))

        return dfs(node) if node else None
