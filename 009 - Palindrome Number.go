func isPalindrome(x int) bool {
    if x < 0 {
        return false
    }

    if x < 10{
        return true
    }

    if x%10 == 0 {
        return false
    }

    aux := 0
    for x > 0 {
        aux = aux*10+x%10
        x /= 10

        if aux == x || aux == x/10 {
            return true
        }
    }

    return false
}
