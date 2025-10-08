// src/componants/Cards.js

const Cards = ({ cardImg, cardTitle, cardDesc }) => {
  return (
    <div className="card h-100 shadow-sm" style={{ width: "18rem" }}>
      <img src={cardImg} className="card-img-top" alt={cardTitle} width={"286px"} height={"180px"} />
      <div className="card-body text-center">
        <h5 className="card-title">{cardTitle}</h5>
        <p className="card-text">{cardDesc}</p>
        <a href="#" className="btn btn-primary">
          Go somewhere
        </a>
      </div>
    </div>
  );
};

export default Cards;
