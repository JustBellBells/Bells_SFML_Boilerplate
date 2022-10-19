all:
	mkdir build -p
	rm build/*.exe -f
	g++ src/*.cpp -Iinclude/SFML-2.5.1/include -Iinclude/glm-master -Iinclude/glfw-3.3.8/include -o build/app.exe -Linclude/SFML-2.5.1/lib -lsfml-graphics -lsfml-window -lsfml-system
	./build/app.exe
compile:
	rm build/*.exe -f
	g++ src/*.cpp -Iinclude/SFML-2.5.1/include -Iinclude/glm-master -Iinclude/glfw-3.3.8/include -o build/app.exe -Linclude/SFML-2.5.1/lib -lsfml-graphics -lsfml-window -lsfml-system
run:
	./build/app.exe
clean:
	rm build/*.exe -f