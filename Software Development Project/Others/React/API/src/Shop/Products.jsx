import { useState, useEffect } from "react";
import Loading from "./Loading";

const Products = () => {
  const [products, setProducts] = useState([]);
  const URL = "https://fakestoreapi.com/products";

  useEffect(() => {
    // Fetch data from the API when the component mounts
    fetch(URL)
      .then((response) => response.json())
      .then((data) => setProducts(data))
      .catch((error) => console.error("Error fetching data:", error));
  }, []); // Empty dependency array ensures this runs only once after the initial render

  console.log(products);

  return (
    <div className="flex flex-wrap justify-center bg-slate-200 w-4/5 p-4">
      {products.length > 0 ? (
        products.map((product) => (
          <div key={product.id} className="flex p-2">
            <div className="max-w-xs p-6 rounded-md shadow-md dark:bg-gray-50 dark:text-gray-900">
              <img
                src={product.image}
                alt=""
                className="object-cover object-center w-full rounded-md h-72 dark:bg-gray-500"
              />
              <div className="mt-6 mb-2">
                <h2 className="text-xl font-semibold tracking-wide">
                  {product.title}
                </h2>
              </div>
              <p className="dark:text-gray-800">
                {product.description.slice(0, 100)}...
              </p>
            </div>
          </div>
        ))
      ) : (
        <Loading />
      )}
    </div>
  );
};

export default Products;
