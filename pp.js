// const person = {
// 	name: "John",
// 	hobbies: ["reading", "coding"],
// 	showHobbies: function(){
// 		console.log(this.hobbies);
// 	}
// }
// person.showHobbies();


// const show = () => {
//   console.log(this.name);
// };
// show();


// const person2 = {
// 	name: "John",
// 	hobbies: ["reading", "coding"],
// 	showHobbies: () => {
// 		console.log(this.hobbies);
// 	}
// }
// person2.showHobbies();



// const person4 = {
//   name: "John",
//   hobbies: ["reading", "coding"],
//   showHobbies: function() {
//     this.hobbies.forEach(function(hobby) {
//       console.log(this.name + " likes " + hobby);
//     });
//   }
// };
// person4.showHobbies();


// const person3 = {
//   name: "John",
//   hobbies: ["reading", "coding"],
//   showHobbies: function() {
//     this.hobbies.forEach(hobby => {
//       console.log(this.name + " likes " + hobby);
//     });
//   }
// };

// person3.showHobbies();

async function fetchData(){
  let result = await fetch("https://jsonplaceholder.typicode.com/posts");
  let data = await result.json();
  console.log(data);
}
fetchData();
