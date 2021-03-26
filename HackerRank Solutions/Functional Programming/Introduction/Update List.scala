def f(arr:List[Int]):List[Int] = {
    var l = scala.collection.mutable.ListBuffer.empty[Int]
    var res = arr.foreach { x => if(x < 0) l+=(x)*(-1) else l+=x }
    l.toList
}