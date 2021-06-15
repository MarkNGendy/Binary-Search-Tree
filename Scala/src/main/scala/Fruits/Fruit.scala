package Fruits

import scala.collection.mutable.ListBuffer

trait Fruit{
  var name : String
  var weight : Int
  var color : String
  var Type : ListBuffer[String] = new ListBuffer[String]

  def display(): Unit ={
    println("I'm "+name+" my weight is: "+weight+" and my color is: "+color);
  }

  def eat()

}