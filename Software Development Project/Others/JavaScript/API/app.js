const users = document.getElementById("users");
const URL = "https://api.github.com/users";

fetch(URL)
  .then((response) => response.json())
  .then((data) => {
    console.log(data[0]);

    data.map((element) => {
      const { login, avatar_url } = element;
      const user = document.createElement("div");
      user.innerHTML = `
        <div class="w-1/2 p-4">
    <div class="bg-gray-100 p-6 rounded-lg">
      <img
        class="h-40 rounded w-full object-cover object-center mb-6"
        src="${avatar_url}"
        alt="content"
      />
      <h2 class="text-lg text-gray-900 font-medium title-font mb-4">
        ${login}
      </h2>
      <p class="leading-relaxed text-base">
        Fingerstache flexitarian street art 8-bit waistcoat. Distillery
        hexagon disrupt edison bulbche.
      </p>
    </div>
  </div>
      `;
      users.appendChild(user);
    });
  });
