from flask import Flask

app=Flask(__name__)

@app.route('/')
def hello():
    return "hello, world"

@app.route('/cdac')
def helloc():
    return "hello from cdac"


if __name__ == '__main__':
    app.run(debug = TRUE , host = '0.0.0.0' )
