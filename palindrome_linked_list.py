# Program to check whether the given linked list is a palindrome

def isPalindrome(head):
    arr = []
    while head != None:
        arr.append(head.val)
        head = head.next
    if arr == arr[::-1]:
        return True
    return False