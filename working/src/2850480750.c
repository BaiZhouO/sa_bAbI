#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    entity_7 = 29;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_3 = 47;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    char entity_6[10];                       // Tag.BODY
    if (entity_4 < entity_3){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 55;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_4){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_7] = 'a';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_8 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER