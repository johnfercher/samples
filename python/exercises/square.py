class Square:
    __height = 0.0
    __width = 0.0

    def __init__(self, __height, __width):
        self.__height = __height
        self.__width = __width

    def get_area(self):
        return self.__height * self.__width


square = Square(10, 10)

print(square.get_area())
