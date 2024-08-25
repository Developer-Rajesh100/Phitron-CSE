const display = document.getElementById("display")

const addComment = (event) =>{
    const comment = document.getElementById("comment").value

    const list = document.createElement('p')

    const text = document.createTextNode(comment)
    list.appendChild(text)
    display.appendChild(list)
    document.getElementById("comment").value = ''
}