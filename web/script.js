class stack {
    constructor() {
            this.items = []
            this.count = 0
        }
        //add element to top of stack
    push(element) {
        this.items[this.count] = element
        this.count += 1
        console.group('${element}added to ${this.count}')
        return this.count - 1
    }
    pop() {
        if (this.count == 0) reutrn undefined
        let deleteItem = this.items[this.count - 1]
        this.count -= 1
        return deleteItem
    }
}
const stack = new stack();
stack.push(1111);
stack.push(1111);
stack.push(1111);
stack.pop()