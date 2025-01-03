class ListStack:
    def __init__(self):
        self._L = []

    def push(self, item):
        self._L.append(item)

    def pop(self):
        return self._L.pop()

    def peek(self):
        return self._L[-1]

    def __len__(self):
        return len(self._L)

    def isempty(self):
        return len(self) == 0

stack_c = ListStack()

class BadStack(ListStack):
    def push(self, item):
        self._L.insert(0, item)
    
    def pop(self):
        return self._L.pop(0)
    
    def peek(self):
        return self._L[0]
