'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
def funcionletras():
    vocales = ["a", "e", "i", "o", "u"]
    print(f"\n\tListas original1: {vocales}")
    del vocales[3]
    print(f"del vocales[3]: {vocales}")

def parte2():
    vocales = ["a", "e", "i", "o", "u"]
    print(f"\n\tListas original2: {vocales}")
    del vocales[0:2]
    print(f"del vocales[0:2]: {vocales}")

def parte3():
    vocales = ["a", "e", "i", "o", "u"]
    print("\n\tLista original3:", vocales)
    del vocales[:]
    print(f"Después de eliminar todos los elementos de la lista: {vocales}")

def parte4():
    vocales = ["a", "e", "i", "o", "u"]
    print(f"\n\tLista original4: {vocales}")
    del vocales
    # En este caso, la variable 'vocales' ya no existe después de 'del vocales'
    print("\nLa lista 'vocales' ya no existe en este punto.")

def main():
    funcionletras()
    parte2()
    parte3()
    parte4()
if __name__ == "__main__":
    main()