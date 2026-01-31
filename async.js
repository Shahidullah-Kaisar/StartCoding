
// const status = true;

// console.log("Task 1");

// //promise definition
// const promise = new Promise(function(resolve, reject){
// 	setTimeout(function(){
// 		if(status){
// 			resolve("Task 2");
// 		}else{
// 			reject("Failled");
// 		}
// 	}, 2000);
// });

// //promise call
// promise
// 	.then((value)=>{
// 		console.log(value);
// 	})
// 	.catch((error)=>{
// 		console.log(error);
// 	})


// console.log("Task 3");

// //ref: learn with sumit


const paymentSuccess = true;
const marks = 80;

function enroll(){
	console.log("Course enrollment is in progress");

	const promise = new Promise(function(resolve, reject){

		setTimeout(function(){
			if(paymentSuccess){
				resolve();
			}else{
				reject("Payment Failed");
			}

		}, 2000)
	});

	return promise;
};

function progress(){
	console.log("Course on progress...");

	const promise = new Promise(function(resolve, reject){

		setTimeout(function(){
			if(marks >= 80){
				resolve();
			}else{
				reject("You could not enough marks to get the certificate");
			}
		}, 3000);
		
	});

	return promise;
}

function getCertificate(){
	console.log("Preparing your certificate");

	const promise = new Promise(function(resolve){
		setTimeout(function(){
			resolve("Congrats! You got the certificate");
		}, 4000)
	});

	return promise;
};

enroll()
	.then(progress)
	.then(getCertificate)
	.then(function(value){
		console.log(value);
	})
	.catch(function(error){
		console.log(error);
	})

