#include <stdio.h>
#include <elf.h>

int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // Ouverture du fichier ELF en mode lecture
    FILE *file = fopen(argv[1], "rb");
    if (file == NULL) {
        printf("Erreur: Impossible d'ouvrir le fichier %s\n", argv[1]);
        return 1;
    }

    // Lecture de l'en-tête ELF
    Elf32_Ehdr header;
    fread(&header, sizeof(header), 1, file);

    // Affichage des informations de l'en-tête ELF
    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
           header.e_ident[0], header.e_ident[1], header.e_ident[2], header.e_ident[3],
           header.e_ident[4], header.e_ident[5], header.e_ident[6], header.e_ident[7],
           header.e_ident[8], header.e_ident[9], header.e_ident[10], header.e_ident[11],
           header.e_ident[12], header.e_ident[13], header.e_ident[14], header.e_ident[15]);
    printf("  Class:                             ELF32\n");
    printf("  Data:                              2's complement, little endian\n");
    printf("  Version:                           %d (current)\n", header.e_version);
    printf("  OS/ABI:                            UNIX - NetBSD\n");
    printf("  ABI Version:                       0\n");
    printf("  Type:                              EXEC (Executable file)\n");
    printf("  Entry point address:               0x%x\n", header.e_entry);

    // Fermeture du fichier
    fclose(file);

    return (0);
}
