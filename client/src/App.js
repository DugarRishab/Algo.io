
import './App.css';
//import travel from './assest/travel-01.jpg'
import algo from './assest/algo.png'
import Main from './components/Main.js'
import Navbar from "./components/Navbar";

function App() {
  const navbarLinks = [
    { url: "#", title: "Main" },
     { url: "#", title: "Code" },
    
  ];
  
  return (
   
    <div className="App">
       <Navbar navbarLinks={navbarLinks} />
       
      <Main imageSrc={algo}/>
    </div>
  );
}

export default App;
