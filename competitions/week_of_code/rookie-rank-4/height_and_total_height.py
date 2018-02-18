#!/usr/bin/env python


# BST
class Node:
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data

    def insert(self, data):
        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data


def remove_duplicates(lst):
    d = {}
    out = []
    for i in range(len(lst)):
        if not d.get(lst[i], None):
            out.append(lst[i])
            d[lst[i]] = 1
    return out


def _height(bst):
    if bst is None:
        return 0
    else:
        return 1 + max(_height(bst.left), _height(bst.right))


def height(bst):
    return _height(bst) - 1


def total_height(bst):
    if bst is None:
        return 0
    else:
        x = height(bst.right)
        x = x if x >=0 else 0
        y = height(bst.left)
        y = y if y >=0 else 0
        return x + y + total_height(bst.left) + total_height(bst.right)


if __name__ == "__main__":
    n = int(input())
    arr = remove_duplicates(list(map(int, input().rstrip().split())))
    root = Node(arr[0])
    for a in arr[1:]:
        root.insert(a)
    h = height(root)
    print(h)
    print(total_height(root) + h)
