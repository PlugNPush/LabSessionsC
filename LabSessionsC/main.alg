
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




