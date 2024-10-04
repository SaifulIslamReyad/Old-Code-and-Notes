class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def append(self, data):
        new_node = Node(data)
        if self.head == None :
            self.head = new_node
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node


    def delete(self, data):
        if self.head.data == data:
            self.head = self.head.next
            return
        current = self.head
        while current.next:
            if current.next.data == data:
                current.next = current.next.next
                return
            current = current.next

    def search(self, data):
        current = self.head
        while current:
            if current.data == data:
                return True
            current = current.next
        return False

    def display(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")
    
    def insert_at_position(self, data, position):
        new_node = Node(data)
        if position <= 0:
            new_node.next = self.head
            self.head = new_node
        else:
            current = self.head
            for _ in range(position - 1):
                if current:
                    current = current.next
                else:
                    break
            if current:
                new_node.next = current.next
                current.next = new_node

    def delete_at_position(self, position):
        if position < 0 or not self.head:
            return
        if position == 0:
            self.head = self.head.next
            return
        current = self.head
        for _ in range(position - 1):
            if current.next:
                current = current.next
            else:
                break
        if current.next:
            current.next = current.next.next

    def sort(self):
        swapped = True
        while swapped:
            swapped = False
            current = self.head
            while current.next:
                if current.data > current.next.data:
                    current.data, current.next.data = current.next.data, current.data
                    swapped = True
                current = current.next
                
if __name__=="__main__":
    LL = LinkedList()
    LL.append(10); LL.append(20); LL.append(30); LL.display()
    LL.delete(20);LL.display()
    print("Is 10 in the list?", LL.search(10))
    print("Is 20 in the list?", LL.search(20))
    LL = LinkedList()
    LL.append(10);LL.append(20);LL.append(5)
    LL.insert_at_position(15, 1)  ; LL.display()
    LL.delete_at_position(2)  ; LL.display()
    LL.sort() ;LL.display()     
