package Fruits.conc

import Fruits.abs.berry

class blueberry(n: String, w: Int) extends berry{
  val cate = "blueberry"
  Type+=cate
  override var name: String = n+" "+cate
  override var weight: Int = w
  override var color: String = "blue"

  override def eat(): Unit = println("eating blueberry ... yummy !")
}