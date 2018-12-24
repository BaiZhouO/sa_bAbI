#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    char entity_2[30];                       // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_5[36];                       // Tag.BODY
    entity_9 = 14;                           // Tag.BODY
    entity_0 = 51;                           // Tag.BODY
    if(entity_7 < entity_9){                 // Tag.BODY
    entity_2[entity_0] = 'K';                // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                 // Tag.BODY
    entity_7 = 9;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_7] = 'E';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER