#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_5[28];                       // Tag.BODY
    entity_2 = 42;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 51;                           // Tag.BODY
    while(entity_2 < entity_3){              // Tag.BODY
    entity_2++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_2] = 'c';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER