function: Reverse(a[]: Array of characters): Array of Characters
local variable: b: Integer, c: Char
changed variable: a

begin
    b <- length(a[])-1
    for i<-0 to i<-b/2 do:
        c <- a[i]
        a[i] <- a[b-i]
        a[b-i] <- c
    end for
return a
end


// TD 3
function: empty(val[], next[]: Array, bv, be, length: integer)
copied parameter: length
changed parameter: bv, be, val, next
local variable: x: integer

begin
be <- 1
bv <- 0
for i<-1 to length do:
    next[i] <- i+1
end for
next[length] <- 0
end

//

Add element on the top of the list
add an element on the bottom of the list
remove element on the top of the list
remove element on the bottom of the list
remove one element in the list

-> linked list !!!


Shot on iPhone on 18.02.2019
Redo the exercices using the model




All this is false because it deals with ordinary lists instead of linked lists !

function: addOnTop(Array[]: Array of integers, element, length: integers)
copied parameter: length, element, Array
changed parameter: Array, length
local variable: /

begin
Array[length+1] <- element
length <- length + 1
end


function: addOnBottom(Array[]: Array of integers, element, length: integers)
copied parameter: length, element, Array
changed parameter: Array, length
local variable: newArray[]

begin
newArray[0] <- element
for i <- 1 to i = length do
    newArray[i] <- Array[i-1]
end for
length <- length + 1
end


function: removeOnTop(Array[]: Array of integers, length: integers)
copied parameter: length, Array
changed parameter: Array, length
local variable: /

begin
Array[length] <- null
length <- length - 1
end
