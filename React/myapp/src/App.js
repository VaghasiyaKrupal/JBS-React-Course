import Cards from "./componants/Cards";
import i1 from "./assets/i1.jpg";
import i2 from "./assets/i2.jpg";
import i3 from "./assets/i3.webp";
import i4 from "./assets/i4.jfif";
import i5 from "./assets/i5.jpg";
import i6 from "./assets/i6.jpg";
import i7 from "./assets/i7.jpg";
import i8 from "./assets/i8.jpg";
import i9 from "./assets/i9.webp";
import UseEffect from "./componants/UseEffect";

function App() {
  return (
    <div className="container mt-4">
      {/* <div className="row">
        <div className="col-12 col-sm-6 col-md-4 col-lg-3 mb-4 d-flex justify-content-center">
          <Cards cardImg={i1} cardTitle="Nature image" cardDesc="lorem10 lipsum fifty ten hunderes thoudsan laksh" />
        </div>

        <div className="col-12 col-sm-6 col-md-4 col-lg-3 mb-4 d-flex justify-content-center">
          <Cards cardImg={i2} cardTitle="Wild image" cardDesc="lorem10 lipsum fifty ten hunderes thoudsan laksh" />
        </div>

        <div className="col-12 col-sm-6 col-md-4 col-lg-3 mb-4 d-flex justify-content-center">
          <Cards cardImg={i3} cardTitle="Forest image" cardDesc="lorem10 lipsum fifty ten hunderes thoudsan laksh" />
        </div>

        <div className="col-12 col-sm-6 col-md-4 col-lg-3 mb-4 d-flex justify-content-center">
          <Cards cardImg={i4} cardTitle="lonly image" cardDesc="lorem10 lipsum fifty ten hunderes thoudsan laksh" />
        </div>

        <div className="col-12 col-sm-6 col-md-4 col-lg-3 mb-4 d-flex justify-content-center">
          <Cards cardImg={i5} cardTitle="Boat image" cardDesc="lorem10 lipsum fifty ten hunderes thoudsan laksh" />
        </div>

        <div className="col-12 col-sm-6 col-md-4 col-lg-3 mb-4 d-flex justify-content-center">
          <Cards cardImg={i6} cardTitle="Strawbarry image" cardDesc="lorem10 lipsum fifty ten hunderes thoudsan laksh" />
        </div>

        <div className="col-12 col-sm-6 col-md-4 col-lg-3 mb-4 d-flex justify-content-center">
          <Cards cardImg={i7} cardTitle="Puppy image" cardDesc="lorem10 lipsum fifty ten hunderes thoudsan laksh" />
        </div>

        <div className="col-12 col-sm-6 col-md-4 col-lg-3 mb-4 d-flex justify-content-center">
          <Cards cardImg={i8} cardTitle="Monkey image" cardDesc="lorem10 lipsum fifty ten hunderes thoudsan laksh" />
        </div>

        <div className="col-12 col-sm-6 col-md-4 col-lg-3 mb-4 d-flex justify-content-center">
          <Cards cardImg={i9} cardTitle="Birds image" cardDesc="lorem10 lipsum fifty ten hunderes thoudsan laksh" />
        </div>
      </div> */}

      <div className="row">
        <div className="col-12 col-sm-6 col-md-4 col-lg-3 mb-4 d-flex justify-content-center">
          <UseEffect />
        </div>
      </div>
    </div>
  );
}

export default App;
