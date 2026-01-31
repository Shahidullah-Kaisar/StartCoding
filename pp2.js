const paymentSuccess = true;
const marks = 80;

function enroll(callback, errorCallback) {
    console.log("Course enrollment is in progress");

    setTimeout(function () {
        if (paymentSuccess) {
            callback();
        } else {
            errorCallback("Payment Failed");
        }
    }, 2000);
}

function progress(callback, errorCallback) {
    console.log("Course on progress...");

    setTimeout(function () {
        if (marks >= 80) {
            callback();
        } else {
            errorCallback("You could not get enough marks to get the certificate");
        }
    }, 3000);
}

function getCertificate(callback) {
    console.log("Preparing your certificate");

    setTimeout(function () {
        callback("Congrats! You got the certificate");
    }, 4000);
}

// Callback Hell style
enroll(
    function () {
        progress(
            function () {
                getCertificate(function (value) {
                    console.log(value);
                });
            },
            function (error) {
                console.log(error);
            }
        );
    },
    function (error) {
        console.log(error);
    }
);
