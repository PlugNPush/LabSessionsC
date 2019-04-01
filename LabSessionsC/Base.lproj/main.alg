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




function dissplayeven(val[], next[]: arrays of integers, bv: integer)
changed parameters: val, next, bv
local variable: i: integer

begin
i <- bv
while (i != 0)
    if (i % 2 = 1 AND val[i] % 2 = 0) then
        write(val[i])
    end if
    i <- next[i]
end while
end


function remove(array[], position, length)
.............

begin

while position < length
    array[position] = array[postion + 1]
    position+1
end while
array[length] = NULL
end



if (be = 0) then return false
else
    val[be] <- x
    count <- 1
    pred <- 0
    cur <- bv

    while (count < pos AND cur != 0)
        count <- count + 1
        pred <- cur
        cur <- next[cur]
    end while

    if pred = 0 then addTop(val, next, bv, be, x)

    else
        next[pred] <- be
        tmp <- next[be]
        next[be] <- cur
        be <- tmp
        return true
    end if
end if
end


removeTop(val, next: Array of integers, bv: Integer)
changed parameters: bv, val, next
copied parameters : /
local variable: s: Integer

begin

val[bv] <- 0
s <- next[bv]
next[bv] <- 0
bv <- s

end


removeEnd(val, next: Array of integers, be: Integer)
changed parameters: be, val, next
copied parameters : /
local variable: s, i: Integers

begin

val[be] <- 0
s <- 1
i <- 1
while i <= be and s = 1 do
    if next[i] = be then
        s <- 0
        next[i] <- 0
        be <- i
    end if
    i <- i + 1
end while

end

removeElement(val, next: Array of integers, bv, be, x: Integers)
changed parameters: val, next
copied parameters : x, be, bv
local variable: f, c, s, a, i: Integers

// F = FOUND AND COMPLETED / C = CURRENT POSITION / S = SAVE OF THE POSITION AFTER X / A = INVERSE ACHIEVE SKIP X PROCESS / I = COUNTER

begin

f <- 0
c <- bv
while f = 0 and c != be do
    if val[c] = x then
        val[c] = 0
        s <- next[c]
        a <- 1
        i <- 1
        while i <= c and a = 1 do
            if next[i] = c then
                a <- 0
                f <- 1
                next[i] <- s
            end if
            i <- i + 1
        end while
    end if
    c <- next[c]
end while

end




CE correction
cf1: Write a function that performs the swap between two values located in two positions of an array of integers. The array, its length and the subscripts of the two values to be swaped are given as parameters of the function.

function swap(a[]: array of integers, l, pos1, pos2: integers): boolean
changed parameters: a
copied parameters: l, pos1, pos2
local variable: temp: integer

begin

if (pos1 <= 0 or pos1 > l or pos2 <= 0 or pos2 > l) then
    return false
end if
temp <- a[pos1]
a[pos1] <- a[pos2]
a[pos2] <- temp
return true
end


write a function that returns the position of the minimum value in an array of integers

function(a[]: array of integers, l: integer): integer
changed parameters: /
copied parameters: a, l
local variable: posmin, i: integer

begin
if (l = 0) then
    return -1
end if
posmin <- 1
for i <- 2 to l do
    if (a[i] < a[posmin]) then
        posmin <- i
    end if
end for
return posmin
end

Using the two previous functions, write a function that sorts an array of integers (selection sorting algotythm). If the array contains n values, this function consists, at each iteration number i, in swaping (if necessary) the element at position i and the minimum of the array delimited by the subscript i and the subscript n. Such an array is denoted by T+i-1.

function selectSort(a[]: array if integers, l: integer)
changed parameters: a
copied parameters: l
local variables: posmin, i: integer

begin
for i <- 1 to l-1 do
    posmin <- posMin(a+i-1, l-i+1)
    if (posmin != i) then
        swap(a, i, posmin, l-i+1)
    end if
end for
end




structure types

structure Date
begin
    mounth: integer
    day: integer
    year: integer
end

structure Article
begin
    name[30]: array of characters
    code: integer
    price: real
end

structure Student
begin
    fname[30]: array of characters
    lname[30]: array of characters
    bdate: Date
end
