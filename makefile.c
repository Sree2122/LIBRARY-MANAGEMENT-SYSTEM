library_manager: main.c library.c ui.c
        gcc -o library_manager main.c library.c ui.c

clean:
        rm -f library_manager