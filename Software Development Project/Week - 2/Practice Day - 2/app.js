const searchField = document.getElementById('inputField')

const searchDish = () => {
    const searchRes = searchField.value
    console.log(searchRes)
    const URL = `https://www.themealdb.com/api/json/v1/1/search.php?s=${searchRes}`
    console.log(URL)
    displayData(URL)
}

const dishContainer = document.getElementById('dish-container')

const displayData = (URL) => {
    fetch(URL)
        .then(response => response.json())
        .then(data => {
            console.log(data.meals)
            const meals = data.meals
            if(meals === null){
                dishContainer.innerHTML = `
                <h1 class="text-center text-danger mt-5">No Result Found</h1>
                `
            }
            else {
                meals.forEach(meal => {
                    const div = document.createElement('div')
                    div.classList.add('card')
                    div.style.width = '18rem'
                    div.style.cursor = 'pointer'
                    div.addEventListener('click', () => dishDetails(meal))
                    div.innerHTML = `
                        <img src=${meal.strMealThumb} class="card-img-top" alt="...">
                        <div class="card-body">
                            <h5 class="card-title">${meal.strMeal}</h5>
                            <p class="card-text">${meal.strInstructions.slice(0, 100)}.....</p>
                        </div>
                    `
                    dishContainer.appendChild(div)
                })
            }
        })
    }

const dishDetailsContainer = document.getElementById("dish-details")
const dishDetails = (meal) => {

    const URL = `https://www.themealdb.com/api/json/v1/1/lookup.php?i=${meal.idMeal}`

    fetch(URL)
        .then(response => response.json())
        .then(data => {
            const meal = data.meals[0]
            console.log(meal)

            const div = document.createElement('div')
            div.classList.add("card", "mb-3")
            div.style.width = "50%"

            div.innerHTML = `
            <img style="width: 300px; margin: auto; border-radius: 15%; margin-top: 2rem" src=${meal.strMealThumb} class="card-img-top" alt="...">
            <div class="card-body">
                <h5 class="card-title">${meal.strMeal}</h5>
                <p class="card-text"> <strong>Description: </strong> ${meal.strInstructions.slice(0, 300)}.....</p>
                <p class="card-text"> <strong>Area: </strong> ${meal.strArea}</p>
                <p class="card-text"> <strong>Category: </strong> ${meal.strCategory}</p>
                <p class="card-text"> <strong>YouTube: </strong> <a href=${meal.strYoutube} target="_blank">Link</a></p>
                <p class="card-text"> <strong>Source: </strong> <a href=${meal.strSource} target="_blank">Link</a></p>
            </div>
        `
            dishDetailsContainer.appendChild(div)

        })

    // console.log(meal)



}

searchField.addEventListener("keypress", (event) => {
    if (event.key === "Enter") {
        searchDish()
    }
});