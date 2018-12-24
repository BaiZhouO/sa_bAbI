#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_3[60];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_8 = 71;                           // Tag.BODY
    entity_7 = 50;                           // Tag.BODY
    if (entity_4 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 91;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_4){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_8] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER