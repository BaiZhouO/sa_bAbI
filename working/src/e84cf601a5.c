#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = 15;                           // Tag.BODY
    char entity_7[36];                       // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    if(entity_5 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 93;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_5] = 'M';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER