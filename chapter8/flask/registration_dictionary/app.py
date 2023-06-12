from flask import Flask, render_template, request, redirect

app = Flask(__name__)

REGISTRANTS = {}

CS_COURSES = [
    "Javascript",
    "Java",
    "Exploring CS",
    "AP CSP",
    "AP CSP TA",
    "AP CS A"
]

@app.route("/")
def index():
    return render_template("index.html", courses=CS_COURSES)

@app.route("/register", methods=["POST"])
def register():
    # Validate submission
    if not request.form.get("name") or request.form.get("course") not in CS_COURSES:
        return render_template("failure.html")

    # Actually save the registration with a dictionary
    REGISTRANTS[request.form.get("name")] = request.form.get("course")

    # Comfirm registration
    return redirect("/registrants")

@app.route("/registrants")
def registrants():
    return render_template("registrants.html", registrants = REGISTRANTS)