package Fruits.conc

import Fruits.abs.berry

class blackberry(n: String, w: Int) extends berry{
  override var name: String = n+" blackberry"
  override var weight: Int = w
  override var color: String = "black"

  override def eat(): Unit = println("eating blueberry ... yummy !")
}