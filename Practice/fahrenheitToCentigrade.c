fun main() {
    print("Enter temperature in Fahrenheit: ")
    val fahrenheit = readLine()!!.toDouble()

    val celsius = (5.0 / 9.0) * (fahrenheit - 32)

    println("Temperature in Centigrade: $celsius")
}