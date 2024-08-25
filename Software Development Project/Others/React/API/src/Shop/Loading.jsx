import { CirclesWithBar } from "react-loader-spinner";

const Loading = () => {
  return (
    <>
      <section className="flex h-screen w-screen justify-center items-center">
        <CirclesWithBar
          height="100"
          width="100"
          color="#4fa94d"
          outerCircleColor="#4fa94d"
          innerCircleColor="#4fa94d"
          barColor="#4fa94d"
          ariaLabel="circles-with-bar-loading"
          wrapperStyle={{}}
          wrapperClass=""
          visible={true}
        />
      </section>
    </>
  );
};

export default Loading;
