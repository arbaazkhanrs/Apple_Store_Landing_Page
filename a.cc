@import url('https://fonts.googleapis.com/css2?family=League+Spartan:wght@300&display=swap');

*{
    margin: 0px;
    padding: 0px;
    box-sizing: border-box;
    font-family: 'Spartan', sans-serif;
}

/* Here we are taken h1 , h2 , h4 and h6 because wehen we use rtem they will get apllied using it  */
h1{
    font-size: 50px;
    line-height: 64px;
    color: #222;
}

h2{
    font-size: 46px;
    line-height: 54px;
    color: #222;
    text-align: center;

}

/* h3{
    font-size: 36px;
    line-height: 44px;
    color: #222;

} */


h4{
    font-size: 20px;
    color: #222;
}

h6{
    font-weight: 700;
    font-size: 12px;

}

p{
    font-size: 20px;
    color: #121a14;
    margin: 15px 0 20px 0;
    text-decoration: solid;
    text-align: center;
}

.section-p1{
    padding: 40px 80px;

}

.section-m1 {
    margin: 40px 0;

}
button.normal{
    font-size: 20px;
    font-weight: 650;
    padding: 15px 30px;
    color: #000;
    background-color: #fff;
    border-radius: 4px;
    cursor: pointer;
    border: none;
    outline: none;
    transition: 0.2s ;
}


body{
    width: 100%;
    height: 100vh;
}

/* .logo.hover{ */
/*      */
/* } */


#header {
    display: flex;
    align-items: center;
    justify-content: space-between;
    padding: 10px 40px;
    background: #E3E6F3;
    box-shadow: 0 1px 25px rgba(56, 55, 55, 0.6);
    z-index: 999;
    position: sticky;
    top: 0;
    left: 0;

}
#navbar{
    display: flex;
    align-items: center;
    justify-content: center;
}

#navbar li{
    list-style: none;
    padding: 0 20px;
    position: relative;


}

#navbar li a{
    text-decoration: none;
    font-size: 16px;
    font-weight: 600;
    color: #050505;
    transition: 0.3s ease;
}

#navbar li a:hover,
#navbar li a.active{
    color: #088178;
}


/* Solo classes  */
#navbar li a.active::after,
#navbar li a:hover::after{
    content: "";
    width: 50%;
    height: 2px;
    background: #088178;
    position: absolute;
    bottom: -4px;
    left: 20px;
}

/* ************************************************************* */

/* Home Page  */

#hero{
    background-image: url("Images/hero.jpg");
    height: 90vh;
    width: 100%;
    background-size: cover;
    background-position: top 25% right 0;
    padding: 0 80px;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
}

#hero h4{
    padding-bottom: 15px;
    
}

#hero h1{
    color: rgb(92, 142, 248);
}


#hero button{
    background-color: rgb(159, 212, 248);
    color: rgb(34, 37, 35);
    font-size: 20px;
    border-radius: 10px 10px;
    padding: 8px;
    cursor: pointer;
    font-weight: 510;
}

#feature {
    display: flex;
    align-items: center;
    justify-content: space-between;

}

#feature .fe-box {
    margin-left: 100px;
    
    text-align: center;
    font-size: 25px;
    padding: 5px 0px;
    border-radius: 4px;
    margin: 15px 0px;

}
#products{ 
    display: flex;
    align-items: center;
    justify-content: space-between;
    flex-wrap: wrap;
}


.apple h2{
    align-items: center;
    font-size: 45px;
    
}

.apple h3{
    text-align: right;

    font-size: 35px ;
    margin-top: 30px;
    margin: 100px;
    margin-bottom: -100px; 
    margin-right: 180px; 
    padding: 30px;

}
.watch video{
    float: left;
    width: 590px;
    height: 550px;
    padding: 0 10px 0 0;

}

.watch p{
    font-size: 20px;
    padding: 50px;
    text-align: center;
    margin-right: 10px;
    display: flex;
    justify-content: center;
    
}
    

.macbook img{
    float: right;
    width: 690px;
    height: 450px;
    padding: 0 10px 0 0;
}
.macbook p{
    font-size: 20px;
    padding: 50px;
    margin: 50px;
    text-align: center;
}

.macbook h3{
    text-align: left;

    font-size: 35px ;
    margin-top: 20px;
    margin: 150px;
    margin-bottom: -100px; 
    margin-left: 180px; 
    padding: 30px;

}

.imac img{
    float: left;
    width: 590px;
    height: 450px;
    padding: 10 10px 0 0;
    margin-left: 40px;

}

.imac p{
    text-align: center;
    font-size: 20px;
    padding: 0px ;
    margin: 150px 0px;
    margin-left: 680px;
    margin-right: 110px;
}

.imac h3{
    text-align:right;

    font-size: 35px ;
    margin-top: 20px;
    margin: 150px;
    margin-bottom: -100px; 
    margin-right: 250px; 
    padding: 10px;

}


.ipad img{
    float: right;
    width: 760px;
    height: 560px;
    padding: 0 10px 0 0;
}

.ipad p{
    font-size: 20px;
    padding: 50px 100px;
    margin: 50px;
    text-align: center;
    margin-right: 650px;
    margin-left: 10px;
}
.ipad h3{
    text-align:left;

    font-size: 35px ;
    margin-top: 20px;
    margin: 150px;
    margin-bottom: -100px; 
    margin-left: 230px; 
    padding: 40px;

}

#product1{
    text-align: center;
    padding: 120px;
}

#product1 .pro-container{
    display: flex;
    justify-content: space-between;
    /* padding: 0px; */
    flex-wrap: wrap;
}

#product1 .pro{
    width: 25%;
    height: 350px;
    /* padding: 10px 12px; */
    /* border: 0.5px solid black; */
    border-radius: 25px;
    cursor: pointer;
    box-shadow: 50px 50px 30px rgba(0, 0, 0, 0.02);
    margin: 45px 0;
    transition: 0.2s ease;
    position: relative;
    margin: 50px 30px 50px;
    padding: 0px;
    /* margin-right: 55px;
    margin-left: 55px;
    margin-right: 100px; */
}
#product1 .pro:hover{
    box-shadow: 30px 30px 30px rgba(0, 0, 0, 0.09);
    box-shadow: -30px -30px 30px rgba(0, 0, 0, 0.09);
    /* box-shadow: 30px 30px 30px 30px rgba(0, 0, 0, 0.2); */

}

#product1 .pro img{
    width: 100%;
    border-radius: 20px;
    margin-left: 55px 0px;
    padding: 30px;
    
}

#product1 .pro .des{
    text-align: center;
    padding: 10px 0;
}

#product1 .pro .img1{
    width: 250px;
    align-items: center;
    padding: 10px;
    margin-left: 12px;
}

#product1 .pro .im{
    padding-top: 30px;
}

#product1 .pro .des span{
    color: royalblue;
    font-size: 18px;
}
#product1 .pro .des h5 {
    padding-top: 7px;
    color: #1a1a1a;
    font-size: 16px;

}
#product1 .pro .des i{
    font-size: 18px;
    color: rgb(98, 247, 93);
}
#product1 .pro .des h4{
    padding-top: 7px;
    font-size: 25px;
    font-weight: 700;
    color: rgb(13, 12, 14);
}

/* #product1 .pro .des img{ */
    /* padding:100px; */
    /* width: 250px; */
    /* height: 250px; */
    /* align-items: right; */
    /* margin-left: 270px; */
    /* margin-bottom: 950px; */
/* } */
/*  */


#banner{
    margin-top: -80px;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    text-align: center;
    background-image: url(Images/banner/banner.jpg);
    width: 100%;
    height: 55vh;
    background-size: cover;
}

#banner h4{
    color: #fff;
    font-size: 26px;
    

}

#banner h2{
    padding: 25px 10px;
    font-size: 40px;
    color: rgb(28, 30, 32);
}

#banner button:hover{
    background-color: skyblue;
    color: #fff;
}

/* ###########################################################################  */


#m1chip .flip-box{

    height: 500px;
    width: 600px;
    border: 1px solid #fff;
    perspective: 1000px;
    color: violet;
    margin-left: 25px;
    margin-top: -325px;
    padding: 35px 45px;


}
#m1chip .flip-box-inner{
    width:100%;
    height: 100%;
    text-align: center;
    transform-style: preserve-3d;
    transition: transform 2s;
    color: violet;
}

#m1chip .flip-box:hover .flip-box-inner{
    transform: rotateY(180deg);
}

#m1chip .flip-box-front, .flip-box-back{
    position: absolute;
    width: 100%;
    height:100%;
    backface-visibility: hidden;

}
#m1chip .flip-box-front{
    background-color: rgb(243, 240, 240);
    color: rgb(238, 238, 238);
}

#m1chip .flip-box-back{
    background-color: rgb(10, 10, 10);
    color: rgb(240, 232, 232);
    transform: rotateY(180deg);
    color: rgb(233, 227, 233);
    

}

#m1chip .flip-box-back p{
    color: rgb(238, 232, 232);
}


/* ############################################################################## */

#m2chip{
    padding: 250px;
    padding-bottom: 100px;

}

#m2chip .flip-box{
   
    height: 500px;
    width: 600px;
    border: 1px solid #fff;
    perspective: 1000px;
    color: violet;
    /* margin-right:100px; */
    margin-left:300px;
    margin-top: -300px;
    padding: 25px 35px;


}
#m2chip .flip-box-inner{
    width:100%;
    height: 100%;
    text-align: center;
    transform-style: preserve-3d;
    transition: transform 2s;
    color: violet;
}

#m2chip .flip-box:hover .flip-box-inner{
    transform: rotateY(180deg);
}

#m2chip .flip-box-front, .flip-box-back{
    position: absolute;
    width: 100%;
    height:100%;
    backface-visibility: hidden;

}
#m2chip .flip-box-front{
    background-color: rgb(243, 240, 240);
    color: rgb(238, 238, 238);
}

#m2chip .flip-box-back{
    background-color: rgb(10, 10, 10);
    color: rgb(240, 232, 232);
    transform: rotateY(180deg);
    color: rgb(233, 227, 233);
    

}

#m2chip .flip-box-back p{
    color: rgb(238, 232, 232);
}



#newspaper{
    display: flex;
    justify-content: space-between;
    flex-wrap: wrap;
    align-items: center;
    background-image: url(Images/banner/m1.jpg);
    background-repeat: no-repeat;
    background-position: 20% 30%;
    background-color: #041e42;
}

#newspaper h4{
    font-size: 30px;
    font-weight: 700;
    color: #fff;
}

#newspaper p{
    color: antiquewhite;
}
#newspaper .form{
    display: flex;
    width: 40%;
}

#newspaper input{
    height: 4.125rem;
    padding: 0 1.25em;
    font-size: 14px;
    width: 100%;
    border: 1px solid transparent;
    border-radius: 4px;
    outline: none;
    border-top-right-radius: 0;
    border-bottom-right-radius: 0;
}

#newspaper button{
    background-color: #7ac8f5;
    color: rgb(92, 88, 83);
    white-space: nowrap;
    border-top-right-radius: 0;
    border-bottom-right-radius: 0;
}

footer{
    display: flex;
    justify-content: space-between;
    flex-wrap: wrap;
}

footer .col{
    display: flex;
    flex-direction: column;
    align-items: flex-start;
    margin-bottom: 20px;
}

footer .logo{
    margin-bottom: 30px;

}

footer h4{
    font-size: 18px;
    padding-bottom: 20px;

}

footer p{
    font-size: 18px;
    
    margin: 0 0 8px 0;
}

footer a{
    text-decoration: none;
    font-size: 14px;
    color: #222;
    margin: 0 0 8px 10;
}

footer .follow{
    margin-top: 20px;

}

footer .follow i{
    color: #465b52;
    padding-right: 4px;
    cursor: pointer;

}

footer .install .row img{
    border: 1px solid #088178;
    border-radius: 6px;

}

footer .install img{
    margin: 10px 0 15px 0;
}

footer .follow i:hover,
footer a:hover{
    color:#239cff;
}

footer .copyright{
    width: 100%;
    text-align: center;
}




/* ######################################################## */
/* ########################################################## */

/* @media (max-width:799px){
    #navbar {
        display: flex;
        flex-direction: column;
        align-items: center;
        justify-content: flex-start;
        position: fixed;
        top: 0;
        right: 0px;
        height: 100vh;
        width: -300px;
        background-color: #E3E6F3;
        box-shadow:  0 40px 60px rgba(0, 0, 0, 0.1);
    }

}
 */
