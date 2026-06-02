//Reversly Odd & Even Check
fun main(){
    for(i in 20 downTo 1){
        println("$i is ${if (i % 2 == 0) "Even" else "Odd"}")
    }
}