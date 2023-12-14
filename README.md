
# 0x19. C - Stacks, Queues - LIFO, FIFO

Alx project 19 - Stacks, Queues - LIFO, FIFO


## STACK - LIFO

![App Screenshot](https://www.masaischool.com/blog/content/images/wordpress/2022/04/Last-in-first-out-1024x683.png)


## QUEUE - FIFO

![App Screenshot](https://www.researchgate.net/publication/361873108/figure/fig3/AS:1182492224688130@1658939524537/Schematic-diagram-of-the-queue-memory-operation-FIFO-principle-A-new-element-added-to.png)
## The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### Monty byte code files

Files containing Monty byte codes usually have the `.m `extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
## Opereation codes
| opcode | description |
|----------|----------|
|   `push`| The opcode push pushes an element to the stack.| 
| `pall`| The opcode pall prints all the values on the stack, starting from the top of the stack.| 
|`pint` | The opcode pint prints the value at the top of the stack, followed by a new line.|
| `pop`| The opcode pop removes the top element of the stack.|
| `swap` | The opcode swap swaps the top two elements of the stack.|
| `add` | The opcode add adds the top two elements of the stack.|
|`nop` | The opcode nop doesn’t do anything.|
