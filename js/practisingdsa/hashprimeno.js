Why prime no?
the prime number in the hash is helpful in spreading out the keys more uniformly
it's also helpful if the array that you're putting values into has a prime length
        DEALING WITH COLLISIONS
even with a large array & great hash function collision are inevitable
there are many strategies for dealing with collisions but we'll focus on two:
    1. seperate chaining
    2. linear chaining

        seperate chaining
with seperate chaining at each index in our array we stores values using a more
sophisticated data structure (e.g. an array or linked list)
this allows us to store multiple key value pairs at same index

        linear probing
with linear probing when we find a collision we saech through the array to find
the next empty slot

