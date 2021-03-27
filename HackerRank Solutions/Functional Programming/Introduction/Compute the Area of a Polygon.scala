object Solution {

    def main(args: Array[String]) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution
*/
    val n = io.StdIn.readInt()
    val coords = (0 until n).map { _ =>
      val p = io.StdIn.readLine().split(" ").map(_.toInt)
      p(0) -> p(1)
    }.toList
    val points = (coords zip coords.tail) :+ (coords.last, coords.head)
    val area = points.map { case (a, b) =>  a._1 * b._2 - a._2 * b._1 }.sum / 2.0
    println(area)
    }
}