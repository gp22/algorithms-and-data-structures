class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.length = 0

    def add(self, data):
        if not self.head:
            self.head = Node(data)
            self.length += 1
            self.tail = self.head
            return

        currentNode = self.head
        while currentNode.next:
            currentNode = currentNode.next

        currentNode.next = Node(data)
        self.length += 1

    def print_list(self):
        if not self.head:
            return

        currentNode = self.head
        while currentNode.next:
            print(f'current node data: {currentNode.data}')
            if currentNode.next:
                print(f'next node data: {currentNode.next.data}')
            currentNode = currentNode.next

    def pop(self):
        if not self.head:
            return

        if self.head.next:
            self.head = self.head.next

    def push(self):
        pass

    def remove(self):
        self.pop()
