# Organized Project

## Description

The **Organized Project** is a C-based program designed to manage and manipulate a linked list of nodes. Each node contains an ID, a type, and a name. The project provides functionality to add, delete, sort, reverse, and display nodes in the linked list. It is built with modularity and extensibility in mind, making it easy to maintain and expand.

## Features

- **Add Nodes**: Add new nodes to the linked list with a unique ID, type, and name.
- **Delete Nodes**: Remove nodes from the linked list by their ID.
- **Sort Nodes**: Sort nodes by ID, name, or type in ascending or descending order.
- **Reverse List**: Reverse the entire linked list.
- **Display Nodes**: Print all nodes in the linked list with their details.
- **Custom String and Utility Functions**: Includes custom implementations of common string and utility functions like `my_strlen`, `my_strcmp`, and `my_strdup`.

## Usage

### Compilation

To compile the project, use the provided `Makefile`:

```bash
make
```

This will generate an executable named `organized`.

### Running the Program

Run the program using the following command:

```bash
./organized
```

The program uses a shell-like interface to interact with the linked list. You can use commands like `add`, `del`, `sort`, and `disp` to manage the list.

### Commands

- **Add Nodes**: 
  ```bash
  add <type> <name>
  ```
  Example:
  ```bash
  add SENSOR "Temperature Sensor"
  ```

- **Delete Nodes**:
  ```bash
  del <id>
  ```
  Example:
  ```bash
  del 1
  ```

- **Sort Nodes**:
  ```bash
  sort <ID|NAME|TYPE> [-r]
  ```
  Example:
  ```bash
  sort NAME -r
  ```

- **Display Nodes**:
  ```bash
  disp
  ```

- **Reverse List**:
  The list is automatically reversed when sorting by type.

## Notes

- Ensure all dependencies (like `ncurses`) are installed before compiling.
- The project is designed to handle basic linked list operations and can be extended further for more complex use cases.
