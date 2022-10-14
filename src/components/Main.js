import React from "react";
import './Main.css'

const Main = ({imageSrc}) =>{
return(
    <div className="main">
       <img src={imageSrc} alt="dg" className="main_image"/>
       <h1 className="main_title"> Algo.io
       </h1>
    </div>
)
}
export default Main;