from flask import Flask, render_template, request
import csv

app = Flask(__name__)

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

    # Actually save the registration
    file = open("registrants.csv", "a")
    writer = csv.writer(file)
    writer.writerow((request.form.get("name"), request.form.get("course")))
    file.close()

    # Comfirm registration
    return render_template("success.html")