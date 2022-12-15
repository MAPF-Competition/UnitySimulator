# MAPF-simulator
Multi-Robot Motion Planning Algorithms, Benchmark Instances, and Visualization 

## Dependencies
Unity: [https://unity.com/download](https://unity.com/download)

Pybind11: [https://pybind11.readthedocs.io/en/stable/](https://pybind11.readthedocs.io/en/stable/)



## Folder structure
```
├── Assets/
    ├── DLLs/
    ├── Resources/
        ├── Maps/
        ├── Img/
        ├── PathFile/
        ├── Instances/
        ├── Texture/
    ├── Scenes/
    ├── Scripts/
├── src/
├── setup.py
├── simulator.py
├── readme.md

```

## Build C++ MAPF Simulator Library Using Pybind11
`python setup.py build_ext --inplace`

## Build Unity Standalone Visualizer
1. Download Unity from [https://unity.com/download](https://unity.com/download)
2. Create a Unity project
3. Put the Assets in the project
4. Build and run


## Simulator example usage
`python simulator.py --json example.json`

## Run visualizer with commnad line
`.\MAPF-2D.exe --map map_file --instance instance_file --paths paths_file`
