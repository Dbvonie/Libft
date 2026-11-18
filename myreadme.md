memset:

prototype:
memset is a function that takes a pointer to void lets say *s , s is the starting point means the first box address , and it takes also an int lets name it c for example and thats the value that we re gonna fill the boxes in memory with it , finally we have the lenght type size_t thats an unsigned int made for sizes so basically we will give it the num of sizes that were gonna fill . to summer memset fill many boxes in memory with the same value .

logic of memset:

uhm memset fill each box of memory with a value means each 1 byte , here we have a pointer to void so the function takes whatever idk string or array of numbers so we have to fill the value in each one byte and thats only possible or doable in char type so were gonna turn void *s to unsigned char *s why unsigned so it could take bigger sizes ,


memmove:

prototype:

memmove is a function that takes a pointer to void dst , also a const pointer to void wich is source uhm the string that were gonna give , and the lenght that were gonna move , uhm so basically we have a string for example of characters ABCDEF and we want to move the ABC (src) to another area in the string that is destination and size_t len is how much were gonnq move from source to destination i guess

example:
memmove(str, str + 2, 3) on ABCDEF?

logic:

so basically lets see here for examples we memmove takes three arguments the adresse of the first box of ABCDEF we have the destination is str means we re gonna copy src in the first box address and src start from str + 2 means were gonna start copying from so were gonna start from the third address wich is C and were gonna three value the legnth that w gave to destination 

memmove(str, str + 2, 3) on ABCDEF? for example lets take this , in this case we have dest before src like u mentioned here were not gonna copy bytes from src to dest and were gonna start from right to left without falling into overlapping the out put is gonna be CDEDEF but if src was before dest here were gonna start copying from A to C and here we dont have C anymore so the outfput will be ABABAF instead it should be ABABCF and this is what overlapping is so to solve this were gonna start copying from left if src was before dest means src smaller than dest 


1. What is the purpose of memmove?

the purpose of memove is to copy bytes from src to dest without falling into overlapping 

2. Why does it return void *?

uhm here were returning dest wich is a pointer to char not a pointer to void and the function is returning a pointer to void of ft_memove so how is that even possible if the function is resturning void that means we can return whatever 
