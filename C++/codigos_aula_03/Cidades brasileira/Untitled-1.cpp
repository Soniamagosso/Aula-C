def exercicio1(): 

    palavra=str(input("Digite uma palavra: ")) 

    lista=list(palavra) 

    segredo="" 

    for x in lista: 

        if (x=='z'):segredo+='a' 

        elif (x=='Z'):segredo+='A' 

        else: segredo+=chr(ord(x)+1) 

    print(segredo) 