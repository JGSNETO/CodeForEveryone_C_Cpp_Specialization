/*
# Adapter Pattern

The Adapter Pattern is a design pattern used to enable an interface of an existing class to be used as another interface. It acts as a bridge between two incompatible interfaces by adapting one interface to another, allowing objects to work together that otherwise couldn't due to incompatible interfaces.

Key Concepts
Adapter: The class that adapts one interface to another. It implements the target interface and translates calls from the client to the adaptee.
Adaptee: The class that needs to be adapted. It has an existing interface that doesn’t match the target interface.
Target: The interface that the client expects to work with. The adapter will adapt the adaptee to conform to this interface.
Client: The class that uses the target interface to interact with objects.

+-------------------+               +---------------------+
|    Client         |               |       Target        |
+-------------------+               +---------------------+
| - target          |               | + request()         |
| + operation()     |               +---------------------+
+--------|----------+                       ^
         |                                  |
         v                                  |
+---------------------+        +---------------------+
|      Adapter        |        |       Adaptee       |
+---------------------+        +---------------------+
| - adaptee           |        | + specificRequest() |
| + request()         |        +---------------------+
+---------------------+

*/