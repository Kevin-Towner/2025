@keyframes fadeInAnimation {
  0% {
    opacity: 0;
  }
  100% {
    opacity: 1;
  }
}
.font-h1 {
  font-family: "Outfit", sans-serif;
  font-optical-sizing: auto;
  font-weight: 600;
  font-style: normal;
  font-size: 42px;
  margin-bottom: 0.33em;
  letter-spacing: -0.5px;
  color: #565656;
}
.font-divider-h2 {
  font-family: "Outfit", sans-serif;
  font-optical-sizing: auto;
  font-weight: 500;
  font-style: normal;
  color: #565656;
  border-bottom: 1px solid #424242;
  line-height: 0.1em;
  margin: 0 0 1.33em 0;
}
.font-divider-h2 span {
  background: #F4F4F4;
  padding: 0 1rem 0 0;
  font-size: 28px;
}
.font-h3 {
  font-family: "Outfit", sans-serif;
  font-optical-sizing: auto;
  font-weight: 400;
  font-style: normal;
  font-size: 20px;
  margin-bottom: 0.33em;
  color: #545454;
  letter-spacing: -0.5px;
}
.font-p {
  font-family: "Raleway", sans-serif;
  font-optical-sizing: auto;
  font-weight: 400;
  font-style: normal;
  line-height: 140%;
  font-size: 16px;
  color: #565656;
}
.font-caption {
  font-family: "Raleway", sans-serif;
  font-optical-sizing: auto;
  font-weight: 400;
  font-style: normal;
  line-height: 140%;
  font-size: 16px;
  color: #565656;
  font-style: italic;
  font-size: 14.5px;
}
.jump-spots {
  scroll-margin-top: 50px;
}
html {
  scroll-behavior: smooth;
}
body {
  background: #F4F4F4;
  display: grid;
  grid-template-columns: 15rem 1fr;
  grid-gap: 4em;
  align-items: start;
  width: 90%;
  margin: 0 auto;
  padding-bottom: 5rem;
}
main .main-content {
  animation: fadeInAnimation ease 1.3s;
  animation-iteration-count: 1;
  animation-fill-mode: forwards;
  margin-top: 5.5rem;
}
main .main-content h1 {
  font-family: "Outfit", sans-serif;
  font-optical-sizing: auto;
  font-weight: 600;
  font-style: normal;
  font-size: 42px;
  margin-bottom: 0.33em;
  letter-spacing: -0.5px;
  color: #565656;
}
main .main-content h2 {
  font-family: "Outfit", sans-serif;
  font-optical-sizing: auto;
  font-weight: 500;
  font-style: normal;
  color: #565656;
  border-bottom: 1px solid #424242;
  line-height: 0.1em;
  margin: 0 0 1.33em 0;
}
main .main-content h2 span {
  background: #F4F4F4;
  padding: 0 1rem 0 0;
  font-size: 28px;
}
main .main-content h3 {
  font-family: "Outfit", sans-serif;
  font-optical-sizing: auto;
  font-weight: 400;
  font-style: normal;
  font-size: 20px;
  margin-bottom: 0.33em;
  color: #545454;
  letter-spacing: -0.5px;
}
main .main-content p {
  font-family: "Raleway", sans-serif;
  font-optical-sizing: auto;
  font-weight: 400;
  font-style: normal;
  line-height: 140%;
  font-size: 16px;
  color: #565656;
}
main .main-content ul li {
  font-family: "Raleway", sans-serif;
  font-optical-sizing: auto;
  font-weight: 400;
  font-style: normal;
  line-height: 140%;
  font-size: 16px;
  color: #565656;
}
main .main-content .content-row-1 div .intro {
  color: #565656;
}
main .main-content .content-row-2 {
  margin-top: 2rem;
}
main .main-content .content-row-2 #content-row-2-container-1 {
  color: #565656;
  background: #FEFEFE;
  padding: 2rem 2rem 1rem 2rem;
  border-radius: 6px;
  box-shadow: rgba(0, 0, 0, 0.1) 0px 0px 5px 0px, rgba(0, 0, 0, 0.1) 0px 0px 1px 0px;
  display: flex;
  flex-direction: column;
}
main .main-content .content-row-2 #content-row-2-container-1 .container-33_33_33 {
  display: grid;
  grid-template-columns: 1fr 1fr 1fr;
  grid-gap: 1em;
  margin-bottom: 1rem;
}
main .main-content .content-row-2 #content-row-2-container-1 .container-33_33_33 div img {
  max-width: 70%;
  float: right;
  border-radius: 2px;
}
main .main-content .content-row-2 #content-row-2-container-1 .container-33_33_33 div ul li {
  line-height: 175%;
}
main .main-content .content-row-2 #content-row-2-container-1 .row-content-2-key {
  font-family: "Raleway", sans-serif;
  font-optical-sizing: auto;
  font-weight: 400;
  font-style: normal;
  line-height: 140%;
  font-size: 16px;
  color: #565656;
  font-size: 14.5px;
  text-align: right;
}
main .main-content .content-row-2 #content-row-2-container-1 .row-content-2-key ul {
  display: inline-flex;
  font-style: italic;
}
main .main-content .content-row-2 #content-row-2-container-1 .row-content-2-key ul li {
  font-family: "Raleway", sans-serif;
  font-optical-sizing: auto;
  font-weight: 400;
  font-style: normal;
  line-height: 140%;
  font-size: 16px;
  color: #565656;
  font-style: italic;
  float: right;
  font-size: 14.5px;
}
main .main-content .content-row-2 #content-row-2-container-1 .row-content-2-key ul #li-beginner {
  margin-left: 0.5rem;
}
main .main-content .content-row-2 #content-row-2-container-1 .row-content-2-key ul #li-beginner:before {
  content: "●";
  padding-right: 0.2rem;
  font-style: normal;
  color: #ff2fdf;
}
main .main-content .content-row-2 #content-row-2-container-1 .row-content-2-key ul #li-intermediate {
  margin-left: 0.5rem;
}
main .main-content .content-row-2 #content-row-2-container-1 .row-content-2-key ul #li-intermediate:before {
  content: "●";
  padding-right: 0.2rem;
  font-style: normal;
  color: #4b76e6;
}
main .main-content .content-row-2 #content-row-2-container-1 .row-content-2-key ul #li-proficient {
  margin-left: 0.5rem;
}
main .main-content .content-row-2 #content-row-2-container-1 .row-content-2-key ul #li-proficient:before {
  content: "●";
  padding-right: 0.2rem;
  font-style: normal;
  color: #12cc12;
}
main .main-content .content-row-2 #content-row-2-container-2 {
  margin-top: 1rem;
}
main .main-content .content-row-2 #content-row-2-container-2 div img {
  max-width: 100%;
  min-width: 100%;
  border-radius: 6px;
  box-shadow: rgba(0, 0, 0, 0.1) 0px 0px 5px 0px, rgba(0, 0, 0, 0.1) 0px 0px 1px 0px;
}
main .main-content .content-row-4 {
  margin-top: 2rem;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 {
  display: grid;
  grid-template-columns: 1fr 1fr;
  grid-gap: 1em;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile a {
  position: relative;
  display: inline-block;
  vertical-align: middle;
  margin: 0;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile a div {
  border-radius: 6px;
  box-shadow: rgba(0, 0, 0, 0.1) 0px 0px 5px 0px, rgba(0, 0, 0, 0.1) 0px 0px 1px 0px;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile a div div {
  gap: 1rem;
  background-color: #edeff3;
  border: 2px solid #4B76E6;
  opacity: 0;
  margin: auto;
  position: absolute;
  transition: 0.3s;
  margin-block-end: 0;
  border-radius: 6px;
  top: 0;
  left: 0;
  right: 0;
  bottom: 3px;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile a div div .project-tile-title {
  font-family: "Outfit", sans-serif;
  font-optical-sizing: auto;
  font-weight: 400;
  font-style: normal;
  font-size: 20px;
  margin-bottom: 0.33em;
  letter-spacing: -0.5px;
  color: #545454;
  margin: 3rem 1rem 0.33rem 1rem;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile a div div .project-tile-brief {
  font-weight: 400;
  color: #545454;
  margin: 0 1rem 0 1rem;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile a div div:hover {
  opacity: 0.95;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile a div img {
  max-width: 100%;
  min-width: 100%;
  max-height: 100%;
  min-height: 100%;
  border-radius: 6px;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile a div #project-tile-1 {
  border-radius: 6px;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile a div #project-tile-2 {
  border-radius: 6px;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile a div #project-tile-3 {
  border-radius: 6px;
}
main .main-content .content-row-4 #content-row-4-container-full .container-50_50 .project-tile .font-caption {
  font-family: "Raleway", sans-serif;
  font-optical-sizing: auto;
  font-weight: 400;
  font-style: normal;
  line-height: 140%;
  font-size: 16px;
  color: #565656;
  font-style: italic;
  font-size: 14.5px;
}
