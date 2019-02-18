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
add an element 
remove one element in the list
