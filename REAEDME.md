# Readline - readline, getopt_long, format example

Getting Started Example of Rapid C++ Development

## Install

Install build-essential, cmake, boost library

```bash
sudo apt install build-essential cmake libboost-all-dev
```

## Usage

Building and running this program

```bash
cmake . && make && ./rl
```

### Options

Program options used when running
| help | input | output |
| ---- | ----- | ------ |
| -h or --help | -i or --input | -o or --output |

Help example

```bash
$ ./rl -h
readline, getopt_long, format example
hello 0>
```

Input output example

```bash
$ ./rl -i test.txt -o output.txt
Input option value: test.txt
Output option value: output.txt
hello 1>
```
