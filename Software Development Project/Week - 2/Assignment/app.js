// Define variables
const mainContainer = document.getElementById("main-container");
const sidebar = document.getElementById("sidebar");
const totalPlayers = document.getElementById("totalPlayers");
const searchField = document.getElementById("searchField");
const searchButton = document.getElementById("search");

const Players_URL =
  "https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=";

let playerCount = 0;

// Function to fetch and display players
const fetchPlayers = (URL) => {
  fetch(URL)
    .then((response) => response.json())
    .then((data) => {
      if (data.player !== null) {
        mainContainer.innerHTML = "";

        data.player.forEach((player) => {
          const idPlayer = player.idPlayer;
          const div = document.createElement("div");
          div.classList.add("card");
          div.style.width = "18rem";
          div.innerHTML = `
                    <img src="${player.strThumb}" class="card-img-top" alt="${
            player.strPlayer
          }">
            <div class="card-body">
              <h5 class="card-title">${player.strPlayer}</h5>
              <p class="card-text"> <strong>Nationality: </strong> ${
                player.strNationality
              }</p>
              <p class="card-text"> <strong>Team: </strong> ${
                player.strTeam
              }</p>
              <p class="card-text"> <strong>Sport: </strong> ${
                player.strSport
              }</p>          
              <p class="card-text"> <strong>Gender: </strong> ${
                player.strGender
              }</p>
              <p class="card-text"> <strong>Description: </strong> ${player.strDescriptionEN.slice(
                0,
                50
              )}.....</p>
              <div style="display: flex; gap: 1rem; margin: 1.5rem">
                    <a href="https://${player.strTwitter}" target="_blank">
                        <i class="fa-brands fa-twitter fa-lg"></i>
                    </a>
                    <a href="https://www.${
                      player.strInstagram
                    }" target="_blank">
                        <i class="fa-brands fa-instagram fa-lg"></i>
                    </a>
              </div>
              
              <button type="button" class="btn btn-warning" data-bs-toggle="modal" data-bs-target="#exampleModal" onclick="playerDetails(${idPlayer})">Details</button>
              <button type="button" class="btn btn-success" onclick='joinGroup(${JSON.stringify(
                player
              )})'>Join Group</button>
            </div>
          `;
          mainContainer.appendChild(div);
        });
      } else {
        mainContainer.innerHTML = "<p>No players found.</p>";
      }
    })
    .catch((error) => console.error("Error fetching data:", error));
};

fetchPlayers(Players_URL);

// Search function
const searchPlayers = (event) => {
  event.preventDefault();
  const searchValue = searchField.value;
  const Search_URL = `${Players_URL}${searchValue}`;
  fetchPlayers(Search_URL);
};

searchButton.addEventListener("click", searchPlayers);

// Function to handle joining a group
const joinGroup = (player) => {
  if (playerCount >= 11) {
    alert("Maximum of 11 players allowed in the team.");
    return;
  }
  const div = document.createElement("div");
  div.classList.add("card");
  div.style.maxWidth = "540px";
  div.style.marginBottom = "20px";
  div.innerHTML = `
    <div class="row g-0">
      <div class="col-md-4">
        <img src="${player.strThumb}" class="img-fluid rounded-start" alt="${
    player.strPlayer
  }">
      </div>
      <div class="col-md-8">
        <div class="card-body">
          <h5 class="card-title">${player.strPlayer}</h5>
          <p class="card-text">${player.strDescriptionEN.slice(0, 50)}.....</p>
          <p class="card-text"><small class="text-body-secondary">Team: ${
            player.strTeam
          }</small></p>
        </div>
      </div>
    </div>
  `;
  sidebar.appendChild(div);
  playerCount++;
  totalPlayers.innerText = playerCount;
};

// Function to display player details Modal
const playerDetails = (idPlayer) => {
  const playerDetailsURL = `https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${idPlayer}`;
  fetch(playerDetailsURL)
    .then((response) => response.json())
    .then((data) => {
      const player = data.players[0];
      const div = document.createElement("div");

      var modal1 = new bootstrap.Modal(document.getElementById("gfg"));
      modal1.show();
      document.getElementById("modal-title").innerText = player.strPlayer;
      document.getElementById("modal-nationality").innerText =
        player.strNationality;
      document.getElementById("modal-team").innerText = player.strTeam;
      document.getElementById("modal-sports").innerText = player.strSport;
      document.getElementById("modal-dob").innerText = player.dateBorn;
      document.getElementById("modal-ethnicity").innerText =
        player.strEthnicity;
      document.getElementById("modal-status").innerText = player.strStatus;
      document.getElementById("modal-strDescriptionEN").innerText =
        player.strDescriptionEN.slice(0, 100);
      document.getElementById("modal-strGender").innerText = player.strGender;
      document.getElementById("modal-strPosition").innerText =
        player.strPosition;
    });
};
