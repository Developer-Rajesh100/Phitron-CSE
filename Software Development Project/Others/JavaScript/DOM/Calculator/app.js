const addNumbers = () => {
    let num1 = document.getElementById("num1").value
    let num2 = document.getElementById("num2").value

    const result = document.getElementById("result")

    num1 = parseInt(num1)
    num2 = parseInt(num2)

    const text = document.createTextNode(`${num1} + ${num2} = ${num1 + num2}`)

    result.append(text)
}