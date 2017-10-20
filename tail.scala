import scala.io.Source

object Tail{
  def main(args: Array[String]): Unit = {
    val fileName: String = args(0)
    val file = Source.fromFile(fileName)
    val lines = file.getLines.toList

    lines.slice(lines.length - 10, lines.length).foreach(println)
    file.close
  }
}



