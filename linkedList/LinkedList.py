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
        self.tail = currentNode.next
        self.length += 1


    def pop(self):
        if not self.head:
            return

        prevHead = self.head

        if self.head.next:
            self.head = self.head.next
        else:
            self.head = None
            self.tail = None

        self.length -= 1
        return prevHead.data


    def push(self, data):
        if not self.head:
            self.head = Node(data)
            self.tail = self.head

        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode
        self.length += 1


    def remove(self):
        self.pop()
