
def f(arr:List[Int]):List[Int] = {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution
*/
      val l = scala.collection.mutable.ListBuffer.empty[Int]
      var idx = 0
      arr.foreach(i => {
        idx += 1
        if (idx % 2 == 0) l += i
      })
      l.toList
}