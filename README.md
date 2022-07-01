# Hello Zephyr RTOS

Hello World project for Zephyr RTOS

## Requirements

  - [Zephyr](https://github.com/zephyrproject-rtos/zephyr/tree/main)

There are more requirements such as `qemu`, but it is covered in the [Getting Started Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html) on Zephyr.

## Development

Follow Zephyr [Getting Started Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html) to setup your development environment.

### .venv

For this project setup I've chosen to go with manual setup and use the python virtual environment, this means that I need to run this command when working on the project.

```
source ~/zephyrproject/.venv/bin/activate
```

The virtual environment is covered under [Get Zephyr and install Python dependencies](https://docs.zephyrproject.org/latest/develop/getting_started/index.html#get-zephyr-and-install-python-dependencies) in the **Install within virtual environment** tab on different OS.

### Build scripts

For compiling and running this project the `ZEPHYR_TOOLCHAIN_VARIANT` environment variable need to be defined.

```
export ZEPHYR_TOOLCHAIN_VARIANT=zephyr
```

Use `cmake` to generate the build scripts.

```
cmake -S . -B build -DBOARD={board}
```

`{board}`: The board the build to target, check [Supported Boards](https://docs.zephyrproject.org/latest/boards/index.html) for more information.

Generate `ninja` build scripts with `cmake`.

```
cmake -S . -B build -DBOARD={board} -GNinja
```

### Compile and Run

Use `cmake` to compile

```
cmake --build build -j4
```

Use `cmake` to compile and run

```
cmake --build build -j4 -t run
```

Use `ninja` to compile

```
ninja -C build
```

Use `ninja` to compile and run the supported application in `qemu`.

```
ninja -C build run
```

Use `control+a` then `x` to quit `qemu` emulator.

### `compile_commands.json`

`cmake` will generate the `compile_commands.json` file in the `build` directory, use `ln` to symlink it to the project root directory.

```
ln -sfn build/compile_commands.json .
```

