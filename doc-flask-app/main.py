
from flask import Flask
app = Flask(_name_)


@app.route('/')
def hello_world():
    return 'hello world'

if _name_=='_main_':
    app.run(host='0.0.0.0',debug=True)
