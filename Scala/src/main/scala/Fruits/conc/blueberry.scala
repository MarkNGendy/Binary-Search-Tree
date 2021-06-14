package Fruits.conc

import Fruits.abs.berry

class blueberry(n: String, w: Int) extends berry{
  override var name: String = n+" blueberry"
  override var weight: Int = w
  override var color: String = "blue"

  override def eat(): Unit = println("eating blueberry ... yummy !")
}