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
