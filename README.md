# Server in C++

C++ Web Application Framework created from scratch. Inspired by Express and Django.

## Motivation

In the beginning, it was a simple HTTP server built using sockets in C++, but it evolved into a flexible and minimal framework for building web applications.

My C++, DSA, and Networking skills were honed by developing this project and I gained a deep understanding of how servers operate.

## Features

- Dynamic Router
- URL Path Params and Query String Support
- Response Status Codes
- JSON Parser and Creator
- JSON Body Support in Requests and Responses
- Cookies Support
- Automatic Public File Indexing and Parsing
- Routing and Controller Structure Similar to Express
- Request Redirect
- HTML Page Support
- Static Fields

### Note

Currently, this project only runs on Linux, but I plan to add support for Windows and Mac in the future.

## Run Locally

### Dependencies

- Linux Operating System
- C++ Compiler
- cmake
- Git

Clone the project

```bash
  git clone https://github.com/Suhaan-Bhandary/HTTP-Server-CPP
```

Go to the project directory

```bash
  cd HTTP-Server-CPP
```

Run Tests

```bash
  make testProject
```

Compile the Server

```bash
  make
```

Run the Server

```bash
  ./server
```

You will see the below output after running

```bash
Listening on Address: 127.0.0.1
Port: 8080
```

## Running Tests

To run tests, run the following command

```bash
  make testProject
```

## Usage/Examples

To Create a Web Application user can edit the app/ folder in the project.

#### User Folders

- app/Router: Define the routes of the Web Application.
- app/Controller: Stores the controllers for each route.
- app/public: Store all the files which are to be made public to the internet.
- app/templates: It is used to store all the html template.

## Authors

- [@Suhaan-Bhandary](https://github.com/Suhaan-Bhandary)

## 🔗 Links

[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://suhaan-bhandary.github.io/suhaan-portfolio/)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/suhaan-bhandary)

## FAQ

#### Support for Windows and Linux

Currently, it only supports Linux, but other platforms will be supported incrementally in the future.

#### How It is structured

It uses the MVC model to structure the Web Application.

#### Does it has all features of a Web Application Framework

It supports main features and in future new features like Template Engine, Database, Session and many more.

## Acknowledgements

- [HTTP Server Socket Setup](https://osasazamegbe.medium.com/showing-building-an-http-server-from-scratch-in-c-2da7c0db6cb7)
- [Resource on Cookie](https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/cookie)

## Feedback

If you have any feedback, please reach out to us at fake@fake.com
