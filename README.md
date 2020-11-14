# simdjson vs. RapidJSON

Download a big JSON file.

```sh
$ wget "https://raw.githubusercontent.com/zemirco/sf-city-lots-json/master/citylots.json"
```

Compile and run the main_simdjson.cpp application:

```sh
$ g++ -std=c++11 -Iinclude -O3 main_simdjson.cpp include/simdjson/simdjson.cpp -o main_simdjson
$ time ./main_simdjson
```

Compile and run the main_rapidjson.cpp application:

```sh
$ g++ -Iinclude -O3 main_rapidjson.cpp -o main_rapidjson
$ time ./main_rapidjson
```
