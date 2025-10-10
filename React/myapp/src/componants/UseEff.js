import React, { useEffect, useState } from 'react'
import axios from "axios"

const UseEff = () => {

    const [coldDrinks, setColdDrinks] = useState([]);

    useEffect(() => {

        axios.get("https://www.thecocktaildb.com/api/json/v1/1/search.php?s=margarita")
            .then((res) => {
                setColdDrinks(res.data.drinks);
            })
            .catch((err) => {
                console.error(err)
            });
    }, []);


    return (
        <div>

            {coldDrinks.map((item, index) => {
                return (
                    <div className="card" style={{ width: '18rem' }}>
                        <img src={item.strDrinkThumb} className="card-img-top" alt="..." />
                        <div className="card-body">
                            <h5 className="card-title">{item.strDrink}</h5>
                            <p className="card-text">{item.strInstructions}</p>
                            <a href="#" className="btn btn-primary">Go somewhere</a>
                        </div>
                    </div>
                )
            })}

        </div>
    )
}

export default UseEff
