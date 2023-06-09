from flask import Flask, render_template, request

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

    # Comfirm registration
    return render_template("success.html")