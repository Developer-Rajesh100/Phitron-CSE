import Products from "./Products";
import Cart from "./Cart";

const Shop = () => {
  return (
    <>
      <section className="flex">
        <Products />
        <Cart />
      </section>
    </>
  );
};

export default Shop;
