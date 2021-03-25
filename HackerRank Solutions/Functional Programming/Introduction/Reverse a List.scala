def f(arr:List[Int]):List[Int] = {
    def revList(orig: List[Int], rev: List[Int]): List[Int] = {
        orig match {
            case Nil => rev
            case x::xs => revList(xs, x :: rev)
        }
    }
    revList(arr, Nil)
}