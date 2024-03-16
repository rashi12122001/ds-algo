func frequenciesOfElements(head *ListNode) *ListNode {
    counts := make(map[int]int)
    for head != nil {
        counts[head.Val]++
        head = head.Next
    }
    ans := &ListNode{}
    for _,v := range counts {
        node := &ListNode{
            Val: v,
            Next: ans.Next,
        }
        ans.Next = node
    }
    return ans.Next
}
