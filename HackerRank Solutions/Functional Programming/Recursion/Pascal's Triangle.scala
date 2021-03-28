object Solution {
    def pascal(column:Int, row:Int):Int = {
        if(column == 0 || column == row) 1
        else pascal(column-1, row-1) + pascal(column, row-1)
    }
    def main(args: Array[String]) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution
*/
        val count = io.Source.stdin.getLines.toList.map(_.trim).map(_.toInt).head
        for(row <- 0 to count - 1){
            for(col <- 0 to row){
                print(s"${pascal(col, row)} ")
            }
        println()
        }
    }
}