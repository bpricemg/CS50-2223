from flask import Flask, render_template, request, redirect
from cs50 import SQL

app = Flask(__name__)

db = SQL("sqlite:///courses.db")

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

    # Actually save the registration in db file
    db.execute("INSERT INTO registrants (name, course) VALUES(?, ?)", request.form.get("name"), request.form.get("course"))

    # Comfirm registration
    return redirect("/registrants")

@app.route("/registrants")
def registrants():
    registrants = db.execute("SELECT * FROM registrants")
    return render_template("registrants.html", registrants = registrants)

@app.route("/deregister", methods=["POST"])
def deregister():
    id = request.form.get("id")
    if id:
        db.execute("DELETE FROM registrants WHERE id = ?", id)
    return redirect("/registrants")