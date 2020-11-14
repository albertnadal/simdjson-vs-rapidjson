# simdjson vs. RapidJSON

This is a very simple performance test to compare simdjson and rapidjson parsing times.

Download a big JSON file.

```sh
$ wget "https://raw.githubusercontent.com/zemirco/sf-city-lots-json/master/citylots.json"
```

You can get the real size of the file in bytes with command bellow.

```sh
$ wc -c < citylots.json
```

You can check the capabilities of your computer CPU with the command bellow.

```sh
$ sysctl -a | grep machdep.cpu.features
```

Compile, run and profile the main_simdjson.cpp application.

```sh
$ g++ -std=c++11 -Iinclude -O3 main_simdjson.cpp include/simdjson/simdjson.cpp -o main_simdjson
$ time ./main_simdjson
$ valgrind --tool=massif ./main_simdjson
```

Compile, run and profile the main_rapidjson.cpp application.

```sh
$ g++ -Iinclude -O3 main_rapidjson.cpp -o main_rapidjson
$ time ./main_rapidjson
$ valgrind --tool=massif ./main_rapidjson 
```
