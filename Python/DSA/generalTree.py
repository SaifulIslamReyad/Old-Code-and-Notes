class Tree:
    def __init__(self,data):
        self.data=data
        self.parent=None
        self.children=[]
    def append(self,child):
        self.children.append(child)
        child.parent=self
    def printTree (self):
        print(self.getLevel() * "    " + "|--"+ self.data)
        if len(self.children):
            for i in self.children:
                i.printTree()
    def getLevel(self):
        c=0
        x=self.parent
        while x!=None:
            x=x.parent
            c+=1
        return c

if __name__=="__main__":
    root= Tree("root")
    x=Tree("level11")
    y=Tree("level12")
    z=Tree("level13")
    root.append(x)
    root.append(y)
    root.append(z)
    x.append(Tree("reyad"))
    x.append(Tree("saif"))
    root.printTree()
    print(x.getLevel())