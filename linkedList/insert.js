class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this._length = 0;
    this.head = null;
  }

  add(data) {
    const node = new Node(data);
    // if there is no head, set node to head of list
    if (!this.head) {
      this.head = node;
      this._length += 1;
      return node;
    }
    let current = this.head;
    while (current.next) {
      current = current.next;
    }
    current.next = node;
    this._length += 1;
    return node;
  }
}

const ll = new LinkedList;
ll.add(5);
ll.add(7);
ll.add(9);
ll.add(11);
console.log(ll);
