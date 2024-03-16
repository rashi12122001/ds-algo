func gameResult(head *ListNode) string {
    var oddP,evenP int

    for head != nil {
        if head.Val < head.Next.Val {
            oddP++
        } else {
            evenP++
        }
        head = head.Next.Next
    }

    switch {
    case oddP > evenP:
        return "Odd"
    case oddP < evenP:
        return "Even"
    default:
        return "Tie"
    }
}
