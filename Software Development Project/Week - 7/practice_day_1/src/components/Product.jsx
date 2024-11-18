"use client";
import React, { useEffect, useState } from "react";
import { IoMdStar } from "react-icons/io";

const Product = ({ product }) => {
  const { image, title, description, rating, price, id } = product;

  // State to hold detailed product information
  const [detail, setDetail] = useState(null);

  const handleViewDetails = () => {
    // Fetch product details from API
    fetch(`https://fakestoreapi.com/products/${id}`)
      .then((res) => res.json())
      .then((data) => {
        setDetail(data); // Update state with fetched product details
        // Show the modal
        document.getElementById(`my_modal_${id}`).showModal();
      })
      .catch((error) =>
        console.error("Error fetching product details:", error)
      );
  };

  return (
    <div className="card bg-base-100 w-96 shadow-xl p-5">
      <figure>
        <img className="w-40 h-40" src={`${image}`} alt={`${title}`} />
      </figure>
      <div className="card-body">
        <h2 className="card-title">
          {title.split(" ").slice(0, 4).join(" ")}
          <div className="badge badge-secondary flex items-center">
            {rating.rate} <IoMdStar />
          </div>
        </h2>
        <p>
          {" "}
          <strong>Price: </strong> <i>{price}</i>{" "}
        </p>
        <p>
          {" "}
          <strong>Description: </strong>{" "}
          <i>{description.split(" ").slice(0, 20).join(" ")} </i>
        </p>
        <div className="card-actions justify-end">
          {/* This is Product's Detail Modal */}
          <button className="btn btn-primary" onClick={handleViewDetails}>
            View Details
          </button>
          <dialog id={`my_modal_${id}`} className="modal">
            <div className="modal-box w-11/12 max-w-5xl">
              {detail ? (
                <>
                  <img
                    className="w-64 mx-auto py-12"
                    src={`${detail.image}`}
                    alt=""
                  />
                  <h3 className="font-bold text-lg">{detail.title}</h3>
                  <p className="py-2">
                    <strong>Price:</strong> {detail.price}
                  </p>
                  <p>
                    <strong>Description:</strong> {detail.description}
                  </p>
                  <p className="py-2">
                    <strong>Category:</strong> {detail.category}
                  </p>
                </>
              ) : (
                <p>Loading...</p>
              )}
              <div className="modal-action">
                <form method="dialog">
                  <button className="btn">Close</button>
                </form>
              </div>
            </div>
          </dialog>
        </div>
      </div>
    </div>
  );
};

export default Product;
