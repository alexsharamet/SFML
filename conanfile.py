from conans import ConanFile, CMake

class ExampleSFML(ConanFile):
    name = "ExampleSFML"
    generators = "cmake", "cmake_find_package"

    def requirements(self):
        self.requires("sfml/2.5.1@bincrafters/stable")
