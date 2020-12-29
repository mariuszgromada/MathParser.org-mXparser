# mxparserts
<p align="center">
  <img width="350" src="https://mathparser.org/wp-content/uploads/2020/01/mxparser-icon.png" alt="mXparser logo">
</p>
<p align="center">meets</p>
<p align="center">
  <img width="350" src="https://upload.wikimedia.org/wikipedia/commons/6/67/TypeScript_Logo.svg" alt="TypeScript logo">
</p>

TypeScript port of the mXparser framework by Mariusz Gromada (https://github.com/mariuszgromada).


# Why use mXparser on a JavaScript-based technology stack?
I very much like the aspect of the cross-platform orientation of the mXparser framework. Developing business software systems on the .NET (Core) or Java Enterprise plattform, that require mathematical expressions with calculation capability, works very good and makes fun. But additionally, the formula expressions of mXparser can be shared between the two platforms.

For a new business application based on a state-of-the-art web-technologies stack, I need a framework like mXparser that works with JavaScript in the browser in an REACT-application. In this application, the user gets an formula-editor user-interface to define calculations in a Excel-like way. But for the most of the time, the calculations that base on this formulas, are performed on an Java application server. So using JavaScript mathematical frameworks like [mathJS](https://mathjs.org/), that fulfill the functional requirements, can only be used within the Java backend by using a JavaScript-runtime there (e. g. Chrome V8 for Java). This wasn't the way I liked to go. So I ported mXparser to TypeScript for a typed-usage in the JavaScript world. This way, the same formula-language can be used with .NET (Core), Java and JavaScript.

Thanks to the guys from the [jSweet](http://www.jsweet.org/) project. It helped porting the Java code and reduced manual work a lot.
