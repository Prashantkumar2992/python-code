FROM python:latest
WORKDIR /app
COPY . /app
RUN pip3 install --trusted-host pypi.python.org -r requirement.txt
RUN pip install --upgrade pip

EXPOSE 5000
ENV FLASK_APP = flask.py
CMD ["python","flask.py"]
